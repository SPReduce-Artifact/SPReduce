#!/usr/bin/env bash
CFILE="TestRecursiveReplacedException.java"

readonly REDUCTION_STAT_FILE=${REDUCTION_STAT_FILE:-""}
if [ -n "${REDUCTION_STAT_FILE}" ] ; then
  (flock -x 200; printf "%s " "$(date +%Y%m%d_%H%M%S_%Z)" >> "${REDUCTION_STAT_FILE}") 200>"${REDUCTION_STAT_FILE}.lock"
  
  _reduction_cleanup() {
    local exit_code=$?
    
    local run_async=0
    local cur_line=""
    local snap_file=""
    
    {
      flock -x 200
      if [ $exit_code -eq 0 ]; then
         if [ -n "$CFILE" ] && [ -f "$CFILE" ]; then
             snap_file="/tmp/snap_${RANDOM}_$(basename "$CFILE")"
             cp "$CFILE" "$snap_file"
             cur_line=$(($(wc -l < "${REDUCTION_STAT_FILE}") + 1))
             run_async=1
         fi
      fi
      
      echo "" >> "${REDUCTION_STAT_FILE}"
    } 200>"${REDUCTION_STAT_FILE}.lock"

    if [ $run_async -eq 1 ]; then
       /tmp/binaries/async_token_counter.sh "$cur_line" "$snap_file" "${REDUCTION_STAT_FILE}" </dev/null >/dev/null 2>&1 &
    fi
    
    exit $exit_code
  }
  
  trap _reduction_cleanup EXIT INT TERM
fi

script_dir=$(dirname "$(realpath "$0")")

class="compiler.exceptions.TestRecursiveReplacedException"
classpath=".:/HotspotTests-Java/lib/junit-4.13.1.jar:/HotspotTests-Java/lib/testng-6.14.3.jar:/HotspotTests-Java/lib/tools.jar:/HotspotTests-Java/HotspotTests-Java/."
javaMender="/FuzzerUtils/JavaMender.py"
mkdir -p compiler/exceptions
cp TestRecursiveReplacedException.java compiler/exceptions/TestRecursiveReplacedException.java
python3 $javaMender $script_dir/compiler/exceptions/TestRecursiveReplacedException.java
if ! /01JVMS/linux64/openjdk11/openj9_11/bin/javac -cp $classpath compiler/exceptions/TestRecursiveReplacedException.java
then
        exit 1
fi
if [ -n "${REDUCTION_STAT_FILE}" ]; then (flock -x 200; printf "%s" "C" >> "${REDUCTION_STAT_FILE}") 200>"${REDUCTION_STAT_FILE}.lock"; fi
> out1.txt
> out2.txt
timeout -s 9 10s /01JVMS/linux64/openjdk11/openj9_11/bin/java -cp $classpath $class > out1.txt 2>&1
exit_code=$?
if [ $exit_code -eq 124 ]; then
    exit 1
elif [ $exit_code -eq 137 ]; then
    exit 1
fi
timeout -s 9 10s /01JVMS/linux64/openjdk11/hotspot_11/bin/java -cp $classpath $class > out2.txt 2>&1
exit_code=$?
if [ $exit_code -eq 124 ]; then
    exit 1
elif [ $exit_code -eq 137 ]; then
    exit 1
fi
if grep -E -q "Exception|Error" out1.txt; then
    exit 1
fi
if grep -E -q "Exception|Error" out2.txt; then
    exit 1
fi
if diff -q out1.txt out2.txt > /dev/null; then
    exit 1
fi
timeout -s 9 10s /01JVMS/linux64/openjdk11/openj9_11/bin/java -cp $classpath $class > out3.txt 2>&1
if diff -q out3.txt out1.txt > /dev/null; then
    :
    exit 0
else
    exit 1
fi
        
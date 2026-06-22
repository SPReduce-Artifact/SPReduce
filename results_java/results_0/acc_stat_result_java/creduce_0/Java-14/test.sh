#!/usr/bin/env bash
CFILE="Test.java"

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

export REFERENCE_JAVA_HOME=/VECT/01JVMS/linux64/openjdk11/hotspot_11
export JAVA_UNDER_TEST=/01JVMS/linux64/openjdk11/openj9_11/bin/java
export TIME_OUT=30


export JAVA_UNDER_TEST="${JAVA_UNDER_TEST:-"/01JVMS/linux64/openjdk11/openj9_11/bin/java"}"
export JAVA_UNDER_TEST_OPTS="${JAVA_UNDER_TEST_OPTS:-"-Xmx1G "}"
javaMender="/FuzzerUtils/JavaMender.py"


python3 $javaMender Test.java
timeout -s 9 30s /01JVMS/linux64/openjdk11/hotspot_11/bin/javac -cp .:"/FuzzerUtils" Test.java
if [ $? -ne 0 ]; then
    exit 1
fi
if [ -n "${REDUCTION_STAT_FILE}" ]; then (flock -x 200; printf "%s" "C" >> "${REDUCTION_STAT_FILE}") 200>"${REDUCTION_STAT_FILE}.lock"; fi
timeout -s 9 30s /01JVMS/linux64/openjdk11/hotspot_11/bin/java ${JAVA_UNDER_TEST_OPTS} ${JAVA_ADD_OPTS} -cp :"/FuzzerUtils" Test > out1.txt 2> rt_err_ref
exit_code=$?
if [ $exit_code -eq 124 ]; then
    exit 1
elif [ $exit_code -eq 137 ]; then
    exit 1
fi
timeout -s 9 30s ${JAVA_UNDER_TEST} ${JAVA_UNDER_TEST_OPTS} ${JAVA_ADD_OPTS} -cp .:"/FuzzerUtils" Test > out2.txt 2>rt_err_rerun
exit_code=$?
if [ $exit_code -eq 124 ]; then
    exit 1
elif [ $exit_code -eq 137 ]; then
    exit 1
fi
if grep -E -q "Exception|Error|error|Killed" rt_err_ref; then
    exit 1
fi
if grep -E -q "Exception|Error|error|killed" rt_err_rerun; then
    exit 1
fi
diff -I ".*CompilerOracle.*" out1.txt out2.txt
res_out=$?
diff -I ".*CompilerOracle.*" rt_err_ref rt_err_rerun
res_err=$?
if [ $res_out -gt 0 ] || [ $res_err -gt 0 ]; then
	:
	exit 0
else
	exit 1
fi

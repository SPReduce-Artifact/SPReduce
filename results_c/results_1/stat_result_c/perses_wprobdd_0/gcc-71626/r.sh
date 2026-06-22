#!/usr/bin/env bash


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

set -o pipefail
set -o nounset

# need to configure this part
WHICH=0     # 0: gcc; 1: clang
GOODCOMP=1  # 0: doesn't compile; 1: compiles
BADCC=("gcc-4.9.0 -O3")
GOODCC=("gcc")
CFILE=small.c
TIMEOUTCC=30

rm -f out*.txt

#############################
# iterate over the good ones
#############################

for cc in "${GOODCC[@]}" ; do
  rm -f ./t ./out1.txt
  
  (timeout -s 9 $TIMEOUTCC $cc $CFILE > out1.txt 2>&1) >& /dev/null
  ret=$?
  
  if [ $GOODCOMP -eq 1 ] ; then # does compile
    if [ $ret -ne 0 ] ; then
      exit 1
    fi
  else # does not compile, so make sure it doesn't ICE
    if grep 'internal compiler error: ' out1.txt ||\
    grep 'PLEASE ATTACH THE FOLLOWING FILES TO THE BUG REPORT' out1.txt
    then
      exit 1
    fi
  fi
done
if [ -n "${REDUCTION_STAT_FILE}" ]; then (flock -x 200; printf "%s" "C" >> "${REDUCTION_STAT_FILE}") 200>"${REDUCTION_STAT_FILE}.lock"; fi
#############################
# iterate over the bad ones
#############################

for cc in "${BADCC[@]}" ; do
  rm -f ./t ./out2.txt
  
  (timeout -s 9 $TIMEOUTCC $cc $CFILE > out2.txt 2>&1) >& /dev/null
  
  if [ $WHICH -eq 1 ] ; then # clang
    if ! grep 'PLEASE ATTACH THE FOLLOWING FILES TO THE BUG REPORT' out2.txt ||\
    ! grep 'The annotation should be until the most recent cached token' out2.txt ||\
    grep ':[0-9]*: error: ' out2.txt | grep -E -v 'error: expected'  #conflicting|error: declaration|error: variable'
    then
      exit 1
    fi
  else # gcc
    if ! grep 'internal compiler error: in output_constant_pool_2' out2.txt 
    then
      exit 1
    fi
  fi
done

:
exit 0

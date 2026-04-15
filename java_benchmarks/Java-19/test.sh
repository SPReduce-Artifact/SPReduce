#!/usr/bin/env bash
CFILE="Test.java"
export REFERENCE_JAVA_HOME=/VECT/01JVMS/linux64/openjdk11/hotspot_11
export JAVA_UNDER_TEST=/01JVMS/linux64/openjdk11/openj9_11/bin/java
export TIME_OUT=20


export JAVA_UNDER_TEST="${JAVA_UNDER_TEST:-"/01JVMS/linux64/openjdk11/openj9_11/bin/java"}"
export JAVA_UNDER_TEST_OPTS="${JAVA_UNDER_TEST_OPTS:-"-Xmx1G "}"
javaMender="/FuzzerUtils/JavaMender.py"
CURRENT_HASH=$(md5sum "$CFILE" | cut -d' ' -f1)
if [ -f "$LAST_HASH_FILE" ]; then
    if [ "$CURRENT_HASH" == "$(cat "$LAST_HASH_FILE")" ]; then
        exit 1
    fi
fi

python3 $javaMender Test.java
timeout -s 9 20s /01JVMS/linux64/openjdk11/hotspot_11/bin/javac -cp .:"/FuzzerUtils" Test.java
if [ $? -ne 0 ]; then
    exit 1
fi
# __MARK:C__
timeout -s 9 20s /01JVMS/linux64/openjdk11/hotspot_11/bin/java ${JAVA_UNDER_TEST_OPTS} ${JAVA_ADD_OPTS} -cp :"/FuzzerUtils" Test > out1.txt 2> rt_err_ref
exit_code=$?
if [ $exit_code -eq 124 ]; then
    exit 1
elif [ $exit_code -eq 137 ]; then
    exit 1
fi
timeout -s 9 20s ${JAVA_UNDER_TEST} ${JAVA_UNDER_TEST_OPTS} ${JAVA_ADD_OPTS} -cp .:"/FuzzerUtils" Test > out2.txt 2>rt_err_rerun
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
	echo "$CURRENT_HASH" > "$LAST_HASH_FILE"
	# __MARK:0__
	exit 0
else
	exit 1
fi

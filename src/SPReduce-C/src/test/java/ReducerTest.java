import SPReduce.reducer.ReducerRunner;
import SPReduce.reducer.ReducerType;
import SPReduce.tester.TestRecord;
import SPReduce.utils.RecordType;

import java.io.File;

public class ReducerTest {
    public static void main(String[] args) throws Exception {
        TestRecord.initialize("testcases"+ File.separator+"test1","Test.c","test.sh");
        /*if(InitialChecker.check()){
            Logger.log("Initial check passed");
        }*/
        ReducerRunner reducerRunner=new ReducerRunner(ReducerType.INLINE_REDUCER, RecordType.INLINE_REDUCER);
        //reducerRunner=new ReducerRunner(ReducerType.GLOBAL_REDUCER);
        TestRecord.v().finalOutput();
    }
}

import SPReduce.tester.InitialChecker;
import SPReduce.tester.*;
import SPReduce.utils.Logger;

import java.io.File;

public class TestOutput {

    public static void main(String[] args){
        String currentPath = System.getProperty("user.dir");
        Logger.log("working dir: " + currentPath);
        TestRecord.initialize("testcases"+ File.separator+"test1","Test.c","test.sh");
        if(InitialChecker.check()){
            Logger.log("Initial check passed");
        }

    }
}

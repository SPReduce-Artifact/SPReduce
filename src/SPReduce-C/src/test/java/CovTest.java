import SPReduce.parser.FileParser;
import SPReduce.parser.RewriterType;
import SPReduce.reducer.CoverageHelper;
import SPReduce.tester.TestRecord;
import SPReduce.utils.Logger;

import java.io.File;
import java.util.List;

public class CovTest {
    public static void main(String[] args) throws Exception {
        TestRecord.initialize("testcases"+ File.separator+"test1","Test.c","test.sh");
        //TestRecord.v().newFileOutput(TestRecord.v().getLastSuccess());
        FileParser parser=new FileParser(RewriterType.DEPENDENCY_REWRITER);
        //new CoverageHelper(parser.getAST()).genCoverageFile();
        List<Integer> uncoveredLines=new CoverageHelper(parser.getAST()).getCoverageResolver().getUnexecutedLines();

        for (int line : uncoveredLines) {
            Logger.log("Line " + line);
        }
    }
}

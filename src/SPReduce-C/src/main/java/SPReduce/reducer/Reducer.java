package SPReduce.reducer;

import SPReduce.parser.FileParser;
import SPReduce.tester.OutputTester;
import SPReduce.tester.TestContext;
import SPReduce.tester.TestRecord;
import SPReduce.utils.Logger;

import java.util.List;
import java.util.function.Supplier;

public abstract class Reducer {
    FileParser parser;
    public Reducer(FileParser parser){
        this.parser=parser;
    }

    int runLimit=Integer.MAX_VALUE;
    public abstract void run();
    protected void success(){
        Logger.log("Reduce success!");
        TestRecord.v().success();
        parser.refresh();
    }

    protected <T> void standardReduceProcess(OneRoundDeltaSelector<T> deltaSelector, Supplier<List<T>> finder){
        int runCount=0;
        while (!deltaSelector.ended&&runCount<runLimit){
            List<T> nodes=deltaSelector.get();
            boolean succeed=parser.getFileRewriter().reduceNodes(nodes);
            if (!succeed){
                deltaSelector.fail();
                continue;
            }
            runCount++;
            TestContext testContext=new OutputTester().run();
            if(testContext.getTestStatus().succeed()){
                success();
                List<T> toDelete=finder.get();
                deltaSelector.success(toDelete);
            }else {
                Logger.log("Reduce failed.");
                deltaSelector.fail();
            }
        }
    }
    protected <T> void resetReduceProcess(OneRoundDeltaSelector<T> deltaSelector, Supplier<List<T>> finder){
        int runCount=0;
        while (!deltaSelector.ended&&runCount<runLimit){
            List<T> nodes=deltaSelector.get();
            boolean succeed=parser.getFileRewriter().reduceNodes(nodes);
            if (!succeed){
                deltaSelector.fail();
                continue;
            }
            runCount++;
            TestContext testContext=new OutputTester().run();
            if(testContext.getTestStatus().succeed()){
                success();
                List<T> toDelete=finder.get();
                deltaSelector.success(toDelete);
            }else {
                Logger.log("Reduce failed.");
                deltaSelector.resetFail();
            }
        }
    }
}

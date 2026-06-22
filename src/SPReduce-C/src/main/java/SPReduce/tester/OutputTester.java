package SPReduce.tester;

import SPReduce.utils.Record;

import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.concurrent.TimeUnit;

import static java.lang.System.exit;

public class OutputTester {
    boolean preCheck(){
        return TestRecord.v().checkOutput();
    }
    static TimeoutController timeoutController=new TimeoutController();
    public TestContext runUnchecked(){
        Record.v().startRun();
        int exitCode=1;
        long time=System.currentTimeMillis();
        try {
            ProcessBuilder processBuilder=new ProcessBuilder("bash",TestRecord.v().getTestBashName());
            processBuilder.directory(new File(TestRecord.v().getFullPath()));
            processBuilder.redirectErrorStream(true);
            Process process=processBuilder.start();

            Thread streamExhauster = new Thread(() -> {
                try (InputStream is = process.getInputStream()) {
                    byte[] buffer = new byte[1024];
                    while (is.read(buffer) != -1) {
                    }
                } catch (IOException ignored) {  }
            });
            streamExhauster.start();
            if(process.waitFor(timeoutController.getTimeoutMills(), TimeUnit.MILLISECONDS)){
                exitCode= process.exitValue();
            }else {
                process.destroy();
                if(!process.waitFor(100, TimeUnit.MILLISECONDS)){
                    process.destroyForcibly();
                }
                exitCode=7777;
            }

        }catch (IOException | InterruptedException e){
            e.printStackTrace();
            exit(7);
        }
        time=System.currentTimeMillis()-time;
        boolean timeoutFile=Files.exists(Paths.get(TestRecord.v().getFullPath()+File.separator+"TIMEOUT"));
        TestContext testContext=new TestContext(new TestStatus(exitCode==0,exitCode==7777||timeoutFile));
        if(!testContext.getTestStatus().timeout()){
            if (testContext.getTestStatus().succeed()){
                timeoutController.success(time);
            }else {
                timeoutController.fail(time);
            }
        }
        Record.v().endRun(testContext);
        return testContext;
    }
    public TestContext run(){
        if(!preCheck()){
            return new TestContext(new TestStatus(false,false));
        }
        TestContext testContext=runUnchecked();
        if(testContext.getTestStatus().succeed()){
            TestRecord.v().finalOutput();
        }
        return testContext;
    }

}

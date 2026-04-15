package SPReduce;


import com.github.difflib.patch.AbstractDelta;
import com.github.difflib.patch.DeltaType;
import com.github.difflib.patch.Patch;

import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.StandardCopyOption;
import java.util.*;
import java.util.concurrent.TimeUnit;

import static java.lang.System.exit;

public class OutputTester {

    public static String JdkPath="";
    public static String classPath="";
    public static String lastSuccess="";
    public static boolean editPrepared=false;

    public static String subDirectory="";
    public static String originalFile;
    public static String jacocoPath="/tmp/binaries";
    public static TimeoutController timeoutController=new TimeoutController(false);
    public static void init(){
        try {
            originalFile=Files.readString(Path.of(MainReducer.workingDir+MainReducer.targetClass+".java"));
            editPrepared=true;
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
    static int cacheWorkTime=0;
    public static boolean runBash(){
        /*
        MainReducer.testCounter.cacheStart();
        MainReducer.testCounter.start1();
        FileEdit fileEdit=getDiff();
        MainReducer.testCounter.finish1();
        if(fileEdit!=null) {
            if (failCache.containsKey(fileEdit.size)){
                for (FileEdit prevFileEdit:failCache.get(fileEdit.size)){
                    if(FileEdit.equal(prevFileEdit,fileEdit)){
                        System.out.println("Cache worked for the "+cacheWorkTime++ + " time");
                        MainReducer.testCounter.cacheWork();
                        MainReducer.testCounter.cacheFinish();
                        return false;
                    }
                }
            }
        }
        MainReducer.testCounter.cacheFinish();*/
        if(checkChanges()){
            System.out.println("Unchanged output produced");
            return false;}
        MainReducer.testCounter.execute();
        try {
            String cmd="./" +MainReducer.bashName;
            ProcessBuilder processBuilder=new ProcessBuilder();
            processBuilder.directory(new File(System.getProperty("user.dir")+"/"+MainReducer.workingDir));
            Process process=processBuilder.command(cmd).start();
            int exitCode=1;
            long startTIme=System.currentTimeMillis();
            if(process.waitFor(timeoutController.getTimeoutMilliSeconds(), TimeUnit.MILLISECONDS)){
                exitCode= process.exitValue();
            }else {
                MainReducer.testCounter.timeout();
                System.out.println("Forced to kill process:"+process.pid());
                process.destroy();
                if(!process.waitFor(100,TimeUnit.MILLISECONDS)){
                    process.destroyForcibly();
                }
                exitCode=7777;
            }
            System.out.println(System.getProperty("user.dir")+"/"+MainReducer.workingDir+" "+exitCode);
            if(exitCode==0){
                timeoutController.success((int)(System.currentTimeMillis()-startTIme));
            }else if(exitCode==7777){
                timeoutController.timeout();
            }else  {
                timeoutController.failed((int)(System.currentTimeMillis()-startTIme));
            }
            if(exitCode==0){
                lastSuccess=MainReducer.workingDir;
                MainReducer.testCounter.success();
            }
            /*
            if(exitCode==0){
                lastSuccess=MainReducer.workingDir;
                if(fileEdit!=null){
                    Set<Integer> removeKey=new HashSet<>();
                    for(Integer key:failCache.keySet()){
                        if(key>fileEdit.size){
                            removeKey.add(key);
                        }
                    }
                    for (Integer key:removeKey){
                        failCache.remove(key);
                    }
                }
            }else if(fileEdit!=null){
                if (!failCache.containsKey(fileEdit.size)){
                    failCache.put(fileEdit.size,new ArrayList<FileEdit>());
                }
                failCache.get(fileEdit.size).add(fileEdit);
            }*/

            MainReducer.testCounter.endTest();
            return exitCode==0;
        }catch (IOException|InterruptedException e){
            e.printStackTrace();
            exit(-1);
        }
        return false;
    }
    public static boolean runBashForce(){
        MainReducer.testCounter.execute();
        try {
            String cmd="./" +MainReducer.bashName;
            ProcessBuilder processBuilder=new ProcessBuilder();
            processBuilder.directory(new File(System.getProperty("user.dir")+"/"+MainReducer.workingDir));
            Process process=processBuilder.command(cmd).start();
            int exitCode=1;
            long startTIme=System.currentTimeMillis();
            if(process.waitFor(timeoutController.getTimeoutMilliSeconds(), TimeUnit.MILLISECONDS)){
                exitCode= process.exitValue();
            }else {
                MainReducer.testCounter.timeout();
                System.out.println("Forced to kill process:"+process.pid());
                process.destroy();
                if(!process.waitFor(100,TimeUnit.MILLISECONDS)){
                    process.destroyForcibly();
                }
                exitCode=7777;
            }
            System.out.println(System.getProperty("user.dir")+"/"+MainReducer.workingDir+" "+exitCode);
            if(exitCode==0){
                timeoutController.success((int)(System.currentTimeMillis()-startTIme));
            }else if(exitCode==7777){
                timeoutController.timeout();
            }else  {
                timeoutController.failed((int)(System.currentTimeMillis()-startTIme));
            }
            if(exitCode==0){
                lastSuccess=MainReducer.workingDir;
                MainReducer.testCounter.success();
            }
            MainReducer.testCounter.endTest();
            return exitCode==0;
        }catch (IOException|InterruptedException e){
            e.printStackTrace();
            exit(-1);
        }
        return false;
    }
    static boolean checkChanges() {
        if(Objects.equals(lastSuccess, "")||Objects.equals(lastSuccess, MainReducer.workingDir)){return false;}
        try {
            byte[] lastFile= Files.readAllBytes(Paths.get(lastSuccess+MainReducer.targetClass+".java"));
            byte[] currentFile= Files.readAllBytes(Paths.get(MainReducer.workingDir+MainReducer.targetClass+".java"));
            if(Arrays.equals(lastFile,currentFile)){
                System.out.println(lastSuccess+"=="+MainReducer.workingDir);
            }
            return Arrays.equals(lastFile,currentFile);
        } catch (IOException e) {
            e.printStackTrace();
        }
        return false;
    }

    static boolean compileTarget(){
        if(!Objects.equals(subDirectory, "")){
            String currentDir=System.getProperty("user.dir")+"/"+MainReducer.workingDir;
            Path subDir=Paths.get(currentDir+subDirectory);
            Path source=Paths.get(currentDir + MainReducer.targetClass+".java");
            Path target=Paths.get(currentDir +subDirectory+ MainReducer.targetClass+".java");
            try {
                Files.createDirectories(subDir);
                Files.copy(source,target, StandardCopyOption.REPLACE_EXISTING);
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
        try {
            String javacPath=JdkPath+"/bin/javac";
            ProcessBuilder processBuilder = new ProcessBuilder(javacPath, "-cp",classPath, subDirectory+ MainReducer.targetClass+".java");
            processBuilder.directory(new File(System.getProperty("user.dir")+"/"+MainReducer.workingDir));
            Process process = processBuilder.start();
            int exitCode=process.waitFor();

            if(exitCode==0){System.out.println("compile success");return true;}
        } catch (IOException | InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("compile failed");return false;
    }
    public static void runJacoco(){
        if(!compileTarget()){return;}
        try {
            System.out.println("start running "+JdkPath+"java");
            String jacocoAgentPath = jacocoPath+"/"+"jacoco-0.8.12/lib/jacocoagent.jar";
            String coverageOutput = "jacoco.exec";
            String javaAgentOption = String.format("-javaagent:%s=destfile=%s", jacocoAgentPath, coverageOutput);
            String javaPath=JdkPath+"/bin/java";
            ProcessBuilder processBuilder = new ProcessBuilder(javaPath, "-cp",classPath,javaAgentOption, MainReducer.fullClassName);
            processBuilder.directory(new File(System.getProperty("user.dir")+"/"+MainReducer.workingDir));
            File outFile=new File(MainReducer.workingDir+"out1.txt");
            processBuilder.redirectOutput(outFile);
            processBuilder.redirectError(outFile);
            int exitCode=777777;
            Process process = processBuilder.start();
            boolean finished = process.waitFor(timeoutController.getTimeoutMilliSeconds(), TimeUnit.MILLISECONDS);
            if (finished) {
                exitCode = process.exitValue();
                System.out.println("Process completed with exit code: " + exitCode);
            } else {
                System.out.println("Process timed out. Terminating the process...");
                process.destroy();
                if(!process.waitFor(100,TimeUnit.MILLISECONDS)){
                    process.destroyForcibly();
                }
            }
            System.out.println("coverage data stored in " + coverageOutput);
            System.out.println("process exit: " + exitCode);
            CoverageResolver.JacocoCoverageReader();
        } catch (IOException | InterruptedException e) {
            e.printStackTrace();
        }
    }

}

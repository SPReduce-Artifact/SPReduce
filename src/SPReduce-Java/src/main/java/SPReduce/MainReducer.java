package SPReduce;

import org.eclipse.jdt.core.dom.AST;
import org.eclipse.jdt.core.dom.ASTParser;
import org.eclipse.jdt.core.dom.CompilationUnit;
import org.eclipse.jdt.core.dom.rewrite.ASTRewrite;
import org.eclipse.jface.text.Document;

import javax.tools.JavaCompiler;
import javax.tools.ToolProvider;
import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Objects;

public class MainReducer {
    public static String targetClass="Test";
    public static String fullClassName="Test";
    public static String regex="10";
    public static CompilationUnit cu;
    public static String workingDir="TestCase/";
    public static String baseDir="TestCase/";
    public static String bashName="test.sh";
    public static boolean firstHalf=false;
    //public static List<String> className;
    public static int timeoutSeconds=20;
    public static String currentJvmPath="";
    public static String sourceCode;
    public static boolean enableCoverage=true;
    public static ASTParser parser;
    public static ASTRewrite rewriter;
    public static Document document;
    private static int workingNum=0;
    public static boolean timeout=false;
    static TestCounter testCounter=new TestCounter();

    public static void init(){

        workingDir=baseDir+"temp0/";
        Path targetDir= Paths.get(workingDir);
        try {
            deleteDirectory(new File(workingDir));
            if (!Files.exists(targetDir)) {
                Files.createDirectories(targetDir);
            }
            Path sourceFile;
            sourceFile= Paths.get(baseDir+targetClass+".java");
            Path targetFile = Paths.get(workingDir+targetClass+".java");
            Path backupFile = Paths.get(baseDir+targetClass+"_orig.java");
            Files.copy(Paths.get(baseDir+bashName),Paths.get(workingDir+bashName));
            Files.copy(sourceFile,targetFile);
            Files.copy(sourceFile,backupFile);
        }catch (IOException e) {
            e.printStackTrace();
        }

        boolean flag=false;
        for (int i = 0; i < 15; i++) {
            if(testOutput(false)){
                flag=true;
                break;
            }
        }
        if(!flag){
            System.out.println("Initialize failed");
            System.exit(1);
        }
    }
    public static String getCurrentFile() throws IOException {
        Path targetFile = Paths.get(workingDir+targetClass+".java");
        return Files.readString(targetFile);
    }

    public static void analyseCurrent(){
        try {
            sourceCode = Files.readString(Paths.get(workingDir+targetClass+".java"));
            document=new Document(sourceCode);
            parser = ASTParser.newParser(AST.JLS13);
            parser.setResolveBindings(true);
            parser.setSource(sourceCode.toCharArray());
            parser.setKind(ASTParser.K_COMPILATION_UNIT);
            parser.setEnvironment(null, null, null, true);
            parser.setUnitName(targetClass+".java");
            System.out.println("Analyse started");
            cu = (CompilationUnit) (parser.createAST(null));
            rewriter=ASTRewrite.create(cu.getAST());
            ConstraintAnalyst.resolveConstrains();
            System.out.println("Analyse complete");
        }catch (IOException e) {
            e.printStackTrace();
        }
    }
    public static void tempOutput(){
        advanceWorkingDir();
        try {
            //String output = cu.toString();
            String output=document.get();
            Files.write(Paths.get(workingDir+targetClass+".java"), output.getBytes());
            System.out.println("output: "+workingDir+targetClass+".java");
        }catch (IOException e) {
            e.printStackTrace();
        }
    }
    public static void tempOutput(String output){
        advanceWorkingDir();
        try {
            Files.write(Paths.get(workingDir+targetClass+".java"), output.getBytes());
            System.out.println("output: "+workingDir+targetClass+".java");
        }catch (IOException e) {
            e.printStackTrace();
        }
    }
    public static void fileOutput(){
        try {
            //FunctionAdapter.undoInsertPrint();
            String output=document.get();
            Files.write(Paths.get(baseDir+targetClass+".java"), output.getBytes());
        }catch (IOException e) {
            e.printStackTrace();
        }
    }
    /*
     */
    public static void fileOutput(String fileSuffix){
        try {
            //FunctionAdapter.undoInsertPrint();
            String output=document.get();
            Files.write(Paths.get(baseDir+targetClass+"_"+fileSuffix+".java"), output.getBytes());
        }catch (IOException e) {
            e.printStackTrace();
        }
    }
    public static boolean testOutput(boolean testCoverage){
        if(testCoverage){
            OutputTester.runJacoco();
            return true;
        }else {
            return OutputTester.runBash();
        }


    }
    public static void advanceWorkingDir(){
        workingNum++;
        workingDir=baseDir+"temp"+workingNum+"/";
        deleteDirectory(new File(workingDir));
        try {
            Path targetDir=Paths.get(workingDir);
            if (!Files.exists(targetDir)) {
                Files.createDirectories(targetDir);
            }
            Files.copy(Paths.get(baseDir+bashName),Paths.get(workingDir+bashName));
        }catch (IOException e) {
            e.printStackTrace();
        }
    }
    public static void decentWorkingDir(){
        System.out.println("decentWorkingDir");
        if (workingNum < 0) {
            return;
        }
        workingNum--;
        String newDir=baseDir+"temp"+workingNum+"/";
        File dir=new File(workingDir);
        if(deleteDirectory(dir)){
            workingDir=newDir;
        }else {
            System.out.println("decentWorkingDir Failed");
            workingNum++;
        }
    }
    public static boolean deleteDirectory(File directory) {
        if (!directory.exists()) {
            return false;
        }

        if (directory.isDirectory()) {
            File[] files = directory.listFiles();
            if (files != null) {
                for (File file : files) {
                    if (file.isDirectory()) {
                        deleteDirectory(file);
                    }else if (!file.delete()) {
                        System.out.println("Failed to remove file: " + file.getAbsolutePath());
                    }
                }
            }
        }
        return directory.delete();
    }

    private static boolean compileJavaFileOld(String filePath) {
        JavaCompiler compiler = ToolProvider.getSystemJavaCompiler();
        if (compiler == null) {
            System.err.println("Failed to find Java compiler");
            return false;
        }
        int result = compiler.run(null, null, null,filePath);
        if (result == 0) {
            System.out.println("compile succeed");
            return true;
        } else {
            System.err.println("compile failed");
            return false;
        }
    }


    public static void run(){
        init();
        DeclarationFiller.start();
        OutputTester.init();
        /**/
        String nowSuccess = document.get();
        boolean flag=true;
        while (flag) {
            if (enableCoverage) {
                testCounter.start("coverage");
                CoverageDelta.run();
                testCounter.finish("coverage");
            }
            OutputTester.init();
            testCounter.start("callTrace");
            CallTraceDelta.run();
            testCounter.finish("callTrace");
            if (firstHalf) {
                testCounter.endTest();
                fileOutput();
                return;
            }
            testCounter.start("inline");
            CommentAnalyst.run();
            InlineAnalyst.run();
            testCounter.finish("inline");
            testCounter.start("globalDD1");
            analyseCurrent();
            GlobalDelta.statementLevel = CallTraceDelta.reverse || InlineAnalyst.inlineWorked;
            GlobalDelta.globalDD();
            testCounter.finish("globalDD1");

            OutputTester.init();
            testCounter.start("expressionDelta");
            ExpressionAnalyst.expressionDelta();
            testCounter.finish("expressionDelta");
            OutputTester.init();
            testCounter.start("globalDD2");
            GlobalDelta.statementLevel = true;
            GlobalDelta.globalDD();
            testCounter.finish("globalDD2");
            GlobalDelta.statementLevel = true;
            GlobalDelta.blockUndone = true;
            GlobalDelta.globalDD();
            GlobalDelta.blockUndone = false;
            if(Objects.equals(nowSuccess, document.get())){
                flag=false;
            }else {
                nowSuccess=document.get();
            }
        }
        testCounter.endTest();
        fileOutput();
/*
        if(!testOutput()){return;}
        FunctionAdapter.insertPrint();
        tempOutput();
        if(!testOutput()){return;}
        boolean complete=false;
        while (!complete){
            analyseCurrent();
            //adaption
            tempOutput();
            if(!testOutput()){continue;}
            complete=checkDifference();
        }
        fileOutput();
*/
    }
    public static void main(String[] args) {
        run();
    }
}

package SPReduce.parser;

import org.eclipse.cdt.core.dom.ast.IASTNode;
import SPReduce.parser.rewriter.Rewriter;

import java.util.ArrayList;
import java.util.List;

public class ExpReduceUnit {
    IASTNode originNode;
    IASTNode replaceNode;
    String replaceString;
    List<int[]> deleteSpace;
    String text;

    public ExpReduceUnit(IASTNode originNode, IASTNode replaceNode) {
        this.originNode = originNode;
        this.replaceNode = replaceNode;
        replaceString=null;
    }
    public ExpReduceUnit(IASTNode originNode, String replaceString){
        this.originNode = originNode;
        this.replaceString=replaceString;
        replaceNode=null;
    }
    public ExpReduceUnit(int start,int end,String text){
        this.originNode = null;
        this.replaceString=null;
        replaceNode=null;
        deleteSpace=new ArrayList<>();
        deleteSpace.add(new int[]{start, end});
        this.text=text;
    }
    public ExpReduceUnit(List<int[]> deleteSpace, String text){
        this.deleteSpace=deleteSpace;
        this.originNode = null;
        this.replaceString=null;
        replaceNode=null;
        this.text=text;
    }
    public void apply(Rewriter rewriter){
        if(replaceString != null){
            rewriter.replaceNode(replaceString,originNode);
            return;
        }
        if(replaceNode != null){
            rewriter.replaceNode(replaceNode,originNode);
            return;
        }
        if(originNode != null){
            rewriter.removeNode(originNode);
            return;
        }
        for (int[] space:deleteSpace){
            rewriter.removePhrase(space[0],space[1]);
        }
    }
    public IASTNode getOriginNode(){
        return originNode;
    }
    public String getIdentifier(){
        if(originNode!=null){
            return originNode.getRawSignature();
        }
        return "";
    }
    public int getGain() {
        int originalLength = 0;
        int newLength = 0;

        if (originNode != null) {
            originalLength = originNode.getRawSignature().length();

            if (replaceString != null) {
                newLength = replaceString.length();
            } else if (replaceNode != null) {
                newLength = replaceNode.getRawSignature().length();
            } else {
                newLength = 0;
            }
        }
        else if (deleteSpace != null && !deleteSpace.isEmpty()) {
            for (int[] space : deleteSpace) {
                originalLength += (space[1] - space[0]);
            }
            newLength = 0;
        }

        return originalLength - newLength;
    }
    @Override
    public String toString(){
        if(replaceString != null){
            return originNode.getRawSignature()+" -> "+replaceString;
        }
        if(replaceNode != null){
            return originNode.getRawSignature()+" -> "+replaceNode.getRawSignature();
        }
        if(originNode != null){
            return originNode.getRawSignature()+" -> ";
        }
        return text+" -> ";
    }
}

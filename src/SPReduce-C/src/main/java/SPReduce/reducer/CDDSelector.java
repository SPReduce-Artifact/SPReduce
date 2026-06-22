package SPReduce.reducer;
import SPReduce.utils.Logger;

import java.util.ArrayList;
import java.util.List;

public class CDDSelector<T> {
    private List<T> targetList;
    private int step;
    private int startPin=0;//mark start position of a round
    private int startPos=0;
    private int r=1;//round number
    private double p0=0;//initial probability
    private boolean overRound=false;
    public boolean ended=false;
    public int stepLimit=1;
    public CDDSelector(List<T> targetList){
        if(targetList.isEmpty()){ended=true;}
        this.targetList=targetList;
        initP0(targetList.size());
    }
    public CDDSelector(List<T> targetList, int startStep){
        if(targetList.isEmpty()){ended=true;}
        this.targetList=targetList;
        initP0(startStep);
    }
    public List<T> get(){
        List<T> resList=new ArrayList<>();
        if(step<=0){ended=true;return resList;}
        Logger logger=new Logger();
        Logger.log("From 0-"+(targetList.size()-1)+" step:"+step+" stepLimit:"+stepLimit+" startPos:"+startPos+" startPin:"+startPin);
        logger.logStart("Deleting: ");
        for (int i = 0; i < step; i++) {
            logger.logPart(startPos+",");
            resList.add(targetList.get(startPos));
            startPos++;
            if(startPos>=targetList.size()){startPos=0;}
            if(startPos==startPin){overRound=true;break;}
        }
        logger.endLog();
        return resList;
    }
    public void success(List<T> updateList){
        overRound=false;
        targetList=updateList;
        if(targetList.isEmpty()){
            ended=true;
            return;
        }
        if (targetList.size()<step){
            step=targetList.size();
        }
        startPin=startPos-step;
        while (startPin<0){
            startPin+=targetList.size();
        }
        while (startPin>=targetList.size()){
            startPin-=targetList.size();
        }
        startPos=startPin;
    }
    public void success(List<T> updateList,int startPos){
        success(updateList);
        this.startPos=startPos;
        this.startPin=startPos;
    }
    public void fail(){
        if(!overRound){return;}
        startPin=0;
        startPos=0;
        if(step<=stepLimit){ended=true;}
        updateStep();
        overRound=false;
    }
    public void resetFail(){
        if(!overRound){return;}
        startPos=startPin;
        if(step<=stepLimit){ended=true;}
        updateStep();
        overRound=false;
    }
    private void initP0(int startStep){
        step=startStep;
        p0=1-Math.exp(-1/(double)startStep);
    }
    private void updateStep(){
        r+=1;
        double pr=p0*Math.pow(1.582,r);
        double sTemp=-(1/Math.log1p(-pr));
        int sp=(int)Math.floor(sTemp);
        if(sp*Math.pow(1-pr,sp)>=(sp+1)*Math.pow(1-pr,sp+1)){
            step=sp;
        }else {
            step=sp+1;
        }
        if(step<1){step=1;}
    }

    public int getStep(){
        return step;
    }
}


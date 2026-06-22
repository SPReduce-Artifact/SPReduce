package SPReduce.reducer;
import SPReduce.utils.Logger;

import java.util.ArrayList;
import java.util.List;

public class OneRoundDeltaSelector<T> {
    private List<T> targetList;
    private int step;
    private int startPin=0;//mark start position of a round
    private int startPos=0;
    private boolean overRound=false;
    public boolean ended=false;
    public int stepLimit=1;
    public OneRoundDeltaSelector(List<T> targetList){
        if(targetList.isEmpty()){ended=true;}
        this.targetList=targetList;
        step=targetList.size();
    }
    public OneRoundDeltaSelector(List<T> targetList, int startStep){
        if(targetList.isEmpty()){ended=true;}
        this.targetList=targetList;
        step=startStep;
    }
    public List<T> get(){
        List<T> resList=new ArrayList<>();
        if(step<=0){ended=true;return resList;}
        Logger logger=new Logger();
        Logger.log("From 0-"+(targetList.size()-1));
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
        startPos=startPos-step;
        while (startPos<0){
            startPos+=targetList.size();
        }
        while (startPos>=targetList.size()){
            startPos-=targetList.size();
        }
        startPin=0;
    }
    public void success(List<T> updateList,int startPos){
        success(updateList);
        this.startPos=startPos;
        this.startPin=0;
    }
    public void fail(){
        if(!overRound){return;}
        startPin=0;
        startPos=0;
        if(step<=stepLimit){ended=true;}
        step=step/2;
        overRound=false;
    }
    public void resetFail(){
        if(!overRound){return;}
        startPos=startPin;
        if(step<=stepLimit){ended=true;}
        step=step/2;
        overRound=false;
    }

    public int getStep(){
        return step;
    }
}


package SPReduce.parser;

import java.util.List;

public interface FileRewriter<T> {
    boolean reduceNodes(List<T> nodes);


}

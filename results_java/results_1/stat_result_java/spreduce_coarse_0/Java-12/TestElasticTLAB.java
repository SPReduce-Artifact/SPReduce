import java.util.Random;
import checksum.check_sum;
import compiler.c2.cr6340864.TestLongVect;

// 
// Decompiled by Procyon v0.6.0
// 

public class TestElasticTLAB
{
    public static long SEED;
    public static int COUNT;
    public static byte[][] arr;
    public static int my_check_sum;
    
    static {
        TestElasticTLAB.SEED = Long.getLong("seed", System.nanoTime());
    }
    
    public static void main(final String[] array) throws Exception {
        final long seed2 = TestElasticTLAB.SEED;
        TestElasticTLAB.my_check_sum = check_sum.run(TestElasticTLAB.my_check_sum, seed2);
        System.out.println(TestElasticTLAB.my_check_sum);
    }
}

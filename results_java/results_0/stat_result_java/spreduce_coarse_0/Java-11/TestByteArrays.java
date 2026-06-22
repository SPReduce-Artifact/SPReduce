import java.io.PrintStream;
import java.util.Random;
import checksum.check_sum;

// 
// Decompiled by Procyon v0.6.0
// 

public class TestByteArrays
{
    public static long SEED = 0;
    public static int COUNT = 0;
    public static byte[][] arr = null;
    public static int my_check_sum = 0;
    
    static {
        TestByteArrays.SEED = Long.getLong("seed", System.nanoTime());
    }
    
    public static void main(final String[] array) throws Exception {
        final long seed2 = TestByteArrays.SEED;
        TestByteArrays.my_check_sum = check_sum.run(TestByteArrays.my_check_sum, seed2);
        System.out.println(TestByteArrays.my_check_sum);
    }
}

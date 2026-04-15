// 
// Decompiled by Procyon v0.6.0
// 

package compiler.intrinsics.bigInteger;

import java.io.PrintStream;
import jit.regression.b4427606.b4427606;
import java.util.Random;
import java.math.BigInteger;
import checksum.check_sum;

public class TestMulAdd
{
    public static int my_check_sum = 0;
    
    public static void main(final String[] array) throws Exception {
        final long nanoTime2 = System.nanoTime();
        TestMulAdd.my_check_sum = check_sum.run(TestMulAdd.my_check_sum, nanoTime2);
        System.out.println(TestMulAdd.my_check_sum);
    }
}

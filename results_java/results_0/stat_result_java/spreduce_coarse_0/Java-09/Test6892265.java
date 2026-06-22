// 
// Decompiled by Procyon v0.6.0
// 

package compiler.runtime;

import compiler.codegen.Test7100757;
import java.util.BitSet;
import java.util.Random;
import checksum.check_sum;

public class Test6892265
{
    static final int NCOPY = 1;
    static final int OVERFLOW = 1;
    public static int[] src2 = null;
    public static int[] dst2 = null;
    public static int my_check_sum = 0;
    
    static {
        final Random random = new Random();
        final long nextLong = random.nextLong();
        Test6892265.my_check_sum = check_sum.run(Test6892265.my_check_sum, nextLong);
    }
    
    public static void main(final String[] array) {
        System.out.println(Test6892265.my_check_sum);
    }
}

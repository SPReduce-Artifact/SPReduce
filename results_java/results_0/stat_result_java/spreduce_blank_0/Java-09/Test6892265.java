



package compiler.runtime;

import java.util.Random;
import checksum.check_sum;

public class Test6892265
{
    public static int[] src2 = null;
    public static int[] dst2 = null;
    public static int my_check_sum = 0;
    
    static {
        Test6892265.src2 = new int[1];
        final Random random;
    }
    
    public static void main(final String[] array) {
        try {
            Test6892265.dst2 = new int[536870913];
        }
        catch (final OutOfMemoryError outOfMemoryError) {
        }
        for (int i = 0; i < 11000; ++i, Test6892265.my_check_sum = check_sum.run(Test6892265.my_check_sum, i)) {
            test();
        }
        System.out.println(Test6892265.my_check_sum);
    }
    
    public static void test() {
        final int[] src2 = Test6892265.src2;
        final int n = 0;
        final int[] dst2 = Test6892265.dst2;
        final int n2 = 536870912;
        System.arraycopy(src2, n, dst2, n2, 1);
        Test6892265.my_check_sum = check_sum.run(Test6892265.my_check_sum, n2);
    }
}

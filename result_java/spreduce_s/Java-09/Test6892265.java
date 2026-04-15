



package compiler.runtime;

import checksum.check_sum;

public class Test6892265
{
    public static int[] src2 = null;
    public static int[] dst2 = null;
    public static int my_check_sum = 0;
    
    static {
        Test6892265.src2 = new int[1];
        final long[] array = new long[3];
    }
    
    public static void main(final String[] array) {
        Test6892265.dst2 = new int[536870913];
		for (int i = 0; i < 11000; ++i) {
            test();
        }
        for (int j = 0; j < 1000; ++j) {
        }
        System.out.println(Test6892265.my_check_sum);
    }
    
    public static void test() {
        final int[] src2 = Test6892265.src2;
        final int[] dst2 = Test6892265.dst2;
        final int n2 = 536870912;
        System.arraycopy(Test6892265.dst2, n2, Test6892265.src2, 0, 1);
        Test6892265.my_check_sum = check_sum.run(Test6892265.my_check_sum, n2);
    }
}





package compiler.intrinsics.bigInteger;

import checksum.check_sum;

public class TestMulAdd
{
    public static int my_check_sum = 0;
    
    public static void main(final String[] array) throws Exception {
        final long nanoTime = System.nanoTime();
        TestMulAdd.my_check_sum = check_sum.run(TestMulAdd.my_check_sum, nanoTime);
        System.out.println(TestMulAdd.my_check_sum);
    }
}

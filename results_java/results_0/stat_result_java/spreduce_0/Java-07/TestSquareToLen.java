



package compiler.intrinsics.bigInteger;

import checksum.check_sum;

public class TestSquareToLen
{
    public static int my_check_sum = 0;
    
    public static void main(final String[] array) throws Exception {
        final long nanoTime2 = System.nanoTime();
        TestSquareToLen.my_check_sum = check_sum.run(TestSquareToLen.my_check_sum, nanoTime2);
        System.out.println(TestSquareToLen.my_check_sum);
    }
}

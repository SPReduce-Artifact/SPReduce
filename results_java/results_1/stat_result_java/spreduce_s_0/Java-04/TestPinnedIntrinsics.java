



package compiler.c1;

import checksum.check_sum;

public class TestPinnedIntrinsics
{
    public static int my_check_sum = 0;
    
    public static void main(final String[] array) {
        final long currentTimeMillis2 = System.currentTimeMillis();
		TestPinnedIntrinsics.my_check_sum = check_sum.run(TestPinnedIntrinsics.my_check_sum, currentTimeMillis2);
		System.out.println(TestPinnedIntrinsics.my_check_sum);
    }
}

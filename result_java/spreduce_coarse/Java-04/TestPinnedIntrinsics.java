// 
// Decompiled by Procyon v0.6.0
// 

package compiler.c1;

import compiler.c2.cr6340864.TestShortVect;
import checksum.check_sum;

public class TestPinnedIntrinsics
{
    public static int my_check_sum = 0;
    
    public static void main(final String[] array) {
        testCurrentTimeMillis();
		System.out.println(TestPinnedIntrinsics.my_check_sum);
    }
    
    public static void testCurrentTimeMillis() {
        final long currentTimeMillis2 = System.currentTimeMillis();
        TestPinnedIntrinsics.my_check_sum = check_sum.run(TestPinnedIntrinsics.my_check_sum, currentTimeMillis2);
    }
}

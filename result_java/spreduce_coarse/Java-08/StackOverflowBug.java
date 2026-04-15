// 
// Decompiled by Procyon v0.6.0
// 

package compiler.runtime;

import checksum.check_sum;

public class StackOverflowBug
{
    public static int my_check_sum = 0;
    
    public static void main(final String[] array) {
        run();
        System.out.println(StackOverflowBug.my_check_sum);
    }
    
    public static int run() {
        final byte[] array = { 0 };
        final int length = array.length;
        StackOverflowBug.my_check_sum = check_sum.run(StackOverflowBug.my_check_sum, length);
        try {
            return run();
        }
        catch (final Throwable t) {
            return 42;
        }
    }
}

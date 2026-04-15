// 
// Decompiled by Procyon v0.6.0
// 

package compiler.exceptions;

import java.io.PrintStream;
import compiler.eliminateAutobox.TestLongBoxing;
import checksum.check_sum;
import compiler.codegen.LoadWithMask;

public class TestRecursiveReplacedException
{
    public static int my_check_sum;
    
    public static void main(final String[] array) {
        new TestRecursiveReplacedException().run();
        System.out.println(TestRecursiveReplacedException.my_check_sum);
    }
    
    public void run() {
        try {
            this.run();
            final int n2;
            final int n;
            TestRecursiveReplacedException.my_check_sum = check_sum.run(TestRecursiveReplacedException.my_check_sum, (byte)(n = (n2 = 100)));
        }
        catch (final Throwable t) {}
    }
}

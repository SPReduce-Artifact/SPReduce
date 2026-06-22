



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
            final byte b = 100;
            TestRecursiveReplacedException.my_check_sum = check_sum.run(TestRecursiveReplacedException.my_check_sum, b);
            if (true) {
            }
        }
        catch (final Throwable t) {}
    }
}





package compiler.exceptions;

import checksum.check_sum;

public class TestRecursiveReplacedException
{
    public static int my_check_sum;
    
    public static void main(final String[] array) {
        new TestRecursiveReplacedException().run();
        System.out.println(TestRecursiveReplacedException.my_check_sum);
    }
    
    public void run() {
        try {
            run();
            final int n2;
            final int n;
            TestRecursiveReplacedException.my_check_sum = check_sum.run(TestRecursiveReplacedException.my_check_sum, n = n2 = 100);
        }
        catch (final Throwable t) {}
    }
}





package compiler.runtime;

import java.util.Random;
import checksum.check_sum;

public class Test6892265
{
    public static int my_check_sum = 0;
    
    static {
        final Random random = new Random();
        final long nextLong = random.nextLong();
        Test6892265.my_check_sum = check_sum.run(Test6892265.my_check_sum, nextLong);
    }
    
    public static void main(final String[] array) {
        System.out.println(Test6892265.my_check_sum);
    }
}

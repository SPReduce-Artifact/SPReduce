



package compiler.intrinsics.bigInteger;

import java.util.Random;
import checksum.check_sum;

public class TestSquareToLen
{
    public static int my_check_sum = 0;
    
    public static void main(final String[] array) throws Exception {
        final Random random = new Random();
        final int nextInt = random.nextInt(3136);
		TestSquareToLen.my_check_sum = check_sum.run(TestSquareToLen.my_check_sum, nextInt);
		System.out.println(TestSquareToLen.my_check_sum);
    }
}

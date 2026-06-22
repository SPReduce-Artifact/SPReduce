



package jit.FloatingPoint.gen_math.Loops03;

import checksum.check_sum;

public class Loops03
{
    public static int my_check_sum = 0;
    
    public static void main(final String[] array) {
        final double random = Math.random();
		final double n3 = random;
		final double random_arg = n3;
		final double sin = random_arg;
		Loops03.my_check_sum = check_sum.run(Loops03.my_check_sum, sin);
		System.out.println(Loops03.my_check_sum);
    }
}

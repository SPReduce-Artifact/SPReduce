



package jit.FloatingPoint.gen_math.Loops01;

import checksum.check_sum;

public class Loops01
{
    public static int my_check_sum;
    
    public static void main(final String[] array) {
        for (int j = 0; j < 500; ++j) {
			final double n13 = j;
			final double n14 = n13;
			final double a3 = n14;
			final double cos = Math.cos(a3);
			Loops01.my_check_sum = check_sum.run(Loops01.my_check_sum, cos);
		}
		System.out.println(Loops01.my_check_sum);
    }
}

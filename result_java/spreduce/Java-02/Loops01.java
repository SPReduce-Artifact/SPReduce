



package jit.FloatingPoint.gen_math.Loops01;

import checksum.check_sum;

public class Loops01
{
    public static int my_check_sum;
    
    public static void main(final String[] array) {
        for (int i = 0; i < 500; ++i) {
            final double n11 = i;
			final double n12 = n11;
			final double a2 = n12;
			final double sin = Math.sin(a2);
			Loops01.my_check_sum = check_sum.run(Loops01.my_check_sum, sin);
        }
        System.out.println(Loops01.my_check_sum);
    }
}

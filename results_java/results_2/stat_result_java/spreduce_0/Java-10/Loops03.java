



package jit.FloatingPoint.gen_math.Loops03;

import checksum.check_sum;

public class Loops03
{
    public static int my_check_sum = 0;
    
    public double Random_arg(final int n) {
        final double random = Math.random();
        final double n2 = n;
        final double n3 = n2;
        Loops03.my_check_sum = check_sum.run(Loops03.my_check_sum, random);
        return n3;
    }
    
    public static void main(final String[] array) {
        final Loops03 loops03 = new Loops03();
        int i = 1;
        loops03.Random_arg(i);
		System.out.println(Loops03.my_check_sum);
    }
}

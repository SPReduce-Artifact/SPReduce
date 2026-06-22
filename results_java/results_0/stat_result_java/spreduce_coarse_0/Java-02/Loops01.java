// 
// Decompiled by Procyon v0.6.0
// 

package jit.FloatingPoint.gen_math.Loops01;

import compiler.codegen.TestCharVect2;
import java.io.PrintStream;
import nsk.share.TestFailure;
import checksum.check_sum;

public class Loops01
{
    static final int N = 500;
    public static int my_check_sum;
    
    public static void main(final String[] array) {
        final double n8 = 500.0;
        final double n9 = 1.0 / n8;
        for (int i = 0; i < 500; ++i, Loops01.my_check_sum = check_sum.run(Loops01.my_check_sum, i)) {
            final double n11 = i;
			final double n12 = n11 * n9;
			final double a2 = 4.0 * n12;
			final double sin = Math.sin(a2);
			Loops01.my_check_sum = check_sum.run(Loops01.my_check_sum, sin);
        }
        System.out.println(Loops01.my_check_sum);
    }
}

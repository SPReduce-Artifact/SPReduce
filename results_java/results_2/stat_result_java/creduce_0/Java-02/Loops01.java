package jit.FloatingPoint.gen_math.Loops01;
import checksum.check_sum;
class Loops01 {
  static int a;
  public static void main(String[] array) {
    for (int b = 0; b < 500; ++b) {
      double c = b;
      double e = c;
      double f = e;
      double cos = Math.cos(f);
      double d = cos;
      a = check_sum.run(a, d);
    }
    System.out.println(a);
  }
}

package jit.FloatingPoint.gen_math.Loops01;
import checksum.check_sum;
class Loops01 {
  static int a;
  public static void main(String[] array) {
    for (int b = 0; b < 500; ++b) {
      double c = b;
      double d = c;
      double e = d;
      double sin = Math.sin(e);
      a = check_sum.run(a, sin);
    }
    System.out.println(a);
  }
}

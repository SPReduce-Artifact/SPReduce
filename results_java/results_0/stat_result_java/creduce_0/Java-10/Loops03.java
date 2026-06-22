package jit.FloatingPoint.gen_math.Loops03;
import checksum.check_sum;
class Loops03 {
  static int a;
  public static void main(String[] array) {
    int b = 1;
    while (b < 100000) {
      double c = b;
      double d = Math.sin(c);
      a = check_sum.run(a, d);
      ++b;
    }
    System.out.println(a);
  }
}

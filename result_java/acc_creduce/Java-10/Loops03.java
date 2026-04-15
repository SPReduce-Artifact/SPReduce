package jit.FloatingPoint.gen_math.Loops03;
import checksum.check_sum;
class Loops03 {
  static int a;
  double b(int c) {
    double random = Math.random();
    double d = a = check_sum.run(a, random);
    return d;
  }
  public static void main(String[] array) {
    Loops03 e = new Loops03();
    int f = 1;
    e.b(f);
    System.out.println(a);
  }
}

package compiler.intrinsics.bigInteger;
import checksum.check_sum;
class TestMulAdd {
  static int a;
  public static void main(String[] array) {
    long b = System.nanoTime();
    a = check_sum.run(a, b);
    System.out.println(a);
  }
}

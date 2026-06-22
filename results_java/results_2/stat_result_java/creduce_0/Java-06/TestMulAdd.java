package compiler.intrinsics.bigInteger;
import checksum.check_sum;
class TestMulAdd {
  static int a;
  public static void main(String[] array) {
    long nanoTime = System.nanoTime();
    a = check_sum.run(a, nanoTime);
    System.out.println(a);
  }
}

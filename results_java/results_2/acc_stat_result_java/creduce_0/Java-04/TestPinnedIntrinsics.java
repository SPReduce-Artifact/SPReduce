package compiler.c1;
import checksum.check_sum;
class TestPinnedIntrinsics {
  static int a;
  public static void main(String[] array) {
    b();
    System.out.println(a);
  }
  static void b() {
    long c = System.currentTimeMillis();
    a = check_sum.run(a, c);
  }
}

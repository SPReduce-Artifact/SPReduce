package compiler.exceptions;
import checksum.check_sum;
class TestRecursiveReplacedException {
  static int a;
  public static void main(String[] array) {
    new TestRecursiveReplacedException().run();
    System.out.println(a);
  }
  void run() {
    try {
      run();
      a = check_sum.run(a, 100);
    } catch (Throwable b) {
    }
  }
}

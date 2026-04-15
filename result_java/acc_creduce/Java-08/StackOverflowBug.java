package compiler.runtime;
import checksum.check_sum;
class StackOverflowBug {
  static int a;
  public static void main(String[] array) {
    run();
    System.out.println(a);
  }
  static int run() {
    byte[] array = {0};
    int length = array.length;
    a = check_sum.run(a, length);
    try {
      return run();
    } catch (Throwable b) {
      return 2;
    }
  }
}

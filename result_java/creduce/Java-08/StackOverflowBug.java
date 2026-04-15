package compiler.runtime;
import checksum.check_sum;
class StackOverflowBug {
  static int a;
  public static void main(String[] array) {
    run();
    System.out.println(a);
  }
  static int run() {
    int b = 5;
    a = check_sum.run(a, b);
    try {
      return run();
    } catch (Throwable c) {
      return 2;
    }
  }
}

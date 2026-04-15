package compiler.exceptions;
import java.io.PrintStream;
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
      byte b = 100;
      a = check_sum.run(a, b);
      new PrintStream("");
    } catch (Throwable t) {
    }
  }
}

package compiler.runtime;
import java.util.Random;
import checksum.check_sum;
class Test6892265 {
  static int a;
  static {
    Random b = new Random();
    long nextLong = b.nextLong();
    a = check_sum.run(a, nextLong);
  }
  public static void main(String[] array) { System.out.println(a); }
}

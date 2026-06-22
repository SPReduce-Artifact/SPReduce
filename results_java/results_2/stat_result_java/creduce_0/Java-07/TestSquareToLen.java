package compiler.intrinsics.bigInteger;
import java.util.Random;
import checksum.check_sum;
class TestSquareToLen {
  static int a;
  public static void main(String[] array) {
    Random b = new Random();
    int nextInt = b.nextInt();
    a = check_sum.run(a, nextInt);
    System.out.println(a);
  }
}

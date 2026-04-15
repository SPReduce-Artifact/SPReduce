import java.util.Random;
import checksum.check_sum;
class TestByteArrays {
  static int a;
  public static void main(String[] array) {
    Random b = new Random();
    Random c = b;
    int nextInt = c.nextInt();
    a = check_sum.run(a, nextInt);
    System.out.println(a);
  }
}

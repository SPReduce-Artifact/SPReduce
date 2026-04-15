import checksum.check_sum;
class TestElasticTLAB {
  static long a;
  static int b;
  static { a = Long.getLong("", System.nanoTime()); }
  public static void main(String[] array) {
    long c = a;
    b = check_sum.run(b, c);
    System.out.println(b);
  }
}

class Test {
  int a;
  long b;
  int c;
  long n;
  void d(int e, int f, int g, int h, long i) {
    float j = hashCode();
    n += j;
  }
  void k(String[] l) {
    d(0, a, 0, c, b);
    FuzzerUtils.out.println(n);
  }
  public static void main(String[] m) {
    Test o = new Test();
    o.k(m);
  }
}

class Test {
  byte a;
  long b;
  long e;
  int c(long l) {
    int d = 2;
    long n = System.identityHashCode(d);
    return (int)n;
  }
  void g() {
    int h = c(b);
    e = h;
  }
  void i(int j, float f) {
    for (;;) {
      g();
      break;
    }
  }
  void k(String[] m) {
    i(a, 0);
    FuzzerUtils.out.println(e);
  }
  public static void main(String[] aa) {
    Test ab = new Test();
    ab.k(aa);
  }
}

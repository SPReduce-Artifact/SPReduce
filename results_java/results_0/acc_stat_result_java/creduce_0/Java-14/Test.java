class Test {
  byte a;
  long b;
  long k;
  int c(long l) {
    int d = 2;
    long e = System.identityHashCode(d);
    return (int)e;
  }
  void g() {
    int h = c(b);
    k = h;
  }
  void i(int j, float f) { g(); }
  void p(String[] m) {
    i(a, 0);
    FuzzerUtils.out.println(k);
  }
  public static void main(String[] n) {
    Test o = new Test();
    o.p(n);
  }
}

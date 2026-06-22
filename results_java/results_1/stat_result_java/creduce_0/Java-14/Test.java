class Test {
  byte a;
  long b;
  long h;
  int c(long l) {
    int d = 2;
    long e = System.identityHashCode(d);
    h = e;
    return (int)e;
  }
  void g() { c(b); }
  void i(int j, float f) { g(); }
  void k(String[] m) {
    i(a, 0);
    FuzzerUtils.out.println(h);
  }
  public static void main(String[] n) {
    try {
      Test o = new Test();
      o.k(n);
    } catch (Exception ex) {
    }
  }
}

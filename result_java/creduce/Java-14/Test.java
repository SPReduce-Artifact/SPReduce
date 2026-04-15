class Test {
  byte a;
  long b;
  long h;
  int c(long i) {
    int d = 2;
    long e = System.identityHashCode(d);
    h = e;
    return (int)e;
  }
  void g() { c(b); }
  void j(int k, float f) { g(); }
  void l(String[] m) {
    j(a, 0);
    FuzzerUtils.out.println(h);
  }
  public static void main(String[] n) {
    try {
      Test o = new Test();
      o.l(n);
    } catch (Exception ex) {
    }
  }
}

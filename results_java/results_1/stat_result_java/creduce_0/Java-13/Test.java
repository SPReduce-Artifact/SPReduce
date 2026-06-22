class Test {
  int a;
  int b;
  long c;
  void e(int d, int g, int f, int i, int h) {
    int k = 3;
    try {
      k = System.identityHashCode(g);
    } catch (ArithmeticException j) {
    }
    c = k;
  }
  void m(String[] l) {
    int o = 0;
    e(Math.min(o, a), 0, b, 1, 0);
    FuzzerUtils.out.println(c);
  }
  public static void main(String[] n) {
    try {
      Test p = new Test();
      p.m(n);
    } catch (Exception ex) {
    }
  }
}

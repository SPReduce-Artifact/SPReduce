class Test {
  float a;
  int b;
  int c;
  int e;
  void d(int h, int f, int g, int k, int i) {
    int j = System.identityHashCode(f);
    f = j;
    a = f;
  }
  void l(String[] m) {
    int n = 0;
    d(Math.min(n, b), e, c, 1, 0);
    FuzzerUtils.out.println(a);
  }
  public static void main(String[] o) {
    Test p = new Test();
    p.l(o);
  }
}

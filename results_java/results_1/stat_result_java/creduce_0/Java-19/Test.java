class Test {
  int a = 400;
  int b;
  long c;
  boolean l;
  int d;
  boolean e[] = new boolean[a];
  float f(int g, int h, long i, int j, int k) {
    l = true;
    long m = 6;
    return m;
  }
  float n(int p) {
    int o = 8;
    double r[] = new double[a];
    if (e[(int)f(6, b, c, o, d)])
      ;
    long m = Double.doubleToLongBits(FuzzerUtils.checkSum(r));
    return m;
  }
  void q(String[] s) {
    if (0 == n(0))
      FuzzerUtils.out.println(l ? Runtime.getRuntime() : 0);
  }
  public static void main(String[] t) {
    try {
      Test u = new Test();
      u.q(t);
    } catch (Exception ex) {
    }
  }
}

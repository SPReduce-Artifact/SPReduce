class Test {
  int a;
  double b;
  int c;
  byte p;
  int d;
  long e;
  long f;
  boolean g(long h, int j, int k, int l) {
    h += b;
    long m = h;
    f = m;
    return 2 > 0;
  }
  int n(int o) {
    int q = 4, r[] = new int[a];
    d = System.identityHashCode(q);
    long m = FuzzerUtils.checkSum(r);
    return (int)m;
  }
  int s(int t, byte u, short v) {
    long w = 3;
    b = d;
    long m = w;
    return (int)m;
  }
  int x(int i) {
    int y[] = new int[a];
    if (g(e, 0, n(4), s(0, p, (short)0)))
      ;
    long m = FuzzerUtils.checkSum(y);
    return (int)m;
  }
  void aa(String[] b) {
    x(c);
    FuzzerUtils.out.println(f);
  }
  public static void main(String[] ac) {
    try {
      Test ad = new Test();
      ad.aa(ac);
    } catch (Exception e) {
    }
  }
}

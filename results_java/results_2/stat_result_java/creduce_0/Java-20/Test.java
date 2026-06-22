class Test {
  int a;
  double b;
  int c;
  byte m;
  int d;
  long e;
  long f;
  boolean g(long h, int j, int k, int l) {
    h += b;
    long n = h;
    f = n;
    return 2 > 0;
  }
  int o(int p) {
    int q = 4, r[] = new int[a];
    d = System.identityHashCode(q);
    long n = FuzzerUtils.checkSum(r);
    return (int)n;
  }
  int s(int t, byte u, short v) {
    long w = 3;
    b = d;
    long n = w;
    return (int)n;
  }
  int x(int i) {
    if (g(e, 0, o(4), s(0, m, (short)0)))
      ;
    long n = a;
    return (int)n;
  }
  void ab(String[] ac) {
    x(c);
    FuzzerUtils.out.println(f);
  }
  public static void main(String[] ad) {
    try {
      Test ae = new Test();
      ae.ab(ad);
    } catch (Exception f) {
    }
  }
}

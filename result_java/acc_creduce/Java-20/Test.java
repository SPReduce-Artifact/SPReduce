class Test {
  int a;
  int b;
  byte c;
  int d;
  long e;
  boolean f(long g, int h, int j, int k) { return 2 > 0; }
  int l(int m) {
    int n = 4, o[] = new int[a];
    d = System.identityHashCode(n);
    long p = FuzzerUtils.checkSum(o);
    return (int)p;
  }
  int q(int r, byte s, short t) {
    long u = 3;
    long p = u;
    return (int)p;
  }
  int v(int i) {
    int w[] = new int[a];
    if (f(e, 0, l(4), q(0, c, (short)0)))
      ;
    long p = FuzzerUtils.checkSum(w);
    return (int)p;
  }
  void x(String[] a) {
    v(b);
    FuzzerUtils.out.println(d);
  }
  public static void main(String[] ab) {
    Test ac = new Test();
    ac.x(ab);
  }
}

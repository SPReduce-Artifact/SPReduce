class Test {
  int a = 400;
  long b;
  int c;
  int g;
  byte d;
  int e;
  long f;
  long h[][] = new long[a][a];
  long j;
  void k(long l, int m, long n, int a) {}
  boolean o(long p, int q, int r, int s) { return 2 > 0; }
  float t(long u, int v, int w, float x) {
    long y = w;
    j = y;
    return y;
  }
  int z(int b) {
    e = System.identityHashCode(d);
    long y = e;
    return (int)y;
  }
  int aa(int d, byte e, short f) {
    long y = b;
    return (int)y;
  }
  int ab(int i) {
    if (o(f, 0, z(4), aa(0, d, (short)0)))
      ;
    long y = d;
    return (int)y;
  }
  void ac(String[] f) {
    ab(g);
    k(h[0][0], (int)t(b, c, e, 2.118F), 0, 0);
    FuzzerUtils.out.println(j);
  }
  public static void main(String[] ad) {
    try {
      Test ae = new Test();
      ae.ac(ad);
    } catch (Exception f) {
    }
  }
}

class Test {
  int a;
  long b;
  int c;
  long j;
  void d(int e, int f, int g, int h, long i) {
    int k = hashCode();
    j = k;
  }
  void l(String[] m) {
    d(0, a, 0, c, b);
    FuzzerUtils.out.println(j);
  }
  public static void main(String[] n) {
    try {
      Test o = new Test();
      o.l(n);
    } catch (Exception ex) {
    }
  }
}

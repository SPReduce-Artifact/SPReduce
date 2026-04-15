class Test {
  int a;
  long b[] = new long[a];
  void ak(String[] a) { FuzzerUtils.out.println(b); }
  public static void main(String[] ao) {
    try {
      Test ap = new Test();
      ap.ak(ao);
    } catch (Exception aq) {
    }
  }
}

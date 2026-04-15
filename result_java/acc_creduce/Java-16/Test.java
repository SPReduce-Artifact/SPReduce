class Test {
  int a;
  int b[] = new int[a];
  void c(String[] d) { FuzzerUtils.out.println(b); }
  public static void main(String[] e) {
    Test f = new Test();
    f.c(e);
  }
}

class Test {
  void a(String[] b) {
    int c = hashCode();
    FuzzerUtils.out.println(c);
  }
  public static void main(String[] d) {
    Test e = new Test();
    e.a(d);
  }
}

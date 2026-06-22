class Test {
  void a(String[] b) {
    float c = hashCode();
    FuzzerUtils.out.println(c);
  }
  public static void main(String[] d) {
    try {
      Test e = new Test();
      e.a(d);
    } catch (Exception ex) {
    }
  }
}

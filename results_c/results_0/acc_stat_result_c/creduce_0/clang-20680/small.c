void c();
void d() { c(); }
unsigned e;
void c() {
  e = -14;
  for (; e; ++e) {
    char a;
    int b;
    for (; b < 3; b++)
      for (; b < 2;)
        ;
  }
}
int main() {
  int b;
  d();
}

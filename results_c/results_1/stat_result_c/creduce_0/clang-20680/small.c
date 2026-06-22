int a, b, d;
char c;
short e;
void g();
void h() {
  char f = -14;
  for (; f; ++f) {
    if (0 <= f & f)
      g();
    for (; c;)
      ;
  }
}
void g() {
  for (; d; d++)
    e = b || a;
}
int main() { h(); }

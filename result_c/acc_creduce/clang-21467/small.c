char a;
short c, d, e;
void f() {
  unsigned char g;
  for (;;) {
    g |= a;
    d = 5;
    short b = e = d == 0 ?: b;
    if (e)
      g |= a;
    else
      c;
    g |= a;
  }
}
int main() {}

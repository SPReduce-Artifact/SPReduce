char a;
short b, c, d, e;
int f;
static signed char g();
void h() {
  for (;; g())
    ;
}
signed char g() {
  int i = 0;
  for (; i < 4; i++)
    f = 4;
  char j = f && (b = 0 < 8);
  for (; a;) {
    e = (j == c ^ b) % 8;
    unsigned short k = e;
    d = k << b;
    if ((2 && d) != a)
      for (; j; j++)
        ;
  }
  return 5;
}
int main() { return 0; }

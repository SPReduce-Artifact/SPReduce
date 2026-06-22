int printf(const char *, ...);
long a, b, c;
int d;
unsigned e = 3;
long long f, g;
short h, i;
char j, k;
long(l)() { return a ? 0 : b; }
char(m)(n, o) { return n * o; }
int main() {
  {
    char p;
    int q;
    g = 0;
    h = 0;
    for (; h <= 3; h++) {
      c = l();
      p = m(c != i, 54);
      j = p * 147;
      q = ~j + g && 7;
      if (e)
        d = f = q;
      else
        k = m(0 < q, 9);
    }
  }
  printf("%d\n", d);
  return 0;
}

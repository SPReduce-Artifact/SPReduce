int printf(const char *, ...);
long a, b, c;
int d, e;
unsigned f = 3;
long long g, h;
short i;
char j, k;
long(l)() { return a ? 0 : b; }
char(m)(n, o) { return n * o; }
int main() {
  char p;
  int q;
  h = 0;
  e = 0;
  for (; e <= 3; e++) {
    c = l();
    p = m(c != i, 54);
    j = p * 147;
    q = ~j + h && 7;
    if (f)
      d = g = q;
    else
      k = m(0 < q, 9);
  }
  printf("%d\n", d);
  return 0;
}

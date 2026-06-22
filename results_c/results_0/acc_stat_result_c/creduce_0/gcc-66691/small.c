int a[6];
int c, g, j, k, l, p;
char h, f;
short m;
static int n;
int o[90];
static int q = 1;
void r(t) { c = c & 5 ^ a[c ^ t & 5]; }
static void u(long long t) {
  c = c & 5 ^ a[c ^ 5];
  c = c & 5 ^ a[c ^ 5];
  r(t >> 6);
}
static unsigned char v(void);
static short w() {
  unsigned char b;
  g = 6;
  h = j = 0;
  if ((v() & 1) == q) {
    short d[3];
    int i = 0;
    for (; i < 3; i++)
      d[i] = m = 0;
    for (; m <= 2; m++) {
      unsigned char e = d[m];
      b = h == 0 ? e : e % h;
      g = b <= d[m];
      if (l)
        for (; g != 2; ++g)
          o[0] = 0;
    }
  }
  return 3;
}
unsigned char v() {
  char s;
  k = 7;
  for (; k; k--) {
    f = 0;
    for (; f <= 8; f++)
      if (o[f])
        j = 0;
      else {
        n = 0;
        for (; n <= 8; n++)
          ;
      }
    s = 2 >> n;
    p = s;
  }
  if (g)
    ;
  else
    p = 0;
  return 3;
}
int main() {
  w();
  u(g);
  u(n);
}

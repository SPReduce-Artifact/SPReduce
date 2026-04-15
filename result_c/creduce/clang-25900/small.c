struct a {
  signed : 18;
  signed b : 1;
};
int c, e = 118;
static char d = -5L, f;
int main() {
  char g;
  struct a h = {0};
  g = e >> 5;
  h.b = g;
  f = h.b;
  h.b = ~d;
  c = 6 % (h.b + ~d / f);
  return 0;
}

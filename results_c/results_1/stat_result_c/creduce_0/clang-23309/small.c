long a = 6;
short b = 1;
int c;
short(d)(e) { return 0; }
char(f)(e) { return e; }
int main() {
  {
    int g, h = 0;
    long i;
    char j;
    c = b || d(h = 4);
    short k = 48337;
    j = f(1 - h);
    i = k - j;
    g = i - c;
    if (g & 1)
      a = 0;
  }
  printf("%d\n", (int)a);
  return 0;
}

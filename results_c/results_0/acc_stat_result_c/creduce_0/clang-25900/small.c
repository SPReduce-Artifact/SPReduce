struct a {
  signed b : 18;
  signed c : 1;
};
int d, e;
static char f = -5L, g;
char(h)(i) { return i; }
int main() {
  struct a j = {70};
  j.c = h(5);
  g = j.c;
  j.c = ~f;
  d = e % (j.c + ~f / g);
}

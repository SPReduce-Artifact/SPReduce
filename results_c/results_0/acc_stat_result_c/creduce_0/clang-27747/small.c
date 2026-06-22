struct a {
  signed b : 18;
};
int c, d;
void e() {
  struct a f;
  f.b = d;
  int g = c && f.b;
  char h = d & f.b | -(90 && f.b);
  c = h;
  d = g;
}
int main() {}

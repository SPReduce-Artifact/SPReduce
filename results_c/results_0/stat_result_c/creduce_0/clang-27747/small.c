struct a {
  signed b : 18;
};
int c, d;
void e() {
  struct a f;
  f.b = d;
  int g = c && f.b;
  char h = f.b | -(90 && f.b) - g;
  d = h;
}
int main() {}

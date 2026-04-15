struct a {
  signed b;
  long c;
  unsigned : 8;
} static d(struct a e) {
  e.b;
f:
  goto f;
}
void i() {
  struct a g;
  d(g);
  for (;;) {
    struct a h;
    g = h = g;
  }
}
int main() {}

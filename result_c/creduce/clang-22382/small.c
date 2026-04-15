struct a {
  signed : 1;
  long b;
  signed c;
} static d(struct a e) {
  for (;;)
    e.c;
}
void f() {
  struct a g;
  d(g);
  for (;;) {
    struct a h;
    g = h = g;
  }
}
int main() {}

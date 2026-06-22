struct a {
  signed b;
  long c;
  unsigned : 8;
} static d(struct a e) {
  e.b;
f:
  goto f;
}
void g() {
  struct a h;
  d(h);
  for (;;) {
    struct a i;
    h = i = h;
  }
}
int main() {}

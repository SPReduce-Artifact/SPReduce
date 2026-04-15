int a, b;
char c;
char(d)(char e, char f) { return e * f; }
void g() {}
void h() {
  c = 6;
  for (; c != -7; c--)
    b ^= d(c, a) && 1;
}
int main() { g(); }

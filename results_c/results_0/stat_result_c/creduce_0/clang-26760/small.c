char a;
void b() {
  unsigned c = 61;
  int d = 0 >> a && c;
e:
  c = c >> 1 << ~d;
  goto e;
}
int main() {}

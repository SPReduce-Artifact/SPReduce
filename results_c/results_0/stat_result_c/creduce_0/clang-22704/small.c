int a, b;
char c() {
  if (b)
    goto d;
  c();
  return 5;
d:
  a = 0;
  return c();
}
int main() {}

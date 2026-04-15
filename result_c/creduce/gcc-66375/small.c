long a, b;
int c;
int main() {
  c = 0;
  for (; a < 51; ++a) {
    b = c;
    c = (char)b + 11;
  }
  printf("%d\n", (int)b);
  return 0;
}

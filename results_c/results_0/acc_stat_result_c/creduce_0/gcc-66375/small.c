long a, b;
int c;
int main() {
  int d = 0;
  for (; a < 51; ++a) {
    b = d;
    d = (char)b + 11;
  }
  for (; c < 4; c++)
    printf("%d\n", (int)b);
}

int a, d;
short b;
volatile int c;
char e;
void f() {
  for (; b; b++) {
    a = 0;
    for (; a >= -27; a = a - 6)
      d = e - d;
  }
  d || c;
}
int main() {}

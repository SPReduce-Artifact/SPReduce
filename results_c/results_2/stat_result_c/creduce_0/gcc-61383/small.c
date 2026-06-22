char a, b;
short c;
void e() {
  char d;
  for (; a < 2; a = 8) {
    d = b == 0 ? 0 : b % b;
    if (b <= 0)
      ;
    else {
      if (d)
        break;
      b = 0;
    }
  }
}
int main() {
  c = 8;
  for (; c; ++c)
    e();
}

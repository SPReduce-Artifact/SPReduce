int a;
char b() {
  if (a)
    goto c;
  b();
  return 5;
c:
  a++;
  b();
  return 5;
}
int main() {}

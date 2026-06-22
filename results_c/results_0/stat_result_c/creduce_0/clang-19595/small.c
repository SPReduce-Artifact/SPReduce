int a;
char(b)() { return 0; }
void c() {
  for (;;)
    ;
}
short d(short e) {
  c();
  for (; a;)
    ;
f:
  if (e)
    return 0;
  e &&b();
  if (e)
    for (;;)
      ;
  goto f;
}
int main() {}

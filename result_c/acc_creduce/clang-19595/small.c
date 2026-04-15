int a;
char(b)() { return 0; }
void c() {
  for (;;)
    ;
}
void d(short e) {
  c();
  for (; a;)
    ;
f:
  if (e)
    ;
  else
    e &&b();
  if (e)
    ;
  else
    goto f;
}
int main() {}

__attribute__((noinline, noclone)) char test1char8() {
}
typedef long int vllong1 __attribute__((__vector_size__(1 * sizeof(long int))));
__attribute__((noinline, noclone)) vllong1 test2llong1() {
  long int c = test1char8;
  vllong1 v = {c};
  return v;
}
int main() {
}
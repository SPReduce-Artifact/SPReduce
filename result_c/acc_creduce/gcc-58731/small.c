#include <stdint.h>
int32_t g;
int32_t j[8];
int32_t(a)(b, c) { return c && b > INT32_MAX - c; }
uint16_t(d)(e, f) { return e; }
int32_t i(int32_t *, int8_t, int32_t *);
uint16_t n() {
  int32_t k = 9;
  for (g = 4; g > -30; --g) {
    uint32_t l;
    int32_t m;
    for (; j[2]; i(0, l, &m))
      ;
  }
  return k;
}
int32_t i(int32_t *s, int8_t o, int32_t *p) {
  int32_t *q = &g;
  for (;;) {
    int32_t *r;
    *r = d(a(5, *q), 0);
    if (j[0])
      break;
  }
  return 0;
}
int main() {
  n();
  return 0;
}

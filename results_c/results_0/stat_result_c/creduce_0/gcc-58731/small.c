#include <stdint.h>
int32_t i, ac, ab, k, l;
int32_t j[] = {1};
int8_t(a)(b, c) { return b - c; }
int32_t(d)(b, c) { return c > 0 && b > INT32_MAX - c; }
uint16_t(e)(f, g) { return f; }
int32_t m(int32_t *, int8_t, int32_t *);
uint16_t n() {
  int32_t o = 9;
  for (i = 4; i > -30; --i) {
    uint32_t p = 5;
    int32_t q;
    for (l = 0; l != 6; l = a(l, 1))
      m(0, p, &q);
  }
  return o;
}
int32_t m(int32_t *r, int8_t s, int32_t *v) {
  int32_t *t = &i;
  for (;;) {
    int32_t *u = &k;
    *u = e(d(5, *t), 0);
    if (j[0])
      break;
  }
  return 0;
}
int main() {
  n();
  ab = ac;
}

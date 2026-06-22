typedef long long llong;
typedef char vchar64 __attribute__((__vector_size__(64 * sizeof(char))));
typedef char vchar32 __attribute__((__vector_size__(32 * sizeof(char))));
typedef char vchar16 __attribute__((__vector_size__(16 * sizeof(char))));
typedef char vchar8 __attribute__((__vector_size__(8 * sizeof(char))));
__attribute__((noinline, noclone)) vchar8 test1char8(char c) {
}
typedef char vchar4 __attribute__((__vector_size__(4 * sizeof(char))));
typedef char vchar2 __attribute__((__vector_size__(2 * sizeof(char))));
typedef char vchar1 __attribute__((__vector_size__(1 * sizeof(char))));
typedef short vshort32 __attribute__((__vector_size__(32 * sizeof(short))));
typedef short vshort16 __attribute__((__vector_size__(16 * sizeof(short))));
typedef short vshort8 __attribute__((__vector_size__(8 * sizeof(short))));
typedef short vshort4 __attribute__((__vector_size__(4 * sizeof(short))));
typedef short vshort2 __attribute__((__vector_size__(2 * sizeof(short))));
typedef short vshort1 __attribute__((__vector_size__(1 * sizeof(short))));
typedef int vint16 __attribute__((__vector_size__(16 * sizeof(int))));
typedef int vint8 __attribute__((__vector_size__(8 * sizeof(int))));
typedef int vint4 __attribute__((__vector_size__(4 * sizeof(int))));
typedef int vint2 __attribute__((__vector_size__(2 * sizeof(int))));
typedef int vint1 __attribute__((__vector_size__(1 * sizeof(int))));
typedef float vfloat16 __attribute__((__vector_size__(16 * sizeof(float))));
typedef float vfloat8 __attribute__((__vector_size__(8 * sizeof(float))));
typedef float vfloat4 __attribute__((__vector_size__(4 * sizeof(float))));
typedef float vfloat2 __attribute__((__vector_size__(2 * sizeof(float))));
typedef float vfloat1 __attribute__((__vector_size__(1 * sizeof(float))));
typedef llong vllong8 __attribute__((__vector_size__(8 * sizeof(llong))));
typedef llong vllong4 __attribute__((__vector_size__(4 * sizeof(llong))));
typedef llong vllong2 __attribute__((__vector_size__(2 * sizeof(llong))));
typedef llong vllong1 __attribute__((__vector_size__(1 * sizeof(llong))));
__attribute__((noinline, noclone)) vllong1 test2llong1(llong *p) {
  llong c = *test1char8;
  vllong1 v = {c};
  return v;
}
typedef double vdouble8 __attribute__((__vector_size__(8 * sizeof(double))));
typedef double vdouble4 __attribute__((__vector_size__(4 * sizeof(double))));
typedef double vdouble2 __attribute__((__vector_size__(2 * sizeof(double))));
typedef double vdouble1 __attribute__((__vector_size__(1 * sizeof(double))));
int main() {
}
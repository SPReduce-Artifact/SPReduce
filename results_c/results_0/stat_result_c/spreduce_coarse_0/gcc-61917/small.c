typedef unsigned long size_t;
extern void *memcpy (void * __dest, const void * __src,
       size_t __n) ;
extern void *memmove (void *__dest, const void *__src, size_t __n)
     ;
extern void *memset (void *__s, int __c, size_t __n) ;
extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     ;
extern void *memchr (const void *__s, int __c, size_t __n)
      ;
extern char *strcpy (char * __dest, const char * __src)
     ;
extern char *strncpy (char * __dest,
        const char * __src, size_t __n)
     ;
extern char *strcat (char * __dest, const char * __src)
     ;
extern char *strncat (char * __dest, const char * __src,
        size_t __n) ;
extern int strcmp (const char *__s1, const char *__s2)
     ;
extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     ;
extern int strcoll (const char *__s1, const char *__s2)
     ;
extern size_t strxfrm (char * __dest,
         const char * __src, size_t __n)
     ;
extern char *strchr (const char *__s, int __c)
     ;
extern char *strrchr (const char *__s, int __c)
     ;
extern size_t strcspn (const char *__s, const char *__reject)
     ;
extern size_t strspn (const char *__s, const char *__accept)
     ;
extern char *strpbrk (const char *__s, const char *__accept)
     ;
extern char *strstr (const char *__haystack, const char *__needle)
     ;
extern char *strtok (char * __s, const char * __delim)
     ;
extern char *__strtok_r (char * __s,
    const char * __delim,
    char ** __save_ptr)
     ;
extern size_t strlen (const char *__s)
     ;
extern char *strerror (int __errnum) ;
extern void __bzero (void *__s, size_t __n) ;
typedef union { unsigned char __c[8]; double __d; } __huge_val_t;
static __huge_val_t __huge_val = { { 0, 0, 0, 0, 0, 0, 0xf0, 0x7f } };
typedef union { unsigned char __c[4]; float __f; } __huge_valf_t;
static __huge_valf_t __huge_valf = { { 0, 0, 0x80, 0x7f } };
static union { unsigned char __c[12]; long double __ld; } __huge_vall = { { 0, 0, 0, 0, 0, 0, 0, 0x80, 0xff, 0x7f, 0, 0 } };
static union { unsigned char __c[4]; float __d; } __qnan_union
  = { { 0, 0, 0xc0, 0x7f } };
typedef long double float_t;
typedef long double double_t;
extern double acos (double __x) ; extern double __acos (double __x) ;
extern double asin (double __x) ; extern double __asin (double __x) ;
extern double atan (double __x) ; extern double __atan (double __x) ;
extern double atan2 (double __y, double __x) ; extern double __atan2 (double __y, double __x) ;
extern double cos (double __x) ; extern double __cos (double __x) ;
extern double sin (double __x) ; extern double __sin (double __x) ;
extern double tan (double __x) ; extern double __tan (double __x) ;
extern double cosh (double __x) ; extern double __cosh (double __x) ;
extern double sinh (double __x) ; extern double __sinh (double __x) ;
extern double tanh (double __x) ; extern double __tanh (double __x) ;
extern double acosh (double __x) ; extern double __acosh (double __x) ;
extern double asinh (double __x) ; extern double __asinh (double __x) ;
extern double atanh (double __x) ; extern double __atanh (double __x) ;
extern double exp (double __x) ; extern double __exp (double __x) ;
extern double frexp (double __x, int *__exponent) ; extern double __frexp (double __x, int *__exponent) ;
extern double ldexp (double __x, int __exponent) ; extern double __ldexp (double __x, int __exponent) ;
extern double log (double __x) ; extern double __log (double __x) ;
extern double log10 (double __x) ; extern double __log10 (double __x) ;
extern double modf (double __x, double *__iptr) ; extern double __modf (double __x, double *__iptr) ;
extern double expm1 (double __x) ; extern double __expm1 (double __x) ;
extern double log1p (double __x) ; extern double __log1p (double __x) ;
extern double logb (double __x) ; extern double __logb (double __x) ;
extern double exp2 (double __x) ; extern double __exp2 (double __x) ;
extern double log2 (double __x) ; extern double __log2 (double __x) ;
extern double pow (double __x, double __y) ; extern double __pow (double __x, double __y) ;
extern double sqrt (double __x) ; extern double __sqrt (double __x) ;
extern double hypot (double __x, double __y) ; extern double __hypot (double __x, double __y) ;
extern double cbrt (double __x) ; extern double __cbrt (double __x) ;
extern double ceil (double __x) ; extern double __ceil (double __x) ;
extern double fabs (double __x) ; extern double __fabs (double __x) ;
extern double floor (double __x) ; extern double __floor (double __x) ;
extern double fmod (double __x, double __y) ; extern double __fmod (double __x, double __y) ;
extern int __isinf (double __value) ;
extern int __finite (double __value) ;
extern double copysign (double __x, double __y) ; extern double __copysign (double __x, double __y) ;
extern double nan (const char *__tagb) ; extern double __nan (const char *__tagb) ;
extern int __isnan (double __value) ;
extern double erf (double) ; extern double __erf (double) ;
extern double erfc (double) ; extern double __erfc (double) ;
extern double lgamma (double) ; extern double __lgamma (double) ;
extern double tgamma (double) ; extern double __tgamma (double) ;
extern double rint (double __x) ; extern double __rint (double __x) ;
extern double nextafter (double __x, double __y) ; extern double __nextafter (double __x, double __y) ;
extern double nexttoward (double __x, long double __y) ; extern double __nexttoward (double __x, long double __y) ;
extern double remainder (double __x, double __y) ; extern double __remainder (double __x, double __y) ;
extern double scalbn (double __x, int __n) ; extern double __scalbn (double __x, int __n) ;
extern int ilogb (double __x) ; extern int __ilogb (double __x) ;
extern double scalbln (double __x, long int __n) ; extern double __scalbln (double __x, long int __n) ;
extern double nearbyint (double __x) ; extern double __nearbyint (double __x) ;
extern double round (double __x) ; extern double __round (double __x) ;
extern double trunc (double __x) ; extern double __trunc (double __x) ;
extern double remquo (double __x, double __y, int *__quo) ; extern double __remquo (double __x, double __y, int *__quo) ;
extern long int lrint (double __x) ; extern long int __lrint (double __x) ;
extern long long int llrint (double __x) ; extern long long int __llrint (double __x) ;
extern long int lround (double __x) ; extern long int __lround (double __x) ;
extern long long int llround (double __x) ; extern long long int __llround (double __x) ;
extern double fdim (double __x, double __y) ; extern double __fdim (double __x, double __y) ;
extern double fmax (double __x, double __y) ; extern double __fmax (double __x, double __y) ;
extern double fmin (double __x, double __y) ; extern double __fmin (double __x, double __y) ;
extern int __fpclassify (double __value)
     ;
extern int __signbit (double __value)
     ;
extern double fma (double __x, double __y, double __z) ; extern double __fma (double __x, double __y, double __z) ;
extern float acosf (float __x) ; extern float __acosf (float __x) ;
extern float asinf (float __x) ; extern float __asinf (float __x) ;
extern float atanf (float __x) ; extern float __atanf (float __x) ;
extern float atan2f (float __y, float __x) ; extern float __atan2f (float __y, float __x) ;
extern float cosf (float __x) ; extern float __cosf (float __x) ;
extern float sinf (float __x) ; extern float __sinf (float __x) ;
extern float tanf (float __x) ; extern float __tanf (float __x) ;
extern float coshf (float __x) ; extern float __coshf (float __x) ;
extern float sinhf (float __x) ; extern float __sinhf (float __x) ;
extern float tanhf (float __x) ; extern float __tanhf (float __x) ;
extern float acoshf (float __x) ; extern float __acoshf (float __x) ;
extern float asinhf (float __x) ; extern float __asinhf (float __x) ;
extern float atanhf (float __x) ; extern float __atanhf (float __x) ;
extern float expf (float __x) ; extern float __expf (float __x) ;
extern float frexpf (float __x, int *__exponent) ; extern float __frexpf (float __x, int *__exponent) ;
extern float ldexpf (float __x, int __exponent) ; extern float __ldexpf (float __x, int __exponent) ;
extern float logf (float __x) ; extern float __logf (float __x) ;
extern float log10f (float __x) ; extern float __log10f (float __x) ;
extern float modff (float __x, float *__iptr) ; extern float __modff (float __x, float *__iptr) ;
extern float expm1f (float __x) ; extern float __expm1f (float __x) ;
extern float log1pf (float __x) ; extern float __log1pf (float __x) ;
extern float logbf (float __x) ; extern float __logbf (float __x) ;
extern float exp2f (float __x) ; extern float __exp2f (float __x) ;
extern float log2f (float __x) ; extern float __log2f (float __x) ;
extern float powf (float __x, float __y) ; extern float __powf (float __x, float __y) ;
extern float sqrtf (float __x) ; extern float __sqrtf (float __x) ;
extern float hypotf (float __x, float __y) ; extern float __hypotf (float __x, float __y) ;
extern float cbrtf (float __x) ; extern float __cbrtf (float __x) ;
extern float ceilf (float __x) ; extern float __ceilf (float __x) ;
extern float fabsf (float __x) ; extern float __fabsf (float __x) ;
extern float floorf (float __x) ; extern float __floorf (float __x) ;
extern float fmodf (float __x, float __y) ; extern float __fmodf (float __x, float __y) ;
extern int __isinff (float __value) ;
extern int __finitef (float __value) ;
extern float copysignf (float __x, float __y) ; extern float __copysignf (float __x, float __y) ;
extern float nanf (const char *__tagb) ; extern float __nanf (const char *__tagb) ;
extern int __isnanf (float __value) ;
extern float erff (float) ; extern float __erff (float) ;
extern float erfcf (float) ; extern float __erfcf (float) ;
extern float lgammaf (float) ; extern float __lgammaf (float) ;
extern float tgammaf (float) ; extern float __tgammaf (float) ;
extern float rintf (float __x) ; extern float __rintf (float __x) ;
extern float nextafterf (float __x, float __y) ; extern float __nextafterf (float __x, float __y) ;
extern float nexttowardf (float __x, long double __y) ; extern float __nexttowardf (float __x, long double __y) ;
extern float remainderf (float __x, float __y) ; extern float __remainderf (float __x, float __y) ;
extern float scalbnf (float __x, int __n) ; extern float __scalbnf (float __x, int __n) ;
extern int ilogbf (float __x) ; extern int __ilogbf (float __x) ;
extern float scalblnf (float __x, long int __n) ; extern float __scalblnf (float __x, long int __n) ;
extern float nearbyintf (float __x) ; extern float __nearbyintf (float __x) ;
extern float roundf (float __x) ; extern float __roundf (float __x) ;
extern float truncf (float __x) ; extern float __truncf (float __x) ;
extern float remquof (float __x, float __y, int *__quo) ; extern float __remquof (float __x, float __y, int *__quo) ;
extern long int lrintf (float __x) ; extern long int __lrintf (float __x) ;
extern long long int llrintf (float __x) ; extern long long int __llrintf (float __x) ;
extern long int lroundf (float __x) ; extern long int __lroundf (float __x) ;
extern long long int llroundf (float __x) ; extern long long int __llroundf (float __x) ;
extern float fdimf (float __x, float __y) ; extern float __fdimf (float __x, float __y) ;
extern float fmaxf (float __x, float __y) ; extern float __fmaxf (float __x, float __y) ;
extern float fminf (float __x, float __y) ; extern float __fminf (float __x, float __y) ;
extern int __fpclassifyf (float __value)
     ;
extern int __signbitf (float __value)
     ;
extern float fmaf (float __x, float __y, float __z) ; extern float __fmaf (float __x, float __y, float __z) ;
extern long double acosl (long double __x) ; extern long double __acosl (long double __x) ;
extern long double asinl (long double __x) ; extern long double __asinl (long double __x) ;
extern long double atanl (long double __x) ; extern long double __atanl (long double __x) ;
extern long double atan2l (long double __y, long double __x) ; extern long double __atan2l (long double __y, long double __x) ;
extern long double cosl (long double __x) ; extern long double __cosl (long double __x) ;
extern long double sinl (long double __x) ; extern long double __sinl (long double __x) ;
extern long double tanl (long double __x) ; extern long double __tanl (long double __x) ;
extern long double coshl (long double __x) ; extern long double __coshl (long double __x) ;
extern long double sinhl (long double __x) ; extern long double __sinhl (long double __x) ;
extern long double tanhl (long double __x) ; extern long double __tanhl (long double __x) ;
extern long double acoshl (long double __x) ; extern long double __acoshl (long double __x) ;
extern long double asinhl (long double __x) ; extern long double __asinhl (long double __x) ;
extern long double atanhl (long double __x) ; extern long double __atanhl (long double __x) ;
extern long double expl (long double __x) ; extern long double __expl (long double __x) ;
extern long double frexpl (long double __x, int *__exponent) ; extern long double __frexpl (long double __x, int *__exponent) ;
extern long double ldexpl (long double __x, int __exponent) ; extern long double __ldexpl (long double __x, int __exponent) ;
extern long double logl (long double __x) ; extern long double __logl (long double __x) ;
extern long double log10l (long double __x) ; extern long double __log10l (long double __x) ;
extern long double modfl (long double __x, long double *__iptr) ; extern long double __modfl (long double __x, long double *__iptr) ;
extern long double expm1l (long double __x) ; extern long double __expm1l (long double __x) ;
extern long double log1pl (long double __x) ; extern long double __log1pl (long double __x) ;
extern long double logbl (long double __x) ; extern long double __logbl (long double __x) ;
extern long double exp2l (long double __x) ; extern long double __exp2l (long double __x) ;
extern long double log2l (long double __x) ; extern long double __log2l (long double __x) ;
extern long double powl (long double __x, long double __y) ; extern long double __powl (long double __x, long double __y) ;
extern long double sqrtl (long double __x) ; extern long double __sqrtl (long double __x) ;
extern long double hypotl (long double __x, long double __y) ; extern long double __hypotl (long double __x, long double __y) ;
extern long double cbrtl (long double __x) ; extern long double __cbrtl (long double __x) ;
extern long double ceill (long double __x) ; extern long double __ceill (long double __x) ;
extern long double fabsl (long double __x) ; extern long double __fabsl (long double __x) ;
extern long double floorl (long double __x) ; extern long double __floorl (long double __x) ;
extern long double fmodl (long double __x, long double __y) ; extern long double __fmodl (long double __x, long double __y) ;
extern int __isinfl (long double __value) ;
extern int __finitel (long double __value) ;
extern long double copysignl (long double __x, long double __y) ; extern long double __copysignl (long double __x, long double __y) ;
extern long double nanl (const char *__tagb) ; extern long double __nanl (const char *__tagb) ;
extern int __isnanl (long double __value) ;
extern long double erfl (long double) ; extern long double __erfl (long double) ;
extern long double erfcl (long double) ; extern long double __erfcl (long double) ;
extern long double lgammal (long double) ; extern long double __lgammal (long double) ;
extern long double tgammal (long double) ; extern long double __tgammal (long double) ;
extern long double rintl (long double __x) ; extern long double __rintl (long double __x) ;
extern long double nextafterl (long double __x, long double __y) ; extern long double __nextafterl (long double __x, long double __y) ;
extern long double nexttowardl (long double __x, long double __y) ; extern long double __nexttowardl (long double __x, long double __y) ;
extern long double remainderl (long double __x, long double __y) ; extern long double __remainderl (long double __x, long double __y) ;
extern long double scalbnl (long double __x, int __n) ; extern long double __scalbnl (long double __x, int __n) ;
extern int ilogbl (long double __x) ; extern int __ilogbl (long double __x) ;
extern long double scalblnl (long double __x, long int __n) ; extern long double __scalblnl (long double __x, long int __n) ;
extern long double nearbyintl (long double __x) ; extern long double __nearbyintl (long double __x) ;
extern long double roundl (long double __x) ; extern long double __roundl (long double __x) ;
extern long double truncl (long double __x) ; extern long double __truncl (long double __x) ;
extern long double remquol (long double __x, long double __y, int *__quo) ; extern long double __remquol (long double __x, long double __y, int *__quo) ;
extern long int lrintl (long double __x) ; extern long int __lrintl (long double __x) ;
extern long long int llrintl (long double __x) ; extern long long int __llrintl (long double __x) ;
extern long int lroundl (long double __x) ; extern long int __lroundl (long double __x) ;
extern long long int llroundl (long double __x) ; extern long long int __llroundl (long double __x) ;
extern long double fdiml (long double __x, long double __y) ; extern long double __fdiml (long double __x, long double __y) ;
extern long double fmaxl (long double __x, long double __y) ; extern long double __fmaxl (long double __x, long double __y) ;
extern long double fminl (long double __x, long double __y) ; extern long double __fminl (long double __x, long double __y) ;
extern int __fpclassifyl (long double __value)
     ;
extern int __signbitl (long double __value)
     ;
extern long double fmal (long double __x, long double __y, long double __z) ; extern long double __fmal (long double __x, long double __y, long double __z) ;
enum
  {
    FP_NAN =
      0,
    FP_INFINITE =
      1,
    FP_ZERO =
      2,
    FP_SUBNORMAL =
      3,
    FP_NORMAL =
      4
  };
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;
typedef long long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long int uint_least64_t;
typedef signed char int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long int uint_fast64_t;
typedef int intptr_t;
typedef unsigned int uintptr_t;
typedef long long int intmax_t;
typedef unsigned long long int uintmax_t;
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     ;
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     ;
extern void __assert (const char *__assertion, const char *__file, int __line)
     ;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
 typedef signed long long int __int64_t;
 typedef unsigned long long int __uint64_t;
 typedef long long int __quad_t;
 typedef unsigned long long int __u_quad_t;
 typedef __u_quad_t __dev_t;
 typedef unsigned int __uid_t;
 typedef unsigned int __gid_t;
 typedef unsigned long int __ino_t;
 typedef __u_quad_t __ino64_t;
 typedef unsigned int __mode_t;
 typedef unsigned int __nlink_t;
 typedef long int __off_t;
 typedef __quad_t __off64_t;
 typedef int __pid_t;
 typedef struct { int __val[2]; } __fsid_t;
 typedef long int __clock_t;
 typedef unsigned long int __rlim_t;
 typedef __u_quad_t __rlim64_t;
 typedef unsigned int __id_t;
 typedef long int __time_t;
 typedef unsigned int __useconds_t;
 typedef long int __suseconds_t;
 typedef int __daddr_t;
 typedef int __key_t;
 typedef int __clockid_t;
 typedef void * __timer_t;
 typedef long int __blksize_t;
 typedef long int __blkcnt_t;
 typedef __quad_t __blkcnt64_t;
 typedef unsigned long int __fsblkcnt_t;
 typedef __u_quad_t __fsblkcnt64_t;
 typedef unsigned long int __fsfilcnt_t;
 typedef __u_quad_t __fsfilcnt64_t;
 typedef int __fsword_t;
 typedef int __ssize_t;
 typedef long int __syscall_slong_t;
 typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
 typedef int __intptr_t;
 typedef unsigned int __socklen_t;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
};
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
struct _IO_FILE {
  int _flags;
  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);
typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);
typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);
typedef int __io_close_fn (void *__cookie);
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) ;
extern int _IO_ferror (_IO_FILE *__fp) ;
extern int _IO_peekc_locked (_IO_FILE *__fp);
extern void _IO_flockfile (_IO_FILE *) ;
extern void _IO_funlockfile (_IO_FILE *) ;
extern int _IO_ftrylockfile (_IO_FILE *) ;
extern int _IO_vfscanf (_IO_FILE * , const char * ,
   __gnuc_va_list, int *);
extern int _IO_vfprintf (_IO_FILE *, const char *,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);
extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);
extern void _IO_free_backup_area (_IO_FILE *) ;
typedef _G_fpos_t fpos_t;
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern int remove (const char *__filename) ;
extern int rename (const char *__old, const char *__new) ;
extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) ;
extern int fclose (FILE *__stream);
extern int fflush (FILE *__stream);
extern FILE *fopen (const char * __filename,
      const char * __modes) ;
extern FILE *freopen (const char * __filename,
        const char * __modes,
        FILE * __stream) ;
extern void setbuf (FILE * __stream, char * __buf) ;
extern int setvbuf (FILE * __stream, char * __buf,
      int __modes, size_t __n) ;
extern int fprintf (FILE * __stream,
      const char * __format, ...);
extern int printf (const char * __format, ...);
extern int sprintf (char * __s,
      const char * __format, ...) ;
extern int vfprintf (FILE * __s, const char * __format,
       __gnuc_va_list __arg);
extern int vprintf (const char * __format, __gnuc_va_list __arg);
extern int vsprintf (char * __s, const char * __format,
       __gnuc_va_list __arg) ;
extern int snprintf (char * __s, size_t __maxlen,
       const char * __format, ...)
     ;
extern int vsnprintf (char * __s, size_t __maxlen,
        const char * __format, __gnuc_va_list __arg)
     ;
extern int fscanf (FILE * __stream,
     const char * __format, ...) ;
extern int scanf (const char * __format, ...) ;
extern int sscanf (const char * __s,
     const char * __format, ...) ;
extern int __isoc99_fscanf (FILE * __stream,
       const char * __format, ...) ;
extern int __isoc99_scanf (const char * __format, ...) ;
extern int __isoc99_sscanf (const char * __s,
       const char * __format, ...) ;
extern int vfscanf (FILE * __s, const char * __format,
      __gnuc_va_list __arg)
     ;
extern int vscanf (const char * __format, __gnuc_va_list __arg)
     ;
extern int vsscanf (const char * __s,
      const char * __format, __gnuc_va_list __arg)
     ;
extern int __isoc99_vfscanf (FILE * __s,
        const char * __format,
        __gnuc_va_list __arg) ;
extern int __isoc99_vscanf (const char * __format,
       __gnuc_va_list __arg) ;
extern int __isoc99_vsscanf (const char * __s,
        const char * __format,
        __gnuc_va_list __arg) ;
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
extern int getchar (void);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);
extern char *fgets (char * __s, int __n, FILE * __stream)
     ;
extern char *gets (char *__s) ;
extern int fputs (const char * __s, FILE * __stream);
extern int puts (const char *__s);
extern int ungetc (int __c, FILE *__stream);
extern size_t fread (void * __ptr, size_t __size,
       size_t __n, FILE * __stream) ;
extern size_t fwrite (const void * __ptr, size_t __size,
        size_t __n, FILE * __s);
extern int fseek (FILE *__stream, long int __off, int __whence);
extern long int ftell (FILE *__stream) ;
extern void rewind (FILE *__stream);
extern int fgetpos (FILE * __stream, fpos_t * __pos);
extern int fsetpos (FILE *__stream, const fpos_t *__pos);
extern void clearerr (FILE *__stream) ;
extern int feof (FILE *__stream) ;
extern int ferror (FILE *__stream) ;
extern void perror (const char *__s);
static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 + si2);
}
static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    si1 * si2;
}
static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{
  return
    -si;
}
static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (si1 + si2);
}
static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (si1 - si2);
}
static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    si1 * si2;
}
static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 + ui2;
}
static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 - ui2;
}
static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 + ui2;
}
static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 - ui2;
}
static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 + ui2;
}
static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 - ui2;
}
static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static
  long
  __undefined;
static
  int32_t
  g_3
  =
  0x2C70BB74L;
static
  uint16_t
  g_30
  =
  8UL;
static volatile int8_t g_38 = 0xA5L;
static
  int32_t
  g_54
  =
  0x26A25A95L;
static
  int32_t
  g_71
  [9]
  =
  {
4L,
4L,
4L,
4L,
4L,
4L,
4L,
4L,
4L
};
static
  int32_t
  g_201
  =
  0x90B57F07L;
static
  int32_t
  g_300
  =
  0xA87531F4L;
static
  uint32_t
  g_329
  [2]
  [7]
  [6]
  =
  {
{{1UL, 0x86E9DE6DL, 0xA3237E1DL, 0x097B45DCL, 0xA200B0FFL, 4294967290UL}, {4294967291UL, 1UL, 0xA3237E1DL, 0x30B79297L, 0xA3237E1DL, 1UL}, {4294967293UL, 0x30B79297L, 4294967290UL, 2UL, 0xCBC3065EL, 0x58EB26F2L}, {2UL, 0xCBC3065EL, 0x58EB26F2L, 0xA3237E1DL, 3UL, 1UL}, {1UL, 0xCBC3065EL, 0xB8C5FC2AL, 0xB8C5FC2AL, 0xCBC3065EL, 1UL}, {0xCBC3065EL, 0x30B79297L, 1UL, 0x86E9DE6DL, 0xA3237E1DL, 0x097B45DCL}, {0xB8C5FC2AL, 1UL, 0x4A936E5EL, 0x30B79297L, 3UL, 0xB8C5FC2AL}}, {{1UL, 0xA3237E1DL, 0x30B79297L, 0xA3237E1DL, 1UL, 4294967291UL}, {0xA200B0FFL, 4294967291UL, 3UL, 1UL, 0xB8C5FC2AL, 0x58EB26F2L}, {0x86E9DE6DL, 1UL, 0xB8C5FC2AL, 4294967291UL, 0x58EB26F2L, 0x58EB26F2L}, {4294967293UL, 3UL, 3UL, 4294967293UL, 4294967290UL, 4294967291UL}, {0x58EB26F2L, 0x097B45DCL, 0x30B79297L, 2UL, 0xA3237E1DL, 0xB8C5FC2AL}, {0x30B79297L, 0x86E9DE6DL, 0x4A936E5EL, 1UL, 0xA3237E1DL, 1UL}, {1UL, 0x097B45DCL, 1UL, 0xCBC3065EL, 4294967290UL, 0x86E9DE6DL}} };
static
  int8_t
  g_344
  =
  1L;
static
  int16_t
  g_367
  =
  0x0D65L;
static
  uint32_t
  g_458
  =
  0xBCA3924BL;
static
  uint32_t
  g_513
  [7]
  =
  {
0x361537A8L,
0x361537A8L,
0x361537A8L,
0x361537A8L,
0x361537A8L,
0x361537A8L,
0x361537A8L
};
static
  int16_t
  g_521
  =
  (-9L);
static
  int16_t
  g_555
  =
  (-1L);
static
  uint8_t
  g_588
  =
  0xDDL;
static
  int32_t
  g_658
  =
  0x0C0C4A79L;
static volatile uint16_t g_669 = 0UL;
static
  int16_t
  g_697
  [9]
  [2]
  =
  {
{0x29D4L,
(-1L)},
{0x29D4L,
0x29D4L},
{0x29D4L,
(-1L)},
{0x29D4L,
0x29D4L},
{0x29D4L, (-1L)}, {0x29D4L,
0x29D4L},
{0x29D4L, (-1L)}, {0x29D4L,
0x29D4L},
{0x29D4L, (-1L)} };
static
  uint32_t
  g_721
  [10]
  =
  {
1UL,
0x5C7E2520L,
1UL,
0x39CBF230L,
0x39CBF230L,
1UL,
0x5C7E2520L,
1UL,
0x39CBF230L,
0x39CBF230L
};
static
  uint16_t
  g_774
  =
  0x02FDL;
static
  int32_t
  g_866
  =
  3L;
static
  uint32_t
  g_920
  =
  0UL;
static
  int8_t
  g_930
  =
  0xC4L;
static
  uint32_t
  g_978
  =
  4294967295UL;
static
  volatile
  uint32_t
  g_1265
  [5]
  [8]
  =
  {
{0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL},
{0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL},
{0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL}, {0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL}, {0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL} };
static
  uint16_t
  g_1266
  =
  0x383EL;
static
  uint32_t
  g_1281
  =
  1UL;
static volatile int32_t g_1382 = 1L;
static
  int32_t
  g_1763
  =
  0xED33F476L;
static
  int32_t
  g_1782
  =
  0xAEC5DABAL;
static
  uint8_t
  g_1810
  [1]
  =
  {
3UL
};
static
  int16_t
  g_1835
  [1]
  [7]
  [5]
  =
  {
{{(-9L), (-9L), 2L, (-9L), (-9L)}, {(-1L), (-9L), (-1L), (-1L), (-9L)}, {(-9L), (-1L), (-1L), (-9L), (-1L)}, {(-9L), (-9L), 2L, (-9L), (-9L)}, {(-1L), (-9L), (-1L), (-1L), (-9L)}, {(-9L), (-1L), (-1L), (-9L), (-1L)}, {(-9L), (-9L), 2L, (-9L), (-9L)}} };
static
  uint8_t
  g_1917
  =
  255UL;
static volatile int16_t g_1995 = 0x4CFCL;
static
  int8_t
  g_2004
  [7]
  [1]
  [10]
  =
  {
{{0L, 9L, 0L, (-1L), 0L, (-1L), (-1L), 0L, (-1L), 0L}}, {{0L, 0L, 0xD5L, 0L, 0xE5L, (-1L), 2L, (-1L), 0xE5L, 0L}}, {{0L, (-3L), 0L, (-1L), 0x7BL, 0L, 2L, 2L, 0L, 0x7BL}}, {{0xD5L, 0L, 0L, 0L, (-1L), 0L, 9L, 0L, 9L, 0L}}, {{2L, (-3L), (-1L), (-3L), 2L, 0xD5L, (-1L), 9L, 9L, (-1L)}}, {{0L, 0xD5L, 0L, 0L, 0xD5L, 0L, 0xE5L, (-1L), 2L, (-1L)}}, {{(-3L), 0L, 2L, 9L, 2L, 0L, (-3L), 0xE5L, 0L, 0L}} };
static
  int16_t
  g_2065
  =
  0xF404L;
static
  uint32_t
  g_2066
  [9]
  =
  {
0xA0898CF5L,
0xA0898CF5L,
0xA0898CF5L,
0xA0898CF5L,
0xA0898CF5L,
0xA0898CF5L,
0xA0898CF5L,
0xA0898CF5L,
0xA0898CF5L
};
static
  int32_t
  g_2248
  =
  0L;
static volatile uint32_t g_2373 = 0x23C5291CL;
static
  volatile
  uint32_t
  g_2388
  [2]
  =
  {
0UL,
0UL
};
static
  int32_t
  g_2580
  =
  (-9L);
static volatile uint16_t g_2617 = 0xB993L;
static
  int32_t
  g_3117
  =
  9L;
static
  int32_t
  g_3350
  =
  (-1L);
static
  uint8_t
  g_3691
  =
  1UL;
static
  uint32_t
  g_3847
  =
  4294967295UL;
static volatile uint16_t g_4401 = 0xBDBCL;
static
  int8_t
  g_4460
  =
  1L;
static
  uint32_t
  g_4512
  =
  4294967295UL;
static
  int8_t
  g_4614
  =
  (-9L);
static
  int32_t
  g_4663
  =
  0xD619133FL;
static
  int16_t
  g_4847
  =
  0x2A05L;
static
  uint32_t
  g_4848
  [6]
  =
  {
0xC783FEF8L,
4UL,
0xC783FEF8L,
0xC783FEF8L,
4UL,
0xC783FEF8L
};
static
  int8_t
  g_4893
  =
  (-10L);
static volatile uint8_t g_4963 = 252UL;
static
  int16_t
func_1
(void
);
static
  int32_t
func_4
(int16_t
p_5
);
static
  int16_t
func_6
(uint8_t
p_7
);
static
  uint16_t
func_14
(int8_t
p_15,
int8_t
p_16,
uint32_t
p_17,
uint16_t
p_18
);
static
  int16_t
func_22
(int8_t
p_23,
int8_t
p_24
);
static
  int32_t
func_42
(uint16_t
p_43,
int32_t
p_44
);
static
  uint8_t
func_45
(uint32_t
p_46,
int32_t
p_47,
uint32_t
p_48,
int16_t
p_49,
uint16_t
p_50
);
static
  int32_t
func_56
(int32_t
p_57,
uint16_t
p_58,
int8_t
p_59,
uint32_t
p_60
);
static int16_t
func_1 (void
)
{
  int16_t
    l_2
    [1];
  int
    i;
  for
    (i
     =
     0;
     i
     <
     1;
     i++)
    l_2
      [i]
      =
      0x2062L;
  for
    (g_3
     =
     0;
     (g_3
      >=
      0);
     g_3
     -=
     1)
  if (func_4 ((l_2[g_3] = func_6 (((0x9869L > (safe_lshift_func_int8_t_s_u (0x5AL, 7))) <= l_2[g_3])))))
    {
    }
    else
    {
    }
  return
    g_697
    [8]
    [0];
}
static int32_t
func_4
  (int16_t
   p_5
)
{
  return
    g_588;
}
static int16_t
func_6
  (uint8_t
   p_7
)
{
  int32_t
    l_19
    =
    0xD0176DF7L;
  int8_t
    l_3776
    =
    0xD9L;
  uint32_t
    l_3969
    =
    0xC6B29A57L;
  if (g_3)
  {
    uint8_t
      l_29
      =
      9UL;
    int32_t
      l_37
      =
      (-2L);
    l_37
      =
      (safe_lshift_func_int16_t_s_u
       ((0x673E7ED6L > (g_71[7] = (!(safe_mul_func_int16_t_s_s (p_7, func_14 (p_7, (l_19 & (safe_mod_func_uint16_t_u_u (0x3C1DL, func_22 ((safe_mod_func_int32_t_s_s (0x004DDE9AL, (safe_rshift_func_uint8_t_u_u ((g_30 = (l_29 = 0xE5L)), (safe_lshift_func_int8_t_s_s (((safe_lshift_func_uint16_t_u_u ((safe_rshift_func_int8_t_s_s (p_7, 1)), (p_7 == l_37))) != g_38), 0)))))), l_19)))), p_7, l_37)))))), 10));
  }
  else
  {
    uint8_t
      l_3775
      =
      0xA7L;
    int32_t
      l_3777
      =
      0x2BF1DB03L;
    if ((safe_add_func_int32_t_s_s ((safe_sub_func_uint8_t_u_u ((safe_add_func_int32_t_s_s ((g_300 = p_7), ((l_3775 & 0x9C9AL) < p_7))), (0x86CE1C01L ^ (p_7 & (l_3777 = ((p_7 | 0xE7L) | l_3776)))))), l_3775)))
    {}
    else
    {
    }
  }
  return
    l_3969;
}
static uint16_t
func_14
  (int8_t
   p_15,
   int8_t
   p_16,
   uint32_t
   p_17,
   uint16_t
   p_18
)
{
  uint16_t
    l_3647
    =
    0x0533L;
  return
    l_3647;
}
static int16_t
func_22
  (int8_t
   p_23,
   int8_t
   p_24
)
{
  int32_t
    l_39
    =
    0xE69CD17CL;
  int8_t
    l_3351
    =
    (-1L);
  if ((1L ^ (safe_lshift_func_int16_t_s_s (p_23, l_39))))
  {
    int32_t
      l_53
      =
      (-5L);
    int32_t
      l_55
      =
      0x094BF7D6L;
    int32_t
      l_2017
      =
      5L;
    if (((g_71[7] = func_42 ((p_24 & func_45 ((safe_add_func_int16_t_s_s (p_23, g_30)), (g_54 = ((l_53 = g_30) ^ g_3)), g_3, (l_55 > (l_2017 = ((g_71[7] = func_56 ((safe_add_func_uint8_t_u_u (0x16L, ((safe_add_func_uint8_t_u_u ((safe_mod_func_int16_t_s_s (0x6D98L, 0x5C25L)), g_38)) != 253UL))), g_3, l_55, p_24)) >= g_2004[1][0][4]))), g_1810[0])), g_2066[5])) >= 1UL))
    {}
    else
    {
    }
  }
  else
  {
  }
  return
    l_3351;
}
static int32_t
func_42
  (uint16_t
   p_43,
   int32_t
   p_44
)
{
  uint32_t
    l_3008
    =
    4294967295UL;
  return
    l_3008;
}
static uint8_t
func_45
  (uint32_t
   p_46,
   int32_t
   p_47,
   uint32_t
   p_48,
   int16_t
   p_49,
   uint16_t
   p_50
)
{
  int32_t
    l_2018
    =
    5L;
  uint32_t
    l_2064
    =
    0x2D09995EL;
  int32_t
    l_2069
    [9]
    =
    {
0L,
7L,
0L,
7L,
0L,
7L,
0L,
7L,
0L
  };
  int8_t
    l_2274
    =
    0x2CL;
  int8_t
    l_2600
    [10]
    [4]
    =
    {
 {0xF2L,
  0x85L,
  0x6FL,
  0x71L},
{0x6FL,
0x71L,
(-1L),
0x71L},
{(-1L), 0x85L, 1L, 0x6FL}, {1L, (-1L), 0x71L, (-1L)}, {1L, (-1L), 0x14L, 0x14L}, {1L, 1L, 0x71L, 1L}, {1L, 0x14L, 1L, (-1L)}, {(-1L), 0xF2L, (-1L), 1L}, {0x6FL, 0xF2L, 0x6FL, (-1L)}, {0xF2L, 0x14L, 0L, 1L} };
  int8_t
      l_2275
      =
      0x4FL;
    int16_t
      l_2286
      =
      0xE996L;
    int32_t
      l_2307
      =
      (-9L);
    uint32_t
 l_2284
 =
 4294967294UL;
      int32_t
 l_2285
 =
 0x23D170B6L;
      for
 (;
  (g_774
   <
   20);
  g_774++)
      for
   (g_201
    =
    0;
    (g_201
     >=
     (-27));
    g_201
    =
    safe_sub_func_int16_t_s_s
    (g_201,
     6))
 {
   int8_t
     l_2305
     =
     0x14L;
   int32_t
     l_2306
     =
     (-1L);
   l_2307
     =
     (safe_unary_minus_func_int32_t_s
      ((safe_mod_func_uint8_t_u_u (((p_46 = (l_2306 = (safe_sub_func_uint32_t_u_u ((safe_add_func_int8_t_s_s ((((((254UL & 1UL) == (safe_lshift_func_int8_t_s_u (0xF8L, 6))) && 0xCDL) && ((safe_lshift_func_int16_t_s_u (g_38, 7)) ^ (g_329[1][2][1] > (l_2305 = l_2275)))) | l_2275), g_2065)), p_46)))) == l_2064), p_47))));
 }
uint16_t
   l_2291
   =
   0x6398L;
 g_71
   [7]
   =
   ((safe_sub_func_int16_t_s_s ((safe_add_func_uint16_t_u_u ((0x02D3L | ((g_2004[0][0][2] = (l_2284 = g_697[8][0])) | (((g_1266 ^ g_329[1][1][0]) != ((65528UL && (l_2275 < (((((l_2286 = l_2285) || (safe_sub_func_uint16_t_u_u ((safe_mul_func_uint16_t_u_u (l_2291, 65535UL)), g_2248))) == g_1810[0]) == p_50) && g_201))) && 65532UL)) >= p_48))), (-5L))), g_521)) > p_50);
 for
   (g_201
    =
    0;
    (g_201
     >=
     (-27));
    g_201
    =
    safe_sub_func_int16_t_s_s
    (g_201,
     6))
 {
   int8_t
     l_2305
     =
     0x14L;
   int32_t
     l_2306
     =
     (-1L);
   l_2307
     =
     (safe_unary_minus_func_int32_t_s
      ((safe_mod_func_uint8_t_u_u (((p_46 = (l_2306 = (safe_sub_func_uint32_t_u_u ((safe_add_func_int8_t_s_s ((((((254UL & 1UL) == (safe_lshift_func_int8_t_s_u (0xF8L, 6))) && 0xCDL) && ((safe_lshift_func_int16_t_s_u (g_38, 7)) ^ (g_329[1][2][1] > (l_2305 = l_2275)))) | l_2275), g_2065)), p_46)))) == l_2064), p_47))));
 }
 l_2069
   [7]
   =
   (((safe_mul_func_int8_t_s_s ((safe_lshift_func_uint8_t_u_s (l_2274, (safe_add_func_uint8_t_u_u (p_46, ((((g_2004[6][0][8] && ((safe_mod_func_uint32_t_u_u (p_46, l_2307)) || ((((safe_rshift_func_int8_t_s_u ((l_2285 = (safe_mul_func_int16_t_s_s (((safe_rshift_func_int16_t_s_u (((safe_add_func_uint16_t_u_u ((safe_lshift_func_int8_t_s_s (((l_2018 ^ (p_48 == ((!((safe_add_func_uint8_t_u_u ((((safe_mul_func_uint8_t_u_u (((((safe_add_func_uint8_t_u_u ((safe_add_func_uint32_t_u_u ((safe_unary_minus_func_int16_t_s (6L)), ((((-2L) < p_48) > g_71[7]) < p_46))), p_48)) && g_3) > p_49) > 0xB3L), p_47)) >= g_1265[2][5]) > 0L), 0x7FL)) && l_2291)) >= l_2018))) & p_48), 3)), 0x855FL)) || 4294967288UL), 6)) != 0UL), p_50))), p_49)) >= p_49) == l_2284) == g_1835[0][3][2]))) <= 0x7D15L) >= g_458) < g_2004[6][0][1]))))), 0x18L)) && p_50) & g_2066[8]);
  return
    l_2600
    [9]
    [3];
}
static int32_t
func_56
  (int32_t
   p_57,
   uint16_t
   p_58,
   int8_t
   p_59,
   uint32_t
   p_60
)
{
  return
    g_588;
}
int
main (void
)
{
  func_1
    ();
}

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
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 - si2);
}
static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    si1 * si2;
}
static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
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
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
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
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
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
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
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
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
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
  int8_t
  g_7
  =
  (-6L);
static
  int32_t
  g_21
  =
  0L;
static
  int32_t
  g_75
  =
  0x4C99FFFBL;
static
  uint16_t
  g_94
  =
  0x8AA1L;
static
  uint32_t
  g_96
  =
  0x7709B807L;
static
  uint32_t
  g_101
  =
  0xA66BE80DL;
static
  uint32_t
  g_129
  =
  9UL;
static
  uint8_t
  g_176
  =
  0x44L;
static
  int8_t
  g_181
  =
  0L;
static
  uint32_t
  g_244
  =
  0x01B28DB7L;
static
  int16_t
  g_245
  =
  (-5L);
static
  uint8_t
  g_276
  =
  0UL;
static
  int32_t
  g_304
  =
  4L;
static
  uint32_t
  g_370
  =
  0x31730F26L;
static
  uint8_t
  g_387
  =
  0x45L;
static
  int32_t
  g_758
  =
  0L;
static
  uint32_t
  g_801
  =
  0x98978E78L;
static
  const
  uint32_t
  g_833
  =
  5UL;
static
  uint8_t
  g_985
  =
  0x87L;
static
  int32_t
  g_1039
  =
  0x6D312621L;
static
  uint32_t
  g_1238
  =
  8UL;
static
  uint32_t
  g_1272
  =
  0xCB2B4AAEL;
static
  uint32_t
  g_1309
  =
  4294967295UL;
static
  int16_t
  g_1473
  =
  0x7267L;
static
  uint32_t
  g_1504
  =
  4294967295UL;
static volatile uint32_t g_1578 = 4294967291UL;
static
  uint32_t
  g_1638
  =
  0xAC38FC42L;
static
  uint32_t
  g_1670
  =
  1UL;
static
  uint32_t
  g_1671
  =
  0UL;
static volatile uint16_t g_1747 = 7UL;
static
  uint32_t
  g_1812
  =
  4294967295UL;
static
  int8_t
  g_1902
  =
  (-5L);
static
  int32_t
  g_1920
  =
  3L;
static
  uint32_t
  g_1957
  =
  0UL;
static
  uint8_t
  g_1958
  =
  5UL;
static
  int8_t
  g_2005
  =
  (-1L);
static
  uint32_t
  g_2111
  =
  0xA8EDD176L;
static
  uint32_t
  g_2112
  =
  0UL;
static
  uint32_t
  g_2189
  =
  0x0108E6C1L;
static
  uint32_t
  g_2285
  =
  0xF02DEBC4L;
static
  int8_t
  g_2286
  =
  0x58L;
static
  uint16_t
func_1
(void
);
static
  int32_t
func_2
(int8_t
p_3,
uint8_t
p_4,
uint32_t
p_5
);
static
  uint16_t
func_22
(const
int32_t
p_23,
int8_t
p_24,
int8_t
p_25,
int8_t
p_26,
uint16_t
p_27
);
static
  const
  uint8_t
func_30
(int16_t
p_31,
const
int16_t
p_32
);
static
  int16_t
func_33
(uint16_t
p_34,
uint32_t
p_35,
const
int8_t
p_36
);
static
  uint16_t
func_39
(int8_t
p_40
);
static
  uint16_t
func_41
(int32_t
p_42,
const
int32_t
p_43,
const
int16_t
p_44,
int32_t
p_45
);
static
  int32_t
func_46
(uint32_t
p_47
);
static
  uint16_t
func_50
(uint16_t
p_51,
uint8_t
p_52,
uint16_t
p_53,
int32_t
p_54
);
static
  uint8_t
func_55
(uint32_t
p_56,
int16_t
p_57,
const
uint32_t
p_58
);
static uint16_t
func_1 (void
)
{
  int16_t
    l_6
    =
    0L;
  int32_t
    l_1502
    =
    0x744250C5L;
  uint16_t
    l_1503
    =
    0x4FC1L;
  int8_t
    l_1870
    =
    0L;
  int16_t
    l_1887
    =
    0xF0ACL;
  int8_t
    l_1942
    =
    (-5L);
  int8_t
    l_2119
    =
    (-1L);
  uint8_t
    l_2188
    =
    251UL;
  uint32_t
    l_2192
    =
    0x7FB453E7L;
  int32_t
    l_2281
    =
    0L;
  const
    int32_t
    l_2284
    =
    0xE9CCD730L;
  if (((!(~(func_2 (l_6, g_7, l_6) < ((g_1504 = ((0xB8B13202L < g_1039) ^ ((0x498EL != (safe_lshift_func_int8_t_s_s ((safe_mod_func_uint8_t_u_u (((((l_1503 = (safe_add_func_uint8_t_u_u ((l_1502 = (safe_add_func_int16_t_s_s ((g_1309 <= (safe_rshift_func_int16_t_s_s ((safe_rshift_func_int8_t_s_u ((-1L), 2)), 9))), l_6))), g_1039))) != (-1L)) && 0x53L) ^ 1L), g_1039)), 6))) < l_6))) == 0xBBEAEAA1L)))) >= 0xE521L))
  {}
  else
  for
      (;
       (l_6
 <=
 13);
       l_6
       =
       safe_add_func_int32_t_s_s
       (l_6,
 1))
    {
    }
  g_21
    =
    ((l_2281 < l_2284) || ((g_245 = (g_1902 < (g_1671 | ((g_370 = (safe_mod_func_uint32_t_u_u ((safe_rshift_func_uint16_t_u_u (((g_181 = (g_1504 == ((((!((l_1503 != ((safe_lshift_func_int8_t_s_s (((safe_rshift_func_int16_t_s_s ((safe_lshift_func_uint8_t_u_s (((1L | (safe_add_func_int8_t_s_s ((l_2119 | 0x4466B2CBL), 0xA6L))) < l_1887), g_1670)), g_1578)) <= g_1039), l_2192)) || 0x5850L)) >= l_1942)) == 4294967290UL) > l_1887) & g_2189))) & l_2192), l_2188)), g_75))) && l_1870)))) || 0xC351L));
  return
    g_1920;
}
static int32_t
func_2
  (int8_t
   p_3,
   uint8_t
   p_4,
   uint32_t
   p_5
)
{
  uint32_t
    l_8
    =
    0x4F147909L;
  int32_t
    l_12
    =
    0x29989D22L;
lbl_988:
  l_8 = g_7;
  for
    (p_4
     =
     (-8);
     (p_4
      >=
      53);
     ++p_4)
  {
    uint8_t
      l_11
      =
      0xE0L;
    int32_t
      l_180
      =
      0x6BF4A85DL;
    g_21
      =
      (safe_mul_func_uint16_t_u_u
       ((safe_lshift_func_uint8_t_u_s (0x12L, 0)), (safe_mul_func_uint16_t_u_u (p_4, (safe_rshift_func_int16_t_s_u (g_7, 0))))));
    if ((func_22 (p_4, (((1L & l_8) || ((((safe_sub_func_uint8_t_u_u (func_30 (func_33 ((safe_lshift_func_uint16_t_u_u (65535UL, (l_12 = func_39 (((func_41 (func_46 (g_7), p_5, (l_180 = (safe_rshift_func_uint16_t_u_u (l_8, 6))), g_181) ^ 4UL) & g_181))))), l_11, p_5), g_833), p_3)) && g_94) && l_8) >= p_4)) & 0L), l_8, l_8, g_833) && 0xBE6DL))
    {
      uint8_t
 l_867
 =
 1UL;
      return
 l_867;
    }
    else
    {
    }
  }
  return
    p_4;
}
static uint16_t
func_22
  (const
   int32_t
   p_23,
   int8_t
   p_24,
   int8_t
   p_25,
   int8_t
   p_26,
   uint16_t
   p_27
)
{
  return
    p_26;
}
static const uint8_t
func_30
  (int16_t
   p_31,
   const
   int16_t
   p_32
)
{
  int32_t
    l_835
    =
    0xCCA57B9AL;
  return
    l_835;
}
static int16_t
func_33
  (uint16_t
   p_34,
   uint32_t
   p_35,
   const
   int8_t
   p_36
)
{
  return
    p_34;
}
static uint16_t
func_39
  (int8_t
   p_40
)
{
  uint8_t
    l_211
    =
    255UL;
  int32_t
    l_219
    =
    (-7L);
  int32_t
    l_226
    =
    (-1L);
  for
    (g_176
     =
     0;
     (g_176
      <
      12);
     g_176
     =
     safe_add_func_int32_t_s_s
     (g_176,
      3))
  {
    int32_t
      l_218
      =
      (-5L);
    int32_t
      l_220
      =
      0xFB97F931L;
    int32_t
      l_223
      =
      9L;
    int32_t
      l_227
      =
      0xEB7A0ED4L;
    if ((0x4F92L < (safe_lshift_func_int16_t_s_s ((((p_40 != (safe_lshift_func_uint16_t_u_u ((p_40 != (((safe_rshift_func_int8_t_s_s (g_244, 2)) | ((safe_add_func_int8_t_s_s (((((l_220 = (safe_mod_func_int8_t_s_s ((((safe_rshift_func_int16_t_s_u ((-2L), ((((((safe_mul_func_int8_t_s_s ((l_227 = ((safe_sub_func_uint16_t_u_u ((l_223 = (safe_rshift_func_int16_t_s_u (((((safe_rshift_func_int8_t_s_s ((((((g_96 != ((safe_mul_func_int16_t_s_s (p_40, ((l_226 = ((0xFDL | ((safe_add_func_int8_t_s_s (0xC0L, g_7)) && 0x1EL)) & (-1L))) || 0xF3F102FCL))) | g_96)) || l_223) || 6UL) > l_219) != l_227), 0)) > 0x68B3L) > 1L) || p_40), 7))), l_211)) == l_227)), g_181)) || p_40) & 1L) > 0UL) || p_40) != 7L))) == 0xC58CL) == p_40), p_40))) == (-3L)) != p_40) ^ p_40), g_96)) >= g_94)) <= (-10L))), l_218))) || 0x282EL) != l_218), 6))))
    {
    }
    else
    {
      int8_t
 l_319
 =
 0xE3L;
      const
 uint16_t
 l_334
 =
 65535UL;
      if ((p_40 <= ((!(l_227 = (!l_319))) || (safe_lshift_func_int8_t_s_s ((((+(safe_add_func_int8_t_s_s ((l_219 = (-1L)), (l_220 = (g_101 != (safe_sub_func_uint16_t_u_u (0x2827L, (safe_add_func_uint8_t_u_u ((g_75 == ((safe_sub_func_int16_t_s_s (((g_304 > (l_319 ^ (safe_rshift_func_uint8_t_u_u ((safe_rshift_func_int16_t_s_s ((p_40 >= g_304), g_244)), g_276)))) && p_40), p_40)) > l_218)), l_334))))))))) ^ (-4L)) >= 1L), p_40)))))
      {}
      else
      if (p_40)
if (l_220)
 break;
    }
  }
  return
    g_129;
}
static uint16_t
func_41
  (int32_t
   p_42,
   const
   int32_t
   p_43,
   const
   int16_t
   p_44,
   int32_t
   p_45
)
{
  int32_t
    l_199
    =
    (-1L);
  int32_t
    l_200
    =
    0x01793202L;
  l_200
    =
    (l_199
     =
     (~
      (g_129
       &&
       l_200)));
  return
    l_200;
}
static int32_t
func_46
  (uint32_t
   p_47
)
{
  int8_t
    l_71
    =
    (-9L);
  int32_t
    l_72
    =
    0xCA7DBC8BL;
  int32_t
    l_73
    =
    0L;
  int32_t
    l_74
    =
    (-2L);
  int8_t
    l_177
    =
    9L;
  l_177
    =
    (safe_lshift_func_uint16_t_u_s
     (func_50
      (g_21,
       func_55
       ((safe_lshift_func_uint16_t_u_u (g_7, g_21)), p_47, ((safe_add_func_int8_t_s_s ((!(safe_rshift_func_int16_t_s_s (((~0x5E60D1F2L) < ((safe_mul_func_uint16_t_u_u ((safe_lshift_func_uint8_t_u_u (255UL, 3)), (g_75 = ((((g_21 <= ((-9L) & (l_74 = (safe_sub_func_int16_t_s_s ((l_73 = (l_72 = l_71)), (-1L)))))) & (-1L)) & 0x4B4EA65DL) || 0x84L)))) ^ 0x129E5E26L)), 5))), g_7)) == l_71)), g_21, p_47), 7));
  return
    l_72;
}
static uint16_t
func_50
  (uint16_t
   p_51,
   uint8_t
   p_52,
   uint16_t
   p_53,
   int32_t
   p_54
)
{
  uint8_t
    l_109
    =
    9UL;
  int32_t
    l_110
    =
    (-1L);
  int32_t
    l_128
    =
    (-1L);
  uint32_t
    l_148
    =
    0UL;
  int16_t
    l_151
    =
    1L;
  uint32_t
    l_152
    =
    4294967289UL;
  g_21
    =
    (safe_lshift_func_int16_t_s_u
     ((safe_mod_func_uint32_t_u_u ((~(((!(safe_sub_func_int32_t_s_s ((((((l_128 == (-8L)) && l_110) <= (safe_mod_func_uint8_t_u_u ((safe_sub_func_int8_t_s_s ((g_101 && (g_94 | (p_54 = (safe_mul_func_uint16_t_u_u (((((safe_rshift_func_uint8_t_u_u ((safe_sub_func_int16_t_s_s (((safe_lshift_func_uint16_t_u_s (g_96, 2)) && (l_148 = g_94)), (safe_add_func_int32_t_s_s (((g_7 = 5L) ^ p_52), g_75)))), 1)) >= 0x5F07L) && (-7L)) > 5UL), g_21))))), p_52)), l_151))) ^ l_109) <= (-1L)), l_110))) ^ 1UL) | l_152)), g_21)), 14));
  return
    p_54;
}
static uint8_t
func_55
  (uint32_t
   p_56,
   int16_t
   p_57,
   const
   uint32_t
   p_58
)
{
  return
    g_7;
}
int
main
  (int
   argc,
   char
   *argv
   []
)
{
  func_1
    ();
  return
    0;
}

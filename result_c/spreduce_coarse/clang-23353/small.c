typedef unsigned int size_t;
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
int printf (const char *, ...);
void __assert_fail (const char *__assertion, const char *__file, unsigned int __line, const char *__function);
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
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
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
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
(safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
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
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static long __undefined;
struct S0 {
   volatile uint8_t f0;
   volatile uint32_t f1;
   const volatile int16_t f2;
   volatile uint32_t f3;
   int16_t f4;
   volatile uint64_t f5;
};
struct S1 {
   signed f0 : 5;
   signed f1 : 8;
   uint32_t f2;
   volatile uint16_t f3;
};
static int8_t g_16 = 0x61L;
static int32_t g_25 = 0x6EAB3CF8L;
static struct S0 g_59 = {1UL,0xED469F41L,0xF53CL,0xCBF698BAL,-1L,0x49E864ADB5D2300BLL};
static volatile int64_t g_60 = 0xE07F0936A74B4FBFLL;
static int32_t g_62 = 3L;
static volatile struct S1 g_80 = {-4,-4,0x4F663622L,0xFA2EL};
static volatile int32_t ** volatile g_108 = (void*)0;
static volatile int32_t ** volatile * const g_107 = &g_108;
static int32_t *g_116 = &g_62;
static struct S1 g_125 = {1,-5,0x24141E32L,1UL};
static volatile struct S0 g_126 = {0x0BL,0UL,0x77E3L,18446744073709551615UL,0x04C8L,5UL};
static int32_t *** volatile g_129 = (void*)0;
static int32_t **g_132 = &g_116;
static int32_t *** volatile g_131 = &g_132;
static uint8_t g_266 = 0xCCL;
static volatile struct S1 g_313 = {-4,-14,0xBCE0E0F3L,0x7A9BL};
static int64_t g_566 = (-9L);
static volatile uint16_t g_570 = 0UL;
static uint8_t g_687 = 250UL;
static volatile uint8_t g_692 = 0x82L;
static volatile struct S0 g_753 = {1UL,18446744073709551606UL,-1L,7UL,0x7256L,18446744073709551611UL};
static volatile struct S0 g_763 = {1UL,0xDC33B451L,-8L,0x53A7278CL,3L,18446744073709551615UL};
static volatile struct S0 g_792 = {255UL,0x045F4A48L,-1L,1UL,-1L,0x064B141677A4AC4CLL};
static volatile struct S1 g_793 = {3,15,0x139AF61BL,65526UL};
static volatile struct S1 g_794 = {-3,6,0x7005EE34L,0xC9B9L};
static struct S0 g_803 = {0x55L,18446744073709551615UL,0xA09CL,0xCFB1D8EFL,-4L,0xBD35DC7E0B9DB818LL};
static struct S0 g_804 = {246UL,0xAA6AA057L,-6L,0xA3680CAEL,1L,1UL};
static const struct S1 g_818 = {-4,-10,0UL,0x2C76L};
static volatile struct S1 g_847 = {-3,9,18446744073709551614UL,0x1B89L};
static struct S1 g_1163 = {-0,-13,0xBAE1CE67L,4UL};
static const struct S1 *g_1174 = (void*)0;
static const struct S1 g_1202 = {-2,-4,0x4B14E178L,0x6718L};
static uint32_t g_1416 = 0x7AEC422EL;
static struct S0 g_1441 = {0xC3L,0UL,0x3F39L,3UL,8L,0xDF5CA00CAC530F6ELL};
static volatile int32_t g_1478 = 0x647E141EL;
static struct S0 g_1530 = {0xDFL,0x6ABBDA1EL,0L,0x0F4ED0ADL,0L,0x194CD6B76CC454E7LL};
static struct S0 *g_1529 = &g_1530;
static struct S1 g_1594 = {1,-15,1UL,65529UL};
static volatile struct S1 *g_1596 = &g_847;
static volatile struct S1 ** volatile g_1595 = &g_1596;
static const struct S0 g_1639 = {253UL,0UL,0x8B90L,0UL,0xF2BCL,18446744073709551608UL};
static int32_t g_1648 = 0xE1A00619L;
static uint8_t g_2015 = 0UL;
static volatile struct S1 g_2191 = {-3,-0,0xFF05B2F0L,65531UL};
static volatile struct S1 ** volatile g_2210 = &g_1596;
static struct S1 g_2213 = {0,-0,0xE975E4D3L,0xDE00L};
static int32_t g_2243 = 0x41CCDE37L;
static int32_t * volatile g_2280 = (void*)0;
static uint32_t g_2309 = 0x78979873L;
static struct S0 g_2321 = {255UL,18446744073709551613UL,0xEB97L,9UL,0xDA48L,0xE34739B25885D871LL};
static const struct S1 g_2325 = {3,-13,0x0D605087L,65528UL};
static struct S1 g_2326 = {4,11,0xF27C41D8L,0xE835L};
static const struct S0 g_2347 = {0UL,0xFC64B101L,9L,18446744073709551615UL,0x2928L,18446744073709551607UL};
static int32_t ** volatile g_2678 = &g_116;
static const struct S1 g_2792 = {-0,11,0xAF3DB8F7L,0x8427L};
static int32_t g_2951 = 0x91FA2AD1L;
static volatile struct S1 g_2952 = {0,-7,0UL,0xC54DL};
static int32_t ** volatile g_2976 = &g_116;
static int32_t ** const volatile g_3092 = &g_116;
static int32_t ** volatile g_3383 = &g_116;
static volatile uint32_t g_3732 = 1UL;
static const struct S0 g_3771 = {0xE7L,0xBD7EB7F6L,0x3AA0L,18446744073709551613UL,0x7CECL,0xC87C56E30E774214LL};
static int32_t ** volatile g_3800 = &g_116;
static uint32_t g_4114 = 0xF64A08C1L;
static struct S0 g_4141 = {0x42L,18446744073709551611UL,-8L,0x11136A37L,-8L,0x82D87D8D374F33A5LL};
static int32_t ** volatile g_4148 = (void*)0;
static const volatile struct S1 g_4181 = {0,-7,1UL,1UL};
static const struct S0 *g_4217 = &g_2321;
static const struct S0 ** volatile g_4216 = &g_4217;
static volatile uint16_t g_4582 = 65532UL;
static struct S1 g_4585 = {1,-3,0x62F0FF62L,0xC4A2L};
static struct S1 func_1(void);
static int32_t func_2(const int8_t p_3, int8_t p_4, const uint16_t p_5, uint16_t p_6, int64_t p_7);
static int16_t func_10(uint32_t p_11, int32_t p_12, uint8_t p_13, int16_t p_14);
static uint16_t func_19(int32_t p_20);
static uint64_t func_26(int64_t p_27, int32_t * p_28, const int32_t * const p_29);
static int32_t * func_30(uint32_t p_31, int32_t * p_32);
static int16_t func_35(const uint32_t p_36);
static const uint8_t func_43(uint64_t p_44, uint32_t p_45, int32_t * p_46);
static uint64_t func_47(int32_t * p_48);
static int32_t * func_49(uint8_t p_50, int32_t * p_51, int8_t p_52, int32_t * p_53);
static struct S1 func_1(void)
{
    uint32_t l_15 = 1UL;
    if (func_2((0x9A57L & ((safe_rshift_func_int16_t_s_u(func_10(l_15, g_16, ((l_15 && (safe_lshift_func_uint16_t_u_u(func_19(l_15), 0))) != (l_15 <= l_15)), (0xCC8BF9E1AA18D599LL <= g_2213.f2)), l_15)) || g_793.f0)), l_15, g_2213.f0, g_2213.f1, l_15))
    {}
    else
    {
    }
    return g_4585;
}
static int32_t func_2(const int8_t p_3, int8_t p_4, const uint16_t p_5, uint16_t p_6, int64_t p_7)
{
    int32_t *l_2977 = &g_25;
    return (*l_2977);
}
static int16_t func_10(uint32_t p_11, int32_t p_12, uint8_t p_13, int16_t p_14)
{
    return p_13;
}
static uint16_t func_19(int32_t p_20)
{
    int32_t *l_24 = &g_25;
    int32_t *l_2950 = &g_2951;
    (*l_2950) &= (func_26((*l_24), func_30(p_20, (g_16 , (((p_20 , (safe_mul_func_int16_t_s_s(func_35(g_16), ((safe_sub_func_int16_t_s_s(p_20, p_20)) || (*l_24))))) >= 1L) , (*g_2678)))), l_24) == p_20);
    return (*l_24);
}
static uint64_t func_26(int64_t p_27, int32_t * p_28, const int32_t * const p_29)
{
    return g_1648;
}
static int32_t * func_30(uint32_t p_31, int32_t * p_32)
{
    return (*g_2678);
}
static int16_t func_35(const uint32_t p_36)
{
    uint16_t l_54 = 65535UL;
    int32_t *l_57 = &g_25;
    uint32_t l_2190 = 0x41CD021CL;
    if (((safe_add_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u(0x7B18L, ((((safe_mul_func_uint8_t_u_u(248UL, func_43((func_47(func_49((p_36 , ((l_54 | (((((safe_lshift_func_uint16_t_u_u((l_57 == (((l_57 != &g_25) ^ ((((*l_57) != (~(g_59 , g_59.f5))) , (*l_57)) , p_36)) , (void*)0)), g_16)) ^ p_36) && g_59.f5) , p_36) ^ p_36)) == 0xCA51C18CC907F7A7LL)), &g_25, g_16, l_57)) < 0x92B9A8F9557A7308LL), (*l_57), l_57))) , (*l_57)) , 0x67AC54D3FEF8CBB3LL) | 4UL))) == 0x178EEDC809F5503ELL) != 18446744073709551615UL), g_566)) > l_2190))
    {
    }
    else
    {
    }
    return g_2243;
}
static const uint8_t func_43(uint64_t p_44, uint32_t p_45, int32_t * p_46)
{
    return p_45;
}
static uint64_t func_47(int32_t * p_48)
{
    return g_313.f0;
}
static int32_t * func_49(uint8_t p_50, int32_t * p_51, int8_t p_52, int32_t * p_53)
{
    int32_t **l_99 = (void*)0;
    int32_t ** const *l_98 = &l_99;
        for (p_52 = 6; (p_52 != (-7)); p_52--)
        {
            uint32_t l_97 = 1UL;
            int32_t ***l_100 = &l_99;
            g_80.f0 ^= ((safe_mul_func_int8_t_s_s(p_52, g_62)) && ((safe_lshift_func_int16_t_s_s(((((l_97 , (-8L)) , l_98) == l_100) ^ (p_50 != (safe_sub_func_int64_t_s_s(((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((p_52 | (((g_107 == &g_108) < (*p_53)) , 0xFAA48CC3AA3D5FEELL)), 0)), p_50)) & 1UL), g_25)))), p_52)) || 1L));
        }
    return p_51;
}
int main (void)
{
    func_1();
    return 0;
}

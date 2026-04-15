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
static void
platform_main_end(uint32_t crc, int flag)
{
 printf ("checksum = %X\n", crc);
}
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
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
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
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
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
(safe_unary_minus_func_uint8_t_u)(uint8_t ui )
{
  return -ui;
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
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
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
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static void
crc32_gentab (void)
{
 uint32_t crc;
 int i, j;
 for (i = 0; i < 256; i++) {
  crc = i;
  crc32_tab[i] = crc;
 }
}
static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
static void
crc32_8bytes (uint64_t val)
{
 crc32_byte ((val>>8) & 0xff);
}
static void
transparent_crc (uint64_t val, char* vname, int flag)
{
 crc32_8bytes(val);
}
void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);static long __undefined;
struct S0 {
   int32_t f0;
   signed f1 : 22;
};
struct S1 {
   unsigned f0 : 16;
   signed f1 : 9;
   signed f2 : 28;
   signed f3 : 13;
   unsigned f4 : 15;
   unsigned f5 : 17;
};
static struct S1 g_2 = {34,-5,2681,8,80,143};
static int32_t g_40[3] = {0xD571E957L, 0xD571E957L, 0xD571E957L};
static uint32_t g_63 = 18446744073709551615UL;
static uint32_t g_69 = 0UL;
static int32_t g_75 = 9L;
static uint16_t g_112 = 0x21B9L;
static struct S0 g_130 = {-1L,-557};
static uint16_t g_163 = 1UL;
static uint32_t g_174 = 18446744073709551610UL;
static int32_t g_211 = 0L;
static struct S0 g_217[1] = {{0x4CA2719FL,-474}};
static int32_t g_224 = (-10L);
static int32_t g_237 = 0xA85C4E4FL;
static uint8_t g_264 = 0x9EL;
static struct S1 g_274 = {208,13,-3263,-71,45,346};
static int32_t g_310 = 6L;
static uint16_t g_415 = 0xC333L;
static uint8_t g_613 = 253UL;
static int32_t g_647 = (-1L);
static struct S1 g_656 = {57,14,-15572,48,3,68};
static struct S1 g_658 = {251,19,4643,-9,101,27};
static int32_t g_688 = 1L;
static uint8_t g_714 = 0UL;
static uint32_t g_740 = 0UL;
static int32_t g_759 = 0x96B2935EL;
static int32_t g_875 = 0xC04C2CACL;
static uint32_t g_900 = 0xBE201F5BL;
static int16_t g_959 = 0xA11EL;
static int16_t g_969 = 0xB7E4L;
static uint32_t g_971 = 0x40F4A1F2L;
static uint32_t g_1039 = 0x32AF807FL;
static uint16_t g_1056 = 65535UL;
static int32_t g_1058 = (-7L);
static uint16_t g_1106 = 0xEC2AL;
static uint8_t g_1135 = 250UL;
static int32_t g_1177[4][5][2] = {{{0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}}, {{0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}}, {{0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}}, {{0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}}};
static uint8_t g_1178 = 0x76L;
static int8_t g_1184 = 0x39L;
static int16_t g_1204 = 0x8491L;
static int32_t g_1568 = 0x092DBBDEL;
static struct S0 g_1895 = {3L,-1076};
static struct S0 g_1896 = {0x1C87E74FL,-816};
static uint8_t g_1897 = 3UL;
static int16_t g_2098 = 0x4C2BL;
static uint32_t g_2214 = 0UL;
static int32_t g_2317 = 0xC2407E48L;
static int32_t g_2569 = 1L;
static int8_t g_2667 = 0xB3L;
static uint32_t g_3242[5] = {0xBD33D456L, 0xBD33D456L, 0xBD33D456L, 0xBD33D456L, 0xBD33D456L};
static int32_t g_3324 = 0x90578E4BL;
static uint8_t g_3484 = 0xFEL;
static uint8_t g_3662 = 249UL;
static uint32_t g_3735[5][4] = {{0x463FF5CBL, 0xAE64BA3BL, 0x463FF5CBL, 0xAE64BA3BL}, {0x463FF5CBL, 0xAE64BA3BL, 0x463FF5CBL, 0xAE64BA3BL}, {0x463FF5CBL, 0xAE64BA3BL, 0x463FF5CBL, 0xAE64BA3BL}, {0x463FF5CBL, 0xAE64BA3BL, 0x463FF5CBL, 0xAE64BA3BL}, {0x463FF5CBL, 0xAE64BA3BL, 0x463FF5CBL, 0xAE64BA3BL}};
static int8_t func_1(void);
static int32_t func_3(uint16_t p_4, int32_t p_5, uint32_t p_6, uint32_t p_7);
static uint16_t func_8(int32_t p_9, uint32_t p_10);
static uint8_t func_14(uint16_t p_15, int8_t p_16, uint8_t p_17, uint32_t p_18, uint32_t p_19);
static int16_t func_25(int32_t p_26);
static uint8_t func_29(uint16_t p_30, int32_t p_31);
static uint16_t func_33(uint32_t p_34, uint32_t p_35, int8_t p_36, uint16_t p_37);
static int8_t func_1(void)
{
    int32_t l_22[10][10][2] = {{{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}};
    int32_t l_957 = 0L;
    int32_t l_958 = 7L;
    uint16_t l_2367 = 0xCA60L;
    int32_t l_2368 = (-1L);
    int32_t l_3000 = 0x9F95F825L;
    int32_t l_3110 = 0xE827D082L;
    int32_t l_3111 = (-1L);
    int32_t l_3850 = 0xEEDF68D4L;
    l_3850 = (0x3D783989L | func_3((l_3110 = func_8((l_3000 = (safe_add_func_uint16_t_u_u(((safe_unary_minus_func_int16_t_s(((func_14((g_2.f0 & ((safe_lshift_func_uint8_t_u_s(g_2.f4, l_22[8][1][0])) < (((l_2368 = (safe_mod_func_int16_t_s_s((func_25((safe_rshift_func_int8_t_s_u(g_2.f5, func_29(l_22[4][2][0], (g_959 = (g_2.f1 < (safe_unary_minus_func_uint8_t_u((l_958 = (l_957 = (func_33(l_22[8][8][0], (((g_40[1] = (safe_lshift_func_uint8_t_u_s(l_22[5][1][1], l_22[7][7][1]))) <= g_2.f3) >= 65531UL), g_2.f2, g_2.f2) & l_22[5][7][0]))))))))))) ^ l_2367), l_22[9][4][0]))) <= (-1L)) & l_2367))), g_1177[3][2][1], l_22[2][3][0], g_2.f4, l_22[9][5][1]) || 0xA1L) != g_2569))) || g_2667), g_1177[2][3][1]))), g_2569)), l_22[8][1][0], l_2367, l_3111));
}
static int32_t func_3(uint16_t p_4, int32_t p_5, uint32_t p_6, uint32_t p_7)
{
    return g_130.f0;
}
static uint16_t func_8(int32_t p_9, uint32_t p_10)
{
                                       return g_264;
}
static uint8_t func_14(uint16_t p_15, int8_t p_16, uint8_t p_17, uint32_t p_18, uint32_t p_19)
{
                                       for (; (g_310 > (-26)); --g_310)
    {
    }
        struct S1 l_2476 = {214,10,10833,-7,32,40};
        struct S0 l_2620 = {-8L,666};
                                           for (p_16 = 0; (p_16 >= 0); p_16 -= 1)
        {
            struct S0 l_2618 = {0x368FB9A0L,1042};
                    for (g_613 = 0; (g_613 <= 0); g_613 += 1)
                    {}
                for (p_17 = 0; (p_17 <= 5); p_17 += 1)
                {
                    struct S0 l_2643 = {0xC5B0517CL,25};
                    struct S0 l_2619 = {1L,826};
                        l_2620 = (l_2619 = (l_2618 = (g_217[p_16] = g_1896)));
                        l_2643 = (g_217[p_16] = l_2620);
                }
            int32_t l_2691 = (-1L);
                return l_2691;
        }
}
static int16_t func_25(int32_t p_26)
{
    uint32_t l_1786 = 18446744073709551610UL;
    int32_t l_1806 = (-5L);
    uint8_t l_1814 = 1UL;
    int32_t l_1815[2];
    int32_t l_1816 = (-3L);
    int32_t l_1817 = 0xED54E622L;
    struct S1 l_1927 = {136,-3,-16072,12,178,302};
    int i, j, k;
                    for (i = 0; i < 2; i++)
        l_1815[i] = 0xD7FE9604L;
    if ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(((((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(0x9BBBL, l_1816)), 0x1EF6L)) < (safe_rshift_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s(((l_1815[0] | (safe_sub_func_int16_t_s_s(p_26, l_1806))) != ((0xAA45L != ((safe_rshift_func_uint8_t_u_s(l_1814, (safe_mul_func_int16_t_s_s(l_1814, 0L)))) <= l_1817)) & 0xF8L)), l_1815[1])) | 0x7547L) & l_1817), 4))) == l_1815[0]), 8)) < p_26), g_688)) & l_1816) == 0x64L) == l_1786), 5)), 7)), 6)))
    {
    }
    else
    {
        int8_t l_2008[4];
        int8_t l_2041[2][7] = {{(-10L), (-10L), 0xB3L, (-10L), (-10L), 0xB3L, (-10L)}, {(-10L), (-10L), 0xB3L, (-10L), (-10L), 0xB3L, (-10L)}};
        int32_t l_2043 = 0x95BE3990L;
        int i, j;
                    for (i = 0; i < 4; i++)
            l_2008[i] = (-10L);
        if (g_174)
        {
            int32_t l_2011 = 0xDDDF1ED5L;
            int16_t l_2021 = (-5L);
            int32_t l_2054 = 9L;
                int32_t l_2055 = (-1L);
                if (((g_656.f3 == ((safe_mod_func_uint16_t_u_u(0x1652L, (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s((4294967289UL < (((((g_656.f5 = ((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(((l_1815[1] = g_656.f2) ^ ((safe_rshift_func_int16_t_s_u(0x4C94L, (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(0L)), l_2041[0][1])))) & (l_2043 = (!0x760D3DE3L)))), (l_1927.f3 = (safe_rshift_func_uint8_t_u_u(((l_1817 = (((safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((g_1178 = (l_2054 = (safe_mod_func_uint32_t_u_u(g_969, p_26)))), p_26)), l_2008[2])) == g_2.f1), l_2011)) < p_26) != g_875)) > p_26), l_2055))))), 5)) && p_26)) ^ g_688) & p_26) & l_2041[0][1]) < l_2021)), l_2055)) < 2L), 2)))) || p_26)) >= 255UL))
                {}
                else
                {
                }
        }
        else
        {
        }
    }
                                       return l_1815[1];
}
static uint8_t func_29(uint16_t p_30, int32_t p_31)
{
    return g_656.f1;
}
static uint16_t func_33(uint32_t p_34, uint32_t p_35, int8_t p_36, uint16_t p_37)
{
    int16_t l_320[7][1][7] = {{{0x4E1CL, 0xA331L, 5L, 0xA331L, 0x4E1CL, 0xA331L, 5L}}, {{0x4E1CL, 0xA331L, 5L, 0xA331L, 0x4E1CL, 0xA331L, 5L}}, {{0x4E1CL, 0xA331L, 5L, 0xA331L, 0x4E1CL, 0xA331L, 5L}}, {{0x4E1CL, 0xA331L, 5L, 0xA331L, 0x4E1CL, 0xA331L, 5L}}, {{0x4E1CL, 0xA331L, 5L, 0xA331L, 0x4E1CL, 0xA331L, 5L}}, {{0x4E1CL, 0xA331L, 5L, 0xA331L, 0x4E1CL, 0xA331L, 5L}}, {{0x4E1CL, 0xA331L, 5L, 0xA331L, 0x4E1CL, 0xA331L, 5L}}};
            return l_320[5][0][1];
}
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {}
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_217[i].f1, "g_217[i].f1", print_hash_value);
    }
    for (j = 0; j < 5; j++)
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
}

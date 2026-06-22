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
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
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
static int32_t
(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
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
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static void
crc32_gentab (void)
{
 uint32_t crc;
 const uint32_t poly = 0xEDB88320UL;
 int i, j;
 for (i = 0; i < 256; i++) {
  crc = i;
  if (crc & 1) crc = (crc >> 1) ^ poly; else {}
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
crc32_8bytes (uint32_t val)
{
 crc32_byte ((val>>24) & 0xff);
}
static void
transparent_crc (uint32_t val, char* vname, int flag)
{
 crc32_8bytes(val);
}
void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);static long __undefined;
static int32_t g_2 = 1;
static int16_t g_70 = (-10);
static uint8_t g_83 = 0xE9;
static uint32_t g_126 = 4294967295U;
static int32_t g_140 = (-3);
static uint32_t g_143 = 5U;
static uint32_t g_147[7] = {4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U, 4294967295U};
static uint8_t g_148 = 254U;
static uint8_t g_171 = 7U;
static uint32_t g_176 = 0x3249D86C;
static int16_t g_213 = 0xBBAC;
static uint32_t g_264 = 4294967287U;
static int8_t g_265 = 0;
static int32_t g_266 = (-1);
static uint32_t g_268 = 0xAFABA540;
static int32_t g_272 = 0xFC52F8FE;
static uint8_t g_274[8] = {255U, 255U, 0xD0, 255U, 255U, 0xD0, 255U, 255U};
static int16_t g_306 = (-6);
static int32_t g_308 = 6;
static int8_t g_317 = 0x6D;
static uint32_t g_350 = 4294967293U;
static int16_t g_352 = 0x1111;
static int8_t g_373 = 0;
static int32_t g_375 = 0x44E1BC11;
static int16_t g_376 = (-5);
static uint32_t g_377 = 0x86EDB65A;
static uint32_t g_477 = 0U;
static const int8_t g_553[3] = {4, 4, 4};
static uint8_t g_613 = 254U;
static int8_t g_643[7][5][7] = {{{8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}}, {{8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}}, {{8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}}, {{8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}}, {{8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}}, {{8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}}, {{8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}, {8, 0x98, (-2), 0xE0, 0x5B, 0x5A, 4}}};
static int16_t g_644 = 7;
static uint32_t g_646[9] = {7U, 0x4419A537, 7U, 0x4419A537, 7U, 0x4419A537, 7U, 0x4419A537, 7U};
static int16_t g_738 = (-8);
static int8_t g_865 = (-1);
static uint32_t g_866 = 1U;
static uint32_t g_869 = 1U;
static int32_t g_894[5][4] = {{0, 8, 0x093BC3F6, 8}, {0, 8, 0x093BC3F6, 8}, {0, 8, 0x093BC3F6, 8}, {0, 8, 0x093BC3F6, 8}, {0, 8, 0x093BC3F6, 8}};
static uint32_t g_898 = 0x72E5EF1B;
static int16_t g_911 = 0xD523;
static int8_t g_940 = (-7);
static int8_t g_942[3][3] = {{0x3B, 0x3B, 0x3B}, {0x3B, 0x3B, 0x3B}, {0x3B, 0x3B, 0x3B}};
static uint8_t g_944 = 254U;
static int32_t g_1081[1] = {1};
static int8_t g_1082 = 8;
static uint32_t g_1084 = 0x282B3569;
static uint8_t g_1130 = 0x35;
static int32_t g_1131 = 0x7BC1264D;
static uint32_t g_1132 = 4294967295U;
static int16_t g_1143[5][1][8] = {{{8, 0xAADC, 9, (-10), 9, 0xAADC, 8, 0x620B}}, {{8, 0xAADC, 9, (-10), 9, 0xAADC, 8, 0x620B}}, {{8, 0xAADC, 9, (-10), 9, 0xAADC, 8, 0x620B}}, {{8, 0xAADC, 9, (-10), 9, 0xAADC, 8, 0x620B}}, {{8, 0xAADC, 9, (-10), 9, 0xAADC, 8, 0x620B}}};
static uint32_t g_1146 = 0xD258F41F;
static int32_t g_1149 = 0xAFE9AC74;
static uint8_t g_1150 = 0x2A;
static uint16_t g_1247 = 0x8509;
static uint8_t g_1323 = 1U;
static int32_t g_1419 = (-1);
static uint32_t g_1420 = 0x3E230C74;
static uint16_t g_1442[5][6] = {{65526U, 65529U, 0x8934, 0x2732, 65529U, 0U}, {65526U, 65529U, 0x8934, 0x2732, 65529U, 0U}, {65526U, 65529U, 0x8934, 0x2732, 65529U, 0U}, {65526U, 65529U, 0x8934, 0x2732, 65529U, 0U}, {65526U, 65529U, 0x8934, 0x2732, 65529U, 0U}};
static int8_t g_1526 = 0x1D;
static uint16_t g_1857 = 4U;
static uint32_t g_1866 = 1U;
static int32_t g_1918[3] = {0x88AA529A, 0x88AA529A, 0x88AA529A};
static uint16_t g_1979 = 65530U;
static const uint8_t g_1997 = 0x5C;
static int8_t g_2203 = 5;
static uint32_t g_2593[10][8][3] = {{{0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}}, {{0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}}, {{0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}}, {{0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}}, {{0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}}, {{0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}}, {{0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}}, {{0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}}, {{0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}}, {{0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}, {0x973F44A0, 0U, 0x349B7DB6}}};
static uint32_t g_2627[1][2] = {{5U, 5U}};
static const int16_t g_2740 = (-1);
inline static int8_t func_1(void);
static uint32_t func_8(uint16_t p_9, int8_t p_10, int16_t p_11);
inline static int32_t func_12(int16_t p_13, int16_t p_14, int16_t p_15);
static int8_t func_21(int32_t p_22, uint8_t p_23, uint8_t p_24, int32_t p_25);
inline static int16_t func_31(int8_t p_32, uint8_t p_33, int32_t p_34);
static uint8_t func_39(int16_t p_40);
inline static int8_t func_1(void)
{
    uint32_t l_7 = 0x0F023498;
    int16_t l_1527 = 4;
        int32_t l_1528 = 8;
        l_1528 = (safe_mul_func_uint16_t_u_u((0xA4 && (l_1527 = ((0x5747 && (((l_7 && l_7) >= g_2) != l_7)) | func_8(l_7, g_2, l_7)))), g_1081[0]));
    if (g_869)
    {
        uint16_t l_1557 = 3U;
        int32_t l_1565[2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_1565[i] = 8;
        uint32_t l_1564 = 4294967291U;
            for (g_613 = 1; (g_613 <= 4); g_613 += 1)
            {
                int8_t l_1529[5];
                int i;
                for (i = 0; i < 5; i++)
                    {}
                for (; (g_213 <= 8); g_213 += 1)
                {
                    uint32_t l_1536[4] = {4294967289U, 0x0C505958, 4294967289U, 0x0C505958};
                    for (g_1419 = 6; (g_1419 >= 0); g_1419 -= 1)
                    {
                        g_375 = (safe_div_func_int8_t_s_s((l_1565[0] ^= (g_643[(g_613 + 1)][g_613][g_1419] = ((safe_mod_func_int32_t_s_s((((l_1536[1] = (safe_lshift_func_int16_t_s_u(g_643[g_1419][g_613][(g_613 + 2)], 13))) < g_274[g_1419]) | ((((safe_sub_func_uint8_t_u_u((1 != ((g_646[(g_1419 + 2)] = g_866) != (((((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(1, (((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(0xFF, 5)), 0)) | (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(255U, ((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(l_1557, ((safe_rshift_func_uint8_t_u_s((g_148--), (safe_mul_func_int8_t_s_s((0x6F & g_83), 1U)))) & (-10)))), 0)) & l_1564))), g_894[4][1])), 1U))) > 0xF64ADCDF))), 0x366762FB)) == g_272) && l_1529[3]) != l_1557) ^ 0x8C))), g_377)) && l_7) >= g_274[(g_1419 + 1)]) | l_7)), 4294967295U)) > l_7))), 0xCA));
                    }
                    for (g_738 = 0; (g_738 <= 0); g_738 += 1)
                    {
                        return g_894[(g_738 + 4)][(g_738 + 3)];
                    }
                }
            }
    }
    else
    {
    }
}
static uint32_t func_8(uint16_t p_9, int8_t p_10, int16_t p_11)
{
    int32_t l_16 = 1;
    int32_t l_26 = 0x939E63A5;
    int32_t l_1235 = 0x7AE02D14;
    int32_t l_1236 = 0;
    int32_t l_1525 = 9;
    g_1526 = (l_1525 = func_12(l_16, l_16, (((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(func_21(g_2, (((l_1236 = (((0x5EC41505 && (l_26 = 0x7BF19931)) ^ (safe_div_func_uint8_t_u_u(((l_16 | ((l_1235 &= (safe_sub_func_int16_t_s_s(func_31(((safe_mul_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(func_39(g_2), (p_11 | g_1081[0]))) != g_942[0][2]), l_16)) < g_940), g_266, l_16), l_16))) > g_272)) >= p_9), p_9))) ^ 0xF5)) <= 1) > g_1081[0]), l_16, l_16), p_11)), l_16)) != g_865) || g_553[1])));
    return l_1235;
}
inline static int32_t func_12(int16_t p_13, int16_t p_14, int16_t p_15)
{
    return g_865;
}
static int8_t func_21(int32_t p_22, uint8_t p_23, uint8_t p_24, int32_t p_25)
{
    int32_t l_1239 = 0x1C09BA82;
    for (; (g_375 <= 6); g_375 += 1)
    {}
    return l_1239;
}
inline static int16_t func_31(int8_t p_32, uint8_t p_33, int32_t p_34)
{
    return g_643[2][2][2];
}
static uint8_t func_39(int16_t p_40)
{
    uint32_t l_42 = 4294967292U;
    return l_42;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
        for (k = 0; k < 7; k++)
            {
                transparent_crc(g_643[i][j][k], "g_643[i][j][k]", print_hash_value);
            }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

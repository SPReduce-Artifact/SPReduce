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
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 - si2);
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
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
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
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
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
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
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
(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
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
(safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static long __undefined;
static int32_t g_2 = 1L;
static int32_t g_128[8][2] = {{(-6L), (-5L)}, {(-6L), (-5L)}, {(-6L), (-5L)}, {(-6L), (-5L)}, {(-6L), (-5L)}, {(-6L), (-5L)}, {(-6L), (-5L)}, {(-6L), (-5L)}};
static const uint8_t g_146 = 0xCFL;
static uint32_t g_191 = 1UL;
static uint32_t g_207 = 0xFDF757B9L;
static int16_t g_211[9][5][5] = {{{0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}}, {{0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}}, {{0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}}, {{0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}}, {{0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}}, {{0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}}, {{0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}}, {{0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}}, {{0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}, {0x61F7L, 0x9C58L, 4L, 0xCDC4L, 0L}}};
static uint32_t g_239 = 0x4AB6B2F1L;
static int8_t g_264 = 0x7AL;
static int32_t g_265[9][9] = {{3L, 4L, 0x79459B8DL, 0xC61E929FL, 3L, (-1L), (-5L), (-1L), 3L}, {3L, 4L, 0x79459B8DL, 0xC61E929FL, 3L, (-1L), (-5L), (-1L), 3L}, {3L, 4L, 0x79459B8DL, 0xC61E929FL, 3L, (-1L), (-5L), (-1L), 3L}, {3L, 4L, 0x79459B8DL, 0xC61E929FL, 3L, (-1L), (-5L), (-1L), 3L}, {3L, 4L, 0x79459B8DL, 0xC61E929FL, 3L, (-1L), (-5L), (-1L), 3L}, {3L, 4L, 0x79459B8DL, 0xC61E929FL, 3L, (-1L), (-5L), (-1L), 3L}, {3L, 4L, 0x79459B8DL, 0xC61E929FL, 3L, (-1L), (-5L), (-1L), 3L}, {3L, 4L, 0x79459B8DL, 0xC61E929FL, 3L, (-1L), (-5L), (-1L), 3L}, {3L, 4L, 0x79459B8DL, 0xC61E929FL, 3L, (-1L), (-5L), (-1L), 3L}};
static int32_t g_857[2] = {0xA445B0D9L, 0xA445B0D9L};
static uint32_t g_1160 = 1UL;
static int16_t g_1163 = 0x71C1L;
static int8_t g_1232 = 0xD8L;
static int32_t g_1237 = 0x7726A56AL;
static uint8_t g_1397[1] = {247UL};
static int32_t g_1600 = 0L;
static int32_t g_1873 = 6L;
static const uint16_t g_1903 = 0x1892L;
static int32_t g_1906 = 1L;
static int32_t g_2032 = 1L;
static uint32_t g_2123 = 0xFD87EE03L;
static int32_t g_2126 = (-1L);
static uint32_t g_2149 = 0x41620CDDL;
static uint32_t g_2169 = 3UL;
static int32_t func_1(void);
static int32_t func_8(uint16_t p_9, uint8_t p_10, uint16_t p_11);
static int8_t func_29(int32_t p_30, int8_t p_31, int8_t p_32);
static uint32_t func_42(uint32_t p_43, int32_t p_44);
static int16_t func_48(int8_t p_49, const uint16_t p_50, uint32_t p_51, int8_t p_52);
static uint16_t func_55(int8_t p_56, const uint16_t p_57, uint32_t p_58);
static int16_t func_75(uint32_t p_76);
static const uint8_t func_81(const uint32_t p_82);
static int16_t func_89(int8_t p_90, const int8_t p_91, const int8_t p_92, uint16_t p_93, int32_t p_94);
static uint32_t func_97(int32_t p_98, uint16_t p_99, uint16_t p_100, uint32_t p_101, uint16_t p_102);
static int32_t func_1(void)
{
    int32_t l_14 = (-1L);
    uint32_t l_2413 = 0x5A683F60L;
l_2413 = (safe_sub_func_int32_t_s_s(func_8((safe_rshift_func_uint8_t_u_u(l_14, ((safe_div_func_uint8_t_u_u(g_2, l_14)) == (safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(((1UL != (((((safe_mod_func_int32_t_s_s((g_2 != 1L), (safe_add_func_int32_t_s_s(0xBB489F7AL, ((safe_sub_func_int8_t_s_s(((0xB35BL != 0L) != 4294967295UL), l_14)) > g_2))))) | 0x877E0698L) == (-4L)) != 0x74L) == l_14)) <= l_14), l_14)) >= 0UL), l_14))))), g_2, g_2), l_14));
    g_1600 |= (safe_add_func_uint8_t_u_u(0xB3L, l_14));
    return l_2413;
}
static int32_t func_8(uint16_t p_9, uint8_t p_10, uint16_t p_11)
{
    int32_t l_45 = 0x57638FF4L;
    int32_t l_1633[6][6] = {{1L, (-6L), 0x2AB2D1D6L, 0x6F056149L, 0x2AB2D1D6L, (-6L)}, {1L, (-6L), 0x2AB2D1D6L, 0x6F056149L, 0x2AB2D1D6L, (-6L)}, {1L, (-6L), 0x2AB2D1D6L, 0x6F056149L, 0x2AB2D1D6L, (-6L)}, {1L, (-6L), 0x2AB2D1D6L, 0x6F056149L, 0x2AB2D1D6L, (-6L)}, {1L, (-6L), 0x2AB2D1D6L, 0x6F056149L, 0x2AB2D1D6L, (-6L)}, {1L, (-6L), 0x2AB2D1D6L, 0x6F056149L, 0x2AB2D1D6L, (-6L)}};
    const int16_t l_2127 = 0xFDA7L;
    uint8_t l_2128 = 0x5EL;
    uint32_t l_2168 = 4294967287UL;
    int32_t l_2211 = (-1L);
    g_2169 ^= (((((safe_lshift_func_int8_t_s_u(func_29(((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(p_10, 4)) & (safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((+((g_2 > func_42(g_2, l_45)) | (safe_rshift_func_int16_t_s_s(func_48(g_2, ((safe_add_func_uint16_t_u_u(func_55((safe_sub_func_int32_t_s_s((+(safe_add_func_int32_t_s_s(g_2, (safe_sub_func_uint32_t_u_u(((l_45 || func_42(((func_42((((safe_sub_func_int8_t_s_s(((65535UL != p_11) < p_9), (-1L))) != l_45) && 0x6E219E4EL), p_10) & g_2) < l_45), l_45)) ^ p_11), (-8L)))))), l_45)), l_45, g_2), l_45)) || p_11), g_1397[0], l_1633[1][0]), p_9)))), g_2126)), p_11))), l_45)) >= l_2127), g_2123, l_2128), 5)) && g_2126) | l_2168) == 8UL) & p_9);
    return l_2211;
}
static int8_t func_29(int32_t p_30, int8_t p_31, int8_t p_32)
{
    return g_1237;
}
static uint32_t func_42(uint32_t p_43, int32_t p_44)
{
    return g_2;
}
static int16_t func_48(int8_t p_49, const uint16_t p_50, uint32_t p_51, int8_t p_52)
{
    int32_t l_2125 = 0x5BFA9C5FL;
    return l_2125;
}
static uint16_t func_55(int8_t p_56, const uint16_t p_57, uint32_t p_58)
{
    uint32_t l_72 = 0x30A04A8FL;
    int32_t l_1285[4][3] = {{0xEDA6B4A7L, 9L, 0xEDA6B4A7L}, {0xEDA6B4A7L, 9L, 0xEDA6B4A7L}, {0xEDA6B4A7L, 9L, 0xEDA6B4A7L}, {0xEDA6B4A7L, 9L, 0xEDA6B4A7L}};
    if (g_2)
    {
        uint32_t l_87 = 0UL;
        int32_t l_88[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_88[i] = 0xFBC07B36L;
        if ((((safe_sub_func_int32_t_s_s((((safe_add_func_int8_t_s_s(p_58, l_72)) <= (safe_lshift_func_int8_t_s_s((func_75((safe_lshift_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u(((func_81(((((safe_add_func_uint16_t_u_u(g_2, (safe_sub_func_uint8_t_u_u(l_87, (l_88[1] != func_42(l_72, p_56)))))) < (func_89((((g_2 ^ l_88[2]) ^ (-5L)) >= 0x9A5DL), g_2, p_57, l_72, p_56) && g_128[7][0])) != l_88[3]) != p_58)) <= p_57) <= 0x25B967A1L), p_57)) < 0UL) != 0x6224ACA1L) ^ g_2), 7))) != l_72), l_88[1]))) != p_56), 1L)) | p_56) || g_211[7][4][0]))
        {
        }
        else
        {
        }
    }
    else
    {}
    return l_1285[0][0];
}
static int16_t func_75(uint32_t p_76)
{
    int8_t l_985 = (-1L);
    return l_985;
}
static const uint8_t func_81(const uint32_t p_82)
{
    int32_t l_302[9][9][3] = {{{0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}}, {{0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}}, {{0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}}, {{0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}}, {{0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}}, {{0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}}, {{0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}}, {{0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}}, {{0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}, {0L, 0xB21CC5C8L, 0xB6F0A05AL}}};
    return l_302[7][8][0];
}
static int16_t func_89(int8_t p_90, const int8_t p_91, const int8_t p_92, uint16_t p_93, int32_t p_94)
{
    int32_t l_103 = (-7L);
    int8_t l_267 = 0xA3L;
    if ((safe_lshift_func_int8_t_s_u(((func_42(func_97(l_103, (safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((0x34L ^ ((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(l_103, ((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(65531UL, 5)), g_2)) >= 0x88L))), ((l_103 <= (!(safe_div_func_int32_t_s_s((safe_mod_func_int16_t_s_s((((((safe_mod_func_int32_t_s_s(((((safe_add_func_uint16_t_u_u(p_90, g_2)) & l_103) >= g_2) > g_2), 4294967288UL)) ^ l_103) <= p_92) < 0UL) < 0x3F29A386L), g_2)), g_2)))) < 0xEFL))) ^ l_103)) && 4294967287UL), l_103)), p_91)), l_103, g_2, p_94), g_2) != 0xF5C60D0FL) | 4294967286UL), l_103)))
    for (; (p_94 >= 0); p_94 -= 1)
                    {
                    }
    else
    {
    }
    return l_267;
}
static uint32_t func_97(int32_t p_98, uint16_t p_99, uint16_t p_100, uint32_t p_101, uint16_t p_102)
{
    int16_t l_125[8];
    int i;
    for (i = 0; i < 8; i++)
        l_125[i] = (-6L);
    for (; (p_99 <= 7); p_99 += 1)
    for (p_101 = 0; (p_101 <= 7); p_101 += 1)
        {
                              if (( g_1600 < 0) )
for (p_101 = 0; (p_101 <= 7); p_101 += 1)
        if (l_125[p_100])
                break;
if (l_125[p_99])
                {}
        }
    return g_2;
}
int main (void)
{
    func_1();
}

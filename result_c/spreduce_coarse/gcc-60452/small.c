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
(safe_unary_minus_func_int8_t_s)(int8_t si )
{
  return
    (si==
        (-128)
                ) ?
    ((si)) :
    -si;
}
static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > (
                                   (127)
                                           -si2))) || ((si1<0) && (si2<0) && (si1 < (
                                                                                     (-128)
                                                                                             -si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~
                                         (127)
                                                 )))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (((si1 > 0) && (si2 > 0) && (si1 > (
                                       (127) 
                                                / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < (
                                                                                                (-128) 
                                                                                                         / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < (
                                                                                                                                                         (-128) 
                                                                                                                                                                  / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < (
                                                                                                                                                                                                                                 (127) 
                                                                                                                                                                                                                                          / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == 
                           (-128)
                                   ) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > (
                                                            (127) 
                                                                     >> ((unsigned int)right)))) ?
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
    (si==
        (-32767-1)
                 ) ?
    ((si)) :
    -si;
}
static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~
                                         (32767)
                                                  )))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (((si1 > 0) && (si2 > 0) && (si1 > (
                                       (32767) 
                                                 / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < (
                                                                                                 (-32767-1) 
                                                                                                           / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < (
                                                                                                                                                           (-32767-1) 
                                                                                                                                                                     / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < (
                                                                                                                                                                                                                                    (32767) 
                                                                                                                                                                                                                                              / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == 
                           (-32767-1)
                                    ) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > (
                                                                         (32767) 
                                                                                   >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > (
                                                            (32767) 
                                                                      >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > (
                                   (2147483647)
                                            -si2))) || ((si1<0) && (si2<0) && (si1 < (
                                                                                      (-2147483647-1)
                                                                                               -si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~
                                         (2147483647)
                                                  )))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == 
                           (-2147483647-1)
                                    ) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 + ui2;
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
    ((((int)right) < 0) || (((int)right) >= 32) || (left > (
                                                           (255) 
                                                                     >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > (
                                              (255) 
                                                        >> ((unsigned int)right)))) ?
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
static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 + ui2;
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
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > (
                                                           (65535) 
                                                                      >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > (
                                              (65535) 
                                                         >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
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
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{
  return -ui;
}
static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 + ui2;
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static long __undefined;
static volatile int32_t g_3 = 0x13DCE9D0L;
static uint16_t g_35 = 65531UL;
static int32_t g_139 = 5L;
static uint16_t g_141 = 0x3552L;
static uint8_t g_151 = 1UL;
static int32_t g_189 = (-1L);
static int16_t g_202 = 6L;
static uint32_t g_203 = 0xD1308C90L;
static uint32_t g_206 = 1UL;
static uint32_t g_244 = 0x933B74F7L;
static uint8_t g_252[4][7] = {{0xFDL, 0xE0L, 0xFDL, 0xE0L, 0xFDL, 0xE0L, 0xFDL}, {0xFDL, 0xE0L, 0xFDL, 0xE0L, 0xFDL, 0xE0L, 0xFDL}, {0xFDL, 0xE0L, 0xFDL, 0xE0L, 0xFDL, 0xE0L, 0xFDL}, {0xFDL, 0xE0L, 0xFDL, 0xE0L, 0xFDL, 0xE0L, 0xFDL}};
static volatile uint32_t g_316 = 0x43CCBAE7L;
static int8_t g_317 = 3L;
static uint8_t g_321[4][3][9] = {{{1UL, 0UL, 251UL, 0x5CL, 255UL, 0x3BL, 0xB6L, 0xF3L, 251UL}, {1UL, 0UL, 251UL, 0x5CL, 255UL, 0x3BL, 0xB6L, 0xF3L, 251UL}, {1UL, 0UL, 251UL, 0x5CL, 255UL, 0x3BL, 0xB6L, 0xF3L, 251UL}}, {{1UL, 0UL, 251UL, 0x5CL, 255UL, 0x3BL, 0xB6L, 0xF3L, 251UL}, {1UL, 0UL, 251UL, 0x5CL, 255UL, 0x3BL, 0xB6L, 0xF3L, 251UL}, {1UL, 0UL, 251UL, 0x5CL, 255UL, 0x3BL, 0xB6L, 0xF3L, 251UL}}, {{1UL, 0UL, 251UL, 0x5CL, 255UL, 0x3BL, 0xB6L, 0xF3L, 251UL}, {1UL, 0UL, 251UL, 0x5CL, 255UL, 0x3BL, 0xB6L, 0xF3L, 251UL}, {1UL, 0UL, 251UL, 0x5CL, 255UL, 0x3BL, 0xB6L, 0xF3L, 251UL}}, {{1UL, 0UL, 251UL, 0x5CL, 255UL, 0x3BL, 0xB6L, 0xF3L, 251UL}, {1UL, 0UL, 251UL, 0x5CL, 255UL, 0x3BL, 0xB6L, 0xF3L, 251UL}, {1UL, 0UL, 251UL, 0x5CL, 255UL, 0x3BL, 0xB6L, 0xF3L, 251UL}}};
static uint16_t g_326[8] = {65535UL, 65535UL, 65535UL, 65535UL, 65535UL, 65535UL, 65535UL, 65535UL};
static int32_t g_327[4][1] = {{1L}, {1L}, {1L}, {1L}};
static volatile int32_t g_328 = 0x1421FC0DL;
static int8_t g_332 = 0L;
static int32_t g_347 = 0x8D22E013L;
static int32_t g_348 = 0xA0EF96F8L;
static volatile uint32_t g_349 = 0UL;
static volatile int32_t g_352 = 8L;
static volatile uint8_t g_353 = 0x6BL;
static int32_t g_370[6] = {4L, 1L, 4L, 1L, 4L, 1L};
static uint8_t g_371 = 2UL;
static uint8_t g_407 = 0UL;
static int16_t g_408 = (-1L);
static uint16_t g_511 = 1UL;
static volatile int32_t g_539[9] = {(-1L), (-1L), 0x5235FB33L, (-1L), (-1L), 0x5235FB33L, (-1L), (-1L), 0x5235FB33L};
static uint8_t g_595[10] = {0x39L, 254UL, 0x39L, 254UL, 0x39L, 254UL, 0x39L, 254UL, 0x39L, 254UL};
static int32_t g_630 = 0xA10FEBB5L;
static uint8_t g_769 = 0UL;
static int32_t g_770 = 0xE0649A8FL;
static uint8_t g_973 = 4UL;
static int8_t g_1271 = 0x3CL;
static int32_t g_1297 = 0x3F0C073AL;
static int8_t g_1374 = 6L;
static volatile int8_t g_1442 = 0x18L;
static int16_t g_1985[10] = {0x3CB9L, 0xA021L, 7L, 7L, 0xA021L, 0x3CB9L, 0xA021L, 7L, 7L, 0xA021L};
static uint32_t g_2037 = 0x7883140CL;
static int32_t g_2205 = (-6L);
static int16_t g_2281[8][4] = {{0x8B20L, (-1L), 0x8B20L, (-1L)}, {0x8B20L, (-1L), 0x8B20L, (-1L)}, {0x8B20L, (-1L), 0x8B20L, (-1L)}, {0x8B20L, (-1L), 0x8B20L, (-1L)}, {0x8B20L, (-1L), 0x8B20L, (-1L)}, {0x8B20L, (-1L), 0x8B20L, (-1L)}, {0x8B20L, (-1L), 0x8B20L, (-1L)}, {0x8B20L, (-1L), 0x8B20L, (-1L)}};
static uint32_t g_2414 = 0xD114DFA1L;
static uint32_t g_2447 = 0x8E66C732L;
static volatile int8_t g_2888 = 5L;
static uint8_t g_2935[3] = {0xB4L, 0xB4L, 0xB4L};
static volatile int16_t g_2940[9][7] = {{0x081BL, 4L, (-8L), 4L, 0x081BL, 1L, 0x904CL}, {0x081BL, 4L, (-8L), 4L, 0x081BL, 1L, 0x904CL}, {0x081BL, 4L, (-8L), 4L, 0x081BL, 1L, 0x904CL}, {0x081BL, 4L, (-8L), 4L, 0x081BL, 1L, 0x904CL}, {0x081BL, 4L, (-8L), 4L, 0x081BL, 1L, 0x904CL}, {0x081BL, 4L, (-8L), 4L, 0x081BL, 1L, 0x904CL}, {0x081BL, 4L, (-8L), 4L, 0x081BL, 1L, 0x904CL}, {0x081BL, 4L, (-8L), 4L, 0x081BL, 1L, 0x904CL}, {0x081BL, 4L, (-8L), 4L, 0x081BL, 1L, 0x904CL}};
static volatile uint32_t g_3311 = 0x0B6075C1L;
static volatile int8_t g_3612[1] = {(-6L)};
static int32_t g_3804 = 0x8638B8DEL;
static uint8_t g_3890 = 0xE6L;
static int32_t g_3893 = 0xFD4A8983L;
inline static uint16_t func_1(void);
inline static uint32_t func_4(uint32_t p_5, int16_t p_6);
inline static uint16_t func_7(uint16_t p_8, int32_t p_9, int32_t p_10, uint32_t p_11);
inline static int8_t func_15(int32_t p_16, uint16_t p_17, uint8_t p_18);
static int32_t func_19(int8_t p_20, int32_t p_21, int32_t p_22);
inline static int8_t func_25(uint8_t p_26, uint16_t p_27, int32_t p_28);
static int32_t func_42(uint8_t p_43);
inline static uint8_t func_44(int32_t p_45, int32_t p_46);
inline static uint16_t func_77(int16_t p_78);
inline static uint8_t func_94(uint32_t p_95, uint32_t p_96);
inline static uint16_t func_1(void)
{
    int32_t l_14[6];
    int32_t l_41 = 0xE67E784BL;
    int32_t l_3891 = 0x39CE0225L;
    int8_t l_4549[2];
    uint16_t l_4551 = 0x6522L;
    int i, j;
    for (i = 0; i < 6; i++)
        l_14[i] = 7L;
    for (; i < 2; i++)
        {}
    l_4549[1] = (+(g_3 || func_4((((g_3893 ^= (0xA66EL == func_7((l_3891 = (safe_mul_func_uint16_t_u_u(l_14[1], (func_15(func_19((safe_sub_func_int8_t_s_s(func_25(((0x23L || (safe_add_func_int32_t_s_s(((((safe_rshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((g_3 & (g_35 == (!g_35))) == (safe_mul_func_int16_t_s_s(g_35, (safe_rshift_func_int8_t_s_s(g_35, l_14[1]))))), (-10L))) || 2L), 2)) < 0UL) < g_35) && l_14[0]), l_41))) != 0x60L), l_14[1], g_35), 0xECL)), g_630, g_630), g_630, l_41) == 1L)))), l_14[1], l_41, l_14[1]))) != 255UL) ^ g_630), l_41)));
    return l_4551;
}
inline static uint32_t func_4(uint32_t p_5, int16_t p_6)
{
    return p_5;
}
inline static uint16_t func_7(uint16_t p_8, int32_t p_9, int32_t p_10, uint32_t p_11)
{
    int32_t l_3892 = 0x90DED701L;
    return l_3892;
}
inline static int8_t func_15(int32_t p_16, uint16_t p_17, uint8_t p_18)
{
    int32_t l_3859 = 0x0C863A66L;
    return l_3859;
}
static int32_t func_19(int8_t p_20, int32_t p_21, int32_t p_22)
{
    uint32_t l_3613[4];
        for (; (g_2447 <= 2); g_2447 += 1)
            {
            }
    return l_3613[0];
}
inline static int8_t func_25(uint8_t p_26, uint16_t p_27, int32_t p_28)
{
    int8_t l_47 = 0L;
    int32_t l_3147[4];
    int32_t l_3152[9];
    int32_t l_3162 = 0xD606DA60L;
    int8_t l_3167 = 0xAAL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_3147[i] = 0xE67C8840L;
    if ((p_28 = func_42(func_44(l_47, l_47))))
    {}
    else
    {
        int8_t l_3157 = 0x6FL;
        int32_t l_3165 = 3L;
        uint8_t l_3166 = 1UL;
        g_539[3] = (0x1DA2L == (safe_add_func_uint32_t_u_u((l_3152[3] = ((((safe_unary_minus_func_uint32_t_u(((g_2447 | ((g_35 &= l_3157) >= ((safe_rshift_func_int8_t_s_s((l_3157 >= (l_3165 |= (safe_mod_func_uint8_t_u_u(((-3L) != ((l_3147[1] > l_3162) && (g_2935[1] &= (p_26 ^ (p_27 = (((safe_mul_func_int16_t_s_s((((((0UL > l_3162) ^ g_1985[1]) <= p_28) | g_321[0][1][8]) > l_3162), 0L)) <= 6L) < 0x86D50268L)))))), p_26)))), 2)) >= 65535UL))) == l_3157))) < p_28) == l_3166) >= g_252[2][6])), l_3167)));
        for (p_28 = 5; (p_28 >= 1); p_28 -= 1)
        {
            uint16_t l_3176 = 65527UL;
            int32_t l_3201 = 0L;
            for (; (p_26 <= 5); p_26 += 1)
            if (((((g_2281[2][1] = g_370[p_26]) >= (p_26 != p_27)) != ((g_317 != g_2447) && (safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((l_3166 == (safe_mul_func_uint16_t_u_u((((safe_add_func_int8_t_s_s(l_3176, (safe_mul_func_int16_t_s_s(0x7979L, (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(l_47, l_3147[3])), l_3165)))))) && l_3152[3]) != p_28), p_27))) ^ p_27), 0xE468L)), p_27)))) != g_370[p_26]))
                {}
                else
                l_3147[1] = (safe_rshift_func_uint8_t_u_s((g_370[p_26] < ((l_3201 ^= (0L | (l_3152[3] = p_28))) >= (~(g_206--)))), 4));
        }
    }
    return l_3167;
}
static int32_t func_42(uint8_t p_43)
{
    int32_t l_68[4][8] = {{0xC6E20B39L, 0xF74462D1L, 0xC6E20B39L, 0xF74462D1L, 0xC6E20B39L, 0xF74462D1L, 0xC6E20B39L, 0xF74462D1L}, {0xC6E20B39L, 0xF74462D1L, 0xC6E20B39L, 0xF74462D1L, 0xC6E20B39L, 0xF74462D1L, 0xC6E20B39L, 0xF74462D1L}, {0xC6E20B39L, 0xF74462D1L, 0xC6E20B39L, 0xF74462D1L, 0xC6E20B39L, 0xF74462D1L, 0xC6E20B39L, 0xF74462D1L}, {0xC6E20B39L, 0xF74462D1L, 0xC6E20B39L, 0xF74462D1L, 0xC6E20B39L, 0xF74462D1L, 0xC6E20B39L, 0xF74462D1L}};
    int32_t l_79[9][7][4] = {{{5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}}, {{5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}}, {{5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}}, {{5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}}, {{5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}}, {{5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}}, {{5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}}, {{5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}}, {{5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}, {5L, 0L, 0xAD406D4EL, 0x51D4F00DL}}};
    int32_t l_2933 = 0x482321A5L;
    int32_t l_2934 = 0x6778DE9BL;
    int32_t l_2936 = 0xC2EFA380L;
    if ((safe_add_func_int8_t_s_s(((func_44((safe_rshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s(g_35, (((safe_lshift_func_uint8_t_u_s((5UL <= func_44((safe_add_func_int32_t_s_s(p_43, (safe_sub_func_int16_t_s_s((l_68[3][7] = p_43), ((safe_mul_func_uint8_t_u_u((func_44((safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((func_77(l_79[4][3][3]) >= ((0xECD14699L && (0x61B6C80DL == (~(safe_mod_func_uint8_t_u_u((g_2935[0] = ((l_2934 |= (safe_lshift_func_uint8_t_u_u(((l_2933 &= (safe_unary_minus_func_int16_t_s(0x82C1L))) < g_630), g_35))) <= p_43)), 0x99L))))) ^ 0xFACBF2A3L)), l_79[4][3][3])), l_79[6][5][3])), 1UL)), l_2936) && g_151), l_79[3][6][1])) <= 1L))))), g_35)), p_43)) || l_2934) > 1UL))) == l_79[7][6][0]), g_630)), g_35) | 0x3422L) && (-9L)), l_79[4][3][3])))
    {
    }
    else
    {
    }
    g_539[6] = l_68[3][7];
    return g_326[2];
}
inline static uint8_t func_44(int32_t p_45, int32_t p_46)
{
    return g_35;
}
inline static uint16_t func_77(int16_t p_78)
{
    int32_t l_83 = 0x368EC64CL;
        int32_t l_97 = 1L;
        int32_t l_1274 = 0L;
        if ((((safe_rshift_func_int8_t_s_u(func_44((((0xBE7BL & (safe_add_func_uint8_t_u_u(p_78, (((safe_mod_func_int32_t_s_s(l_83, 4294967292UL)) <= 9UL) < (safe_mod_func_uint8_t_u_u((g_1271 &= func_94(g_3, l_97)), (safe_lshift_func_int16_t_s_u((l_1274 ^= 0xB1A0L), g_595[7])))))))) | 0L) != p_78), p_78), 7)) < p_78) && 0x8AL))
            {
            }
            else
            {
            }
    return g_327[1][0];
}
inline static uint8_t func_94(uint32_t p_95, uint32_t p_96)
{
    uint8_t l_100[5][8][6] = {{{255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}}, {{255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}}, {{255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}}, {{255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}}, {{255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}, {255UL, 0xD6L, 254UL, 246UL, 0xF5L, 0UL}}};
    uint16_t l_113[9][6] = {{0xBF6CL, 1UL, 0xBF6CL, 65531UL, 65529UL, 0x1128L}, {0xBF6CL, 1UL, 0xBF6CL, 65531UL, 65529UL, 0x1128L}, {0xBF6CL, 1UL, 0xBF6CL, 65531UL, 65529UL, 0x1128L}, {0xBF6CL, 1UL, 0xBF6CL, 65531UL, 65529UL, 0x1128L}, {0xBF6CL, 1UL, 0xBF6CL, 65531UL, 65529UL, 0x1128L}, {0xBF6CL, 1UL, 0xBF6CL, 65531UL, 65529UL, 0x1128L}, {0xBF6CL, 1UL, 0xBF6CL, 65531UL, 65529UL, 0x1128L}, {0xBF6CL, 1UL, 0xBF6CL, 65531UL, 65529UL, 0x1128L}, {0xBF6CL, 1UL, 0xBF6CL, 65531UL, 65529UL, 0x1128L}};
    uint8_t l_118 = 0x29L;
    int32_t l_119[2];
    int32_t l_120 = 1L;
    int32_t l_121 = 0x393CC16AL;
if ((safe_mul_func_uint8_t_u_u((((((l_100[3][2][0] || (((0x0493L ^ l_100[4][4][5]) & (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((0xA3D26D73L | ((safe_mod_func_int32_t_s_s((l_121 |= (0x9B1DFB68L != (((safe_rshift_func_uint16_t_u_s((l_113[0][4] < ((-1L) == ((((l_119[0] = (safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(0x8FB3CF24L, ((l_118 ^ g_35) || p_95))), 0xDEA1L))) <= l_113[0][4]) == g_3) ^ l_120))), l_100[4][2][4])) < g_35) < 0x4236L))), g_35)) < g_35)) != p_95), p_96)) <= 0x74L), 0xE7L)), g_35))) || g_35)) != 0x7174L) || (-1L)) < l_120) == l_118), p_96)))
    {
    }
    else
    {
        int32_t l_840 = 0xDFD5D61BL;
        int32_t l_843 = 0L;
        int32_t l_844 = 9L;
        int16_t l_873 = 0x0552L;
        int32_t l_874[2][8] = {{0xEFF56801L, 0xEFF56801L, 0x2F971169L, 0xEFF56801L, 0xEFF56801L, 0x2F971169L, 0xEFF56801L, 0xEFF56801L}, {0xEFF56801L, 0xEFF56801L, 0x2F971169L, 0xEFF56801L, 0xEFF56801L, 0x2F971169L, 0xEFF56801L, 0xEFF56801L}};
        if (g_407)
        {
        }
        else
        {
            uint32_t l_857 = 0x25516012L;
            int32_t l_872 = 0x996E9FEFL;
            int32_t l_875[2];
            if ((safe_add_func_uint8_t_u_u(g_353, (l_872 = ((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s(l_857, (g_189 >= (safe_sub_func_int16_t_s_s(((((g_206 == (safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((((((g_408 = 0xD914L) < (safe_mod_func_int16_t_s_s(((((safe_mod_func_int8_t_s_s(p_96, (safe_mod_func_int16_t_s_s(0xB240L, g_332)))) || ((((((((++g_244) <= g_141) | g_189) && l_872) || l_873) ^ g_151) == l_843) || 1L)) != p_95) ^ g_326[6]), 7UL))) ^ 0x00L) && p_95) ^ l_840), g_407)) != 0L), l_119[1]))) || 4294967294UL) || p_96) || p_95), l_874[1][6]))))), l_875[0])), 7UL)) | g_347)))))
            {
                uint32_t l_901[6] = {4294967288UL, 0x721D0B79L, 4294967288UL, 0x721D0B79L, 4294967288UL, 0x721D0B79L};
                        g_352 = ((p_95 | l_844) & (((((g_630 && (++g_326[2])) >= ((safe_mul_func_int16_t_s_s((((-10L) && (safe_add_func_uint32_t_u_u((g_244--), (g_595[5] || 0x520FL)))) == (-1L)), (l_901[2] == ((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_96, g_539[5])), 1L)) & 65535UL)))) || g_321[1][0][0])) > l_840) < g_252[2][0]) | 0x7AL));
            }
            else
            g_539[4] ^= 2L;
        }
    }
    return p_96;
}
int main (int argc, char* argv[])
{
    func_1();
    return 0;
}

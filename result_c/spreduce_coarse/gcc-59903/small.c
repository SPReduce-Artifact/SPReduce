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
    -si;
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
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
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
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
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
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
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
static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{
  return -ui;
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
struct S0 {
   int8_t f0;
   int8_t f1;
   uint32_t f2;
   int32_t f3;
   uint16_t f4;
};
static int32_t g_3 = 0x9BA095A9L;
static int32_t g_4[10][4][2] = {{{0xD4A0D461L,0xFC3A065CL},{1L,0xD4A0D461L},{0x8DC5336DL,0x8DC5336DL},{0x8DC5336DL,0xD4A0D461L}},{{1L,0xFC3A065CL},{0xD4A0D461L,0xFC3A065CL},{1L,0xD4A0D461L},{0x8DC5336DL,0x8DC5336DL}},{{0x8DC5336DL,0xD4A0D461L},{1L,0xFC3A065CL},{0xD4A0D461L,0xFC3A065CL},{1L,0xD4A0D461L}},{{0x8DC5336DL,0x8DC5336DL},{0x8DC5336DL,0xD4A0D461L},{1L,0xFC3A065CL},{0xD4A0D461L,0xFC3A065CL}},{{1L,0xD4A0D461L},{0x8DC5336DL,0x8DC5336DL},{0x8DC5336DL,0xD4A0D461L},{1L,0xFC3A065CL}},{{0xD4A0D461L,0xFC3A065CL},{1L,0xD4A0D461L},{0x8DC5336DL,0x8DC5336DL},{0xD4A0D461L,1L}},{{0xC8F0D071L,0x8DC5336DL},{1L,0x8DC5336DL},{0xC8F0D071L,1L},{0xD4A0D461L,0xD4A0D461L}},{{0xD4A0D461L,1L},{0xC8F0D071L,0x8DC5336DL},{1L,0x8DC5336DL},{0xC8F0D071L,1L}},{{0xD4A0D461L,0xD4A0D461L},{0xD4A0D461L,1L},{0xC8F0D071L,0x8DC5336DL},{1L,0x8DC5336DL}},{{0xC8F0D071L,1L},{0xD4A0D461L,0xD4A0D461L},{0xD4A0D461L,1L},{0xC8F0D071L,0x8DC5336DL}}};
static int32_t g_5[3] = {0xB2C41AC3L,0xB2C41AC3L,0xB2C41AC3L};
static uint8_t g_22 = 0x4CL;
static uint32_t g_23[3] = {0x69C1477AL,0x69C1477AL,0x69C1477AL};
static int8_t g_26 = 4L;
static uint16_t g_27 = 65532UL;
static uint16_t g_32 = 0xB7A2L;
static uint8_t g_55[9][8] = {{252UL,255UL,0x79L,3UL,0x17L,3UL,0UL,255UL},{249UL,0UL,0xE3L,3UL,251UL,255UL,0UL,251UL},{0xD5L,251UL,247UL,0xD5L,249UL,255UL,0x5BL,252UL},{0UL,0xD5L,255UL,0UL,255UL,0xD5L,0UL,0x17L},{0x1CL,255UL,255UL,0x8AL,0x49L,4UL,0x8AL,0UL},{247UL,251UL,0xD5L,0x7EL,0x49L,0x5BL,0UL,0UL},{0x1CL,0x79L,0x7EL,0UL,255UL,3UL,251UL,0x5BL},{0UL,0x49L,255UL,249UL,249UL,255UL,0x49L,0UL},{0xD5L,3UL,0UL,0x17L,251UL,255UL,247UL,0x8AL}};
static int32_t g_57 = 0xEB039226L;
static int32_t g_58 = 4L;
static uint32_t g_59[9] = {0x18880ABBL,0x18880ABBL,0x18880ABBL,0x18880ABBL,0x18880ABBL,0x18880ABBL,0x18880ABBL,0x18880ABBL,0x18880ABBL};
static uint32_t g_69 = 0x797CFCBFL;
static int32_t g_80 = 0xD47B9DA0L;
static uint32_t g_81[4] = {0xFACDC9FFL,0xFACDC9FFL,0xFACDC9FFL,0xFACDC9FFL};
static struct S0 g_152[2] = {{0x6EL,1L,0UL,0x4AB730D5L,0UL},{0x6EL,1L,0UL,0x4AB730D5L,0UL}};
static uint16_t g_203[3] = {0x582DL,0x582DL,0x582DL};
static int32_t g_214 = (-2L);
static uint32_t g_231 = 4294967286UL;
static int16_t g_234 = 0L;
static int16_t g_277 = 1L;
static struct S0 g_283 = {0xB0L,-1L,0xF2B8033DL,0x5451DF1BL,0x022DL};
static uint32_t g_407 = 0x57A78FE8L;
static int32_t g_410 = 0x38F403BAL;
static int32_t g_465 = 0x5F3E33FAL;
static uint32_t g_466 = 0UL;
static int16_t g_551 = (-1L);
static int32_t g_616[5] = {0x79C30704L,0x79C30704L,0x79C30704L,0x79C30704L,0x79C30704L};
static int32_t g_621[2][9][5] = {{{(-10L),1L,0xD5EF2F06L,1L,(-10L)},{1L,1L,8L,(-10L),8L},{8L,8L,0xD5EF2F06L,(-10L),0x1E4228D9L},{1L,1L,1L,1L,8L},{1L,(-10L),(-4L),(-4L),(-10L)},{8L,1L,(-4L),0xD5EF2F06L,0xD5EF2F06L},{1L,8L,1L,(-4L),0xD5EF2F06L},{(-10L),1L,0xD5EF2F06L,1L,(-10L)},{1L,1L,8L,(-10L),8L}},{{8L,8L,0xD5EF2F06L,(-10L),0x1E4228D9L},{1L,1L,1L,1L,8L},{1L,(-4L),0xD5EF2F06L,0xD5EF2F06L,(-4L)},{0x1E4228D9L,(-10L),0xD5EF2F06L,8L,8L},{(-10L),0x1E4228D9L,(-10L),0xD5EF2F06L,8L},{(-4L),1L,8L,1L,(-4L)},{(-10L),1L,0x1E4228D9L,(-4L),0x1E4228D9L},{0x1E4228D9L,0x1E4228D9L,8L,(-4L),1L},{1L,(-10L),(-10L),1L,0x1E4228D9L}}};
static int32_t g_973 = 0x44345857L;
static uint32_t g_976 = 4294967294UL;
static int16_t g_1185 = (-1L);
static int32_t g_1356 = 0x0FA767BCL;
static uint16_t g_1477 = 0xBAB5L;
static uint32_t g_1570 = 0x6920269FL;
static uint32_t g_1707 = 5UL;
static uint8_t g_1917 = 0x44L;
static int32_t g_2181 = 9L;
static uint32_t g_2432 = 4294967293UL;
static struct S0 func_1(void);
static uint16_t func_13(int8_t p_14, int32_t p_15, uint32_t p_16);
static int32_t func_17(int32_t p_18, uint16_t p_19, uint8_t p_20, uint32_t p_21);
static uint8_t func_72(struct S0 p_73, uint32_t p_74, int32_t p_75);
static struct S0 func_76(uint32_t p_77, int16_t p_78, uint8_t p_79);
static uint8_t func_99(uint32_t p_100);
static uint32_t func_105(uint16_t p_106, int16_t p_107);
static int16_t func_121(uint16_t p_122, int32_t p_123);
static uint16_t func_124(struct S0 p_125, struct S0 p_126, struct S0 p_127, int32_t p_128);
static struct S0 func_129(int32_t p_130, struct S0 p_131, uint32_t p_132, int16_t p_133);
static struct S0 func_1(void)
{
    int16_t l_2[10][2] = {{4L,0x3367L},{4L,0x5ED9L},{1L,1L},{0x5ED9L,4L},{0x3367L,4L},{0x5ED9L,1L},{1L,0x5ED9L},{4L,0x3367L},{4L,0x5ED9L},{1L,1L}};
    int32_t l_34 = 0x08FBDEDBL;
    struct S0 l_2815 = {0L,1L,4294967295UL,0L,0x2969L};
        int32_t l_33 = 0xB5FB49A5L;
        for (; (g_4[7][0][1] >= 0); g_4[7][0][1] -= 1)
        {
            int32_t l_63 = 0x6F270ADFL;
            for (; (g_5[2] >= 0); g_5[2] -= 1)
            {
                int32_t l_67 = 0L;
                    int32_t l_68 = (-10L);
                    int32_t l_94 = 0xE1143771L;
                    int8_t l_95 = 0x9AL;
                        l_34 = (func_72(func_76(l_2[(g_5[2] + 6)][g_5[2]], (g_81[2] |= (g_80 ^= g_32)), ((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(g_59[7], 5)), (safe_sub_func_int8_t_s_s(l_2[(g_5[2] + 6)][g_5[2]], (safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(func_17(g_3, g_26, g_22, (!((func_13((l_33 = l_68), (l_94 = (g_23[2] | l_63)), g_58) < l_67) && l_2[3][0]))), 0xFFL)) == g_5[2]), l_95)))))), g_3)) & l_2[(g_5[2] + 1)][g_4[7][0][1]])), g_55[0][3], g_4[7][0][1]) <= 0xB7L);
            }
        }
    return l_2815;
}
static uint16_t func_13(int8_t p_14, int32_t p_15, uint32_t p_16)
{
    int8_t l_31 = 1L;
    return l_31;
}
static int32_t func_17(int32_t p_18, uint16_t p_19, uint8_t p_20, uint32_t p_21)
{
    return g_3;
}
static uint8_t func_72(struct S0 p_73, uint32_t p_74, int32_t p_75)
{
    return p_74;
}
static struct S0 func_76(uint32_t p_77, int16_t p_78, uint8_t p_79)
{
int32_t l_98 = (-10L);
    struct S0 l_2436 = {6L,-2L,1UL,0x18035F9BL,65528UL};
    g_152[0].f3 = (l_98 = (safe_sub_func_uint32_t_u_u((func_17(l_98, g_55[3][5], func_99((p_78 >= (safe_rshift_func_uint8_t_u_s(((safe_mod_func_int16_t_s_s(func_17(p_79, p_78, (func_17(g_27, ((func_13(g_23[2], l_98, l_98) >= 4L) >= p_79), g_5[0], g_23[2]) ^ l_98), p_78), l_98)) < p_78), 1)))), p_77) >= 1L), g_621[0][6][4])));
    return l_2436;
}
static uint8_t func_99(uint32_t p_100)
{
    uint8_t l_110[7][7] = {{0xFFL,0x31L,0xFFL,0x31L,0xFFL,0x31L,0xFFL},{0x78L,0x78L,0x27L,0x27L,0x78L,0x78L,0x27L},{255UL,0x31L,255UL,0x31L,255UL,0x31L,255UL},{0x78L,0x27L,0x27L,0x78L,0x78L,0x27L,0x27L},{0xFFL,0x31L,0xFFL,0x31L,0xFFL,0x31L,0xFFL},{0x78L,0x78L,0x27L,0x27L,0x78L,0x78L,0x27L},{255UL,0x31L,255UL,0x31L,255UL,0x31L,255UL}};
    int32_t l_142 = (-1L);
    int32_t l_143 = 0xEB29FA79L;
    int32_t l_144[2][9] = {{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)},{0L,0L,0L,0L,0L,0L,0L,0L,0L}};
    int32_t l_145[6];
    int32_t l_146 = 0x586F400AL;
    struct S0 l_147 = {-5L,0L,0xB65799C7L,0x5F5692BDL,65528UL};
    uint32_t l_148 = 4294967295UL;
    if (((~func_105((safe_rshift_func_uint8_t_u_s(l_110[5][6], (4294967295UL & (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(1UL, (p_100 ^ l_110[6][2]))), 0))))), (((safe_div_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_s(l_110[5][6], 2)) | p_100) < (safe_lshift_func_int16_t_s_s((l_144[0][0] = func_121((g_203[2] = func_124(func_129(((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((l_146 = (l_145[2] = (l_144[0][0] = (0x2B768FFDL <= (safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((((l_143 = (((l_142 = p_100) && g_80) || 0xFE75L)) < p_100) == g_80), 0xA4L)), 7)))))) == g_81[2]) & 0x7E50L), p_100)), p_100)) && p_100), l_147, l_148, l_110[0][0]), g_283, l_147, p_100)), l_148)), l_110[5][6]))) != l_147.f4), g_3)) | g_55[1][5]) | g_4[7][0][1]))) == p_100))
    {
    }
    else
    {
    }
    return p_100;
}
static uint32_t func_105(uint16_t p_106, int16_t p_107)
{
    return g_23[2];
}
static int16_t func_121(uint16_t p_122, int32_t p_123)
{
    return g_1707;
}
static uint16_t func_124(struct S0 p_125, struct S0 p_126, struct S0 p_127, int32_t p_128)
{
    return g_57;
}
static struct S0 func_129(int32_t p_130, struct S0 p_131, uint32_t p_132, int16_t p_133)
{
    struct S0 l_151 = {0x15L,-5L,0UL,1L,0xBB46L};
    int32_t l_195 = 0x2C72D125L;
    for (l_195 = 0; (l_195 <= 3); l_195 += 1)
    for (p_132 = 0; (p_132 <= 39); ++p_132)
    {
        int32_t l_164 = (-2L);
        for (p_131.f0 = 0; (p_131.f0 <= 2); p_131.f0 += 1)
        {
            int8_t l_163[9][6] = {{0x75L,0x92L,0x92L,0x75L,0xC2L,(-7L)},{(-7L),0x75L,6L,0x75L,(-7L),1L},{0x75L,(-7L),1L,1L,(-7L),0x75L},{0x92L,0x75L,0xC2L,(-7L),0xC2L,0x75L},{0xC2L,0x92L,1L,6L,6L,1L},{0xC2L,0xC2L,6L,(-7L),0x46L,(-7L)},{0x92L,0xC2L,0x92L,1L,6L,6L},{0x75L,0x92L,0x92L,0x75L,0xC2L,(-7L)},{(-7L),0x75L,6L,0x75L,(-7L),1L}};
            struct S0 l_166 = {0L,0L,4UL,0L,0x9C02L};
            g_152[0] = l_151;
            l_151.f3 = g_81[p_131.f0];
            if (((g_23[p_131.f0] < (safe_lshift_func_int16_t_s_u((((l_151.f0 ^ (safe_mod_func_int16_t_s_s(0x58C3L, (safe_sub_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u(p_132, (--g_22))) <= 4UL) && (p_131.f4 = 0x517BL)), 8UL))))) & (l_164 = l_163[1][3])) | p_133), 12))) ^ l_151.f1))
            if ((!g_152[0].f0))
                {}
                else
                {
                    uint32_t l_177 = 0xAEAE63DAL;
                    uint16_t l_194 = 65535UL;
                    g_80 = (+((safe_mul_func_int16_t_s_s(((((l_164 ^ ((g_58 | ((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((l_151.f3 ^= g_4[7][0][1]), ((l_177 != (g_57 == (((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint32_t_u_u(g_4[7][0][1], (safe_unary_minus_func_int8_t_s(((l_195 = (safe_mul_func_int16_t_s_s((((((safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((g_152[0].f3 |= (safe_add_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((((p_133 = 0x557EL) < 0L) & 0x264C02D8L) ^ 1L), l_194)), g_32))), 0xBCA6F5D4L)), 2)) && 0xC7L) && 0xC0AAL) && p_131.f1) | g_23[1]), g_152[0].f4))) != g_23[2]))))))), g_5[2])) || 255UL) | 1UL))) > g_152[0].f0))) && 0L), l_151.f0)), g_57)) == 0xF4L)) < 0x12L)) ^ g_57) <= l_166.f2) == (-10L)), (-1L))) < p_131.f1));
                }
            else
            {
            }
        }
    }
    return p_131;
}
int main (int argc, char* argv[])
{
    func_1();
}

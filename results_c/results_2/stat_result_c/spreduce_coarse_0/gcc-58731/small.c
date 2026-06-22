#include <string.h>
#include <float.h>
#include <math.h>
 #include <limits.h>
 #include <stdint.h>
#include <assert.h>
#include <stdio.h>
static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~INT8_MAX)))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > (INT32_MAX-si2))) || ((si1<0) && (si2<0) && (si1 < (INT32_MIN-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > (UINT16_MAX >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static long __undefined;
union U0 {
   uint32_t f0;
   volatile int32_t f1;
   int32_t f2;
};
static volatile int32_t g_2 = 0L;
static volatile int32_t g_3 = 0x32A27689L;
static volatile int32_t g_4 = 0L;
static int32_t g_5 = 1L;
static int32_t g_8 = 0xD2D672A8L;
static int32_t g_11[8] = {(-1L), (-1L), 0x23FE5E81L, (-1L), (-1L), 0x23FE5E81L, (-1L), (-1L)};
static int32_t g_80 = 0xA90D2634L;
static int16_t g_100[1][2] = {{0x7242L, 0x7242L}};
static uint32_t g_112[5] = {0x2CBA3753L, 0UL, 0x2CBA3753L, 0UL, 0x2CBA3753L};
static int32_t g_114 = 0x5DEB7CA3L;
static uint32_t g_145 = 4294967288UL;
static int32_t g_155 = 0x1030EC2AL;
static uint32_t g_158 = 0x603FA023L;
static int32_t g_172 = 0x1836AFDFL;
static uint32_t g_176[9] = {0x9D596B0AL, 0x9D596B0AL, 4294967295UL, 0x9D596B0AL, 0x9D596B0AL, 4294967295UL, 0x9D596B0AL, 0x9D596B0AL, 4294967295UL};
static int32_t g_186[4][8][5] = {{{0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}}, {{0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}}, {{0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}}, {{0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}, {0x1A4B0108L, 0x4DB03F72L, 0L, 7L, 1L}}};
static int32_t g_187 = 0x53D48F03L;
static uint8_t g_189 = 255UL;
static int32_t * volatile g_200 = &g_8;
static int32_t * volatile *g_199[3] = {&g_200, &g_200, &g_200};
static int32_t g_322 = 1L;
static uint32_t g_339 = 0x34ACBDE0L;
static int32_t g_400 = 0x04868CA1L;
static volatile int32_t g_486 = 0L;
static volatile int32_t *g_485 = &g_486;
static uint16_t g_518 = 0x4D0CL;
static union U0 g_538 = {0UL};
static union U0 *g_596 = (void*)0;
static union U0 g_652[3] = {{4294967293UL}, {4294967293UL}, {4294967293UL}};
static int32_t *g_712 = (void*)0;
static int8_t g_725 = (-7L);
static union U0 g_742 = {3UL};
static union U0 g_744 = {1UL};
static uint32_t g_771 = 1UL;
static uint16_t g_778[7] = {1UL, 3UL, 1UL, 3UL, 1UL, 3UL, 1UL};
static volatile union U0 g_1022 = {0xA61621B3L};
static volatile union U0 * volatile g_1021 = &g_1022;
static volatile union U0 * volatile * volatile g_1020 = &g_1021;
static volatile union U0 * volatile * volatile *g_1019 = &g_1020;
static int32_t g_1035 = 0x752011B8L;
static int32_t g_1151 = 0x870D206EL;
static union U0 g_1214 = {0x42619519L};
static union U0 g_1224 = {0xD9111926L};
static int32_t g_1271 = 0xF4919CE8L;
static int32_t g_1288[2] = {0x149C700FL, 0x149C700FL};
static int8_t g_1290 = 1L;
static int32_t ** volatile g_1328[8] = {&g_712, &g_712, &g_712, &g_712, &g_712, &g_712, &g_712, &g_712};
static int32_t ** volatile g_1329 = (void*)0;
static uint8_t g_1340[3] = {0xBFL, 0xBFL, 0xBFL};
static union U0 g_1371 = {9UL};
static volatile union U0 g_1372 = {0xA5629FABL};
static union U0 g_1399 = {4294967295UL};
static union U0 * volatile *g_1405 = &g_596;
static int32_t ** volatile g_1418 = &g_712;
static union U0 g_1444[7][9] = {{{4294967295UL}, {0x0A89104AL}, {9UL}, {1UL}, {0x815AAEBDL}, {0x883591C3L}, {0x5D9FD935L}, {4294967295UL}, {9UL}}, {{4294967295UL}, {0x0A89104AL}, {9UL}, {1UL}, {0x815AAEBDL}, {0x883591C3L}, {0x5D9FD935L}, {4294967295UL}, {9UL}}, {{4294967295UL}, {0x0A89104AL}, {9UL}, {1UL}, {0x815AAEBDL}, {0x883591C3L}, {0x5D9FD935L}, {4294967295UL}, {9UL}}, {{4294967295UL}, {0x0A89104AL}, {9UL}, {1UL}, {0x815AAEBDL}, {0x883591C3L}, {0x5D9FD935L}, {4294967295UL}, {9UL}}, {{4294967295UL}, {0x0A89104AL}, {9UL}, {1UL}, {0x815AAEBDL}, {0x883591C3L}, {0x5D9FD935L}, {4294967295UL}, {9UL}}, {{4294967295UL}, {0x0A89104AL}, {9UL}, {1UL}, {0x815AAEBDL}, {0x883591C3L}, {0x5D9FD935L}, {4294967295UL}, {9UL}}, {{4294967295UL}, {0x0A89104AL}, {9UL}, {1UL}, {0x815AAEBDL}, {0x883591C3L}, {0x5D9FD935L}, {4294967295UL}, {9UL}}};
static union U0 *** volatile g_1524 = (void*)0;
static uint16_t g_1566 = 0xB63CL;
static volatile uint32_t g_1591 = 0x994D66EFL;
static volatile uint32_t g_1622 = 1UL;
static union U0 g_1628 = {4294967291UL};
static volatile union U0 g_1646[7] = {{0x53D47EBDL}, {0x53D47EBDL}, {0xE4A53E8AL}, {0x53D47EBDL}, {0x53D47EBDL}, {0xE4A53E8AL}, {0x53D47EBDL}};
static union U0 g_1653 = {0x3A35E06CL};
static int32_t ** volatile g_1691 = (void*)0;
static int32_t ** volatile g_1693 = &g_712;
static uint32_t g_1703[4][1][6] = {{{3UL, 0xF7DC92B2L, 0x2E98D357L, 8UL, 8UL, 0x2E98D357L}}, {{3UL, 0xF7DC92B2L, 0x2E98D357L, 8UL, 8UL, 0x2E98D357L}}, {{3UL, 0xF7DC92B2L, 0x2E98D357L, 8UL, 8UL, 0x2E98D357L}}, {{3UL, 0xF7DC92B2L, 0x2E98D357L, 8UL, 8UL, 0x2E98D357L}}};
static uint32_t g_1731 = 1UL;
static int32_t ** volatile g_1732 = (void*)0;
static int32_t ** volatile g_1733 = &g_712;
static volatile union U0 g_1767 = {2UL};
static union U0 g_1806 = {2UL};
static volatile union U0 g_1814[4][10][1] = {{{{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}}, {{{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}}, {{{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}}, {{{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}, {{0x474130F5L}}}};
static volatile uint8_t g_1864[7][8][4] = {{{0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}}, {{0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}}, {{0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}}, {{0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}}, {{0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}}, {{0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}}, {{0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}, {0xB7L, 0x3FL, 0x7EL, 0x69L}}};
static uint32_t g_1882 = 0xEB5BE354L;
static uint16_t func_1(void);
static int8_t func_27(uint16_t p_28, int32_t p_29, int32_t p_30, uint32_t p_31);
static int32_t func_91(int32_t * p_92, int8_t p_93, int32_t * p_94);
static uint16_t func_1(void)
{
    uint16_t l_25 = 0x6B34L;
    int32_t l_2002 = 0xF45BBAE9L;
    for (g_5 = 4; (g_5 > (-30)); --g_5)
    {
        uint32_t l_37 = 0xAD33D2AFL;
        int32_t l_2000 = 0L;
        for (g_8 = (-1); (g_8 != (-26)); g_8 = safe_sub_func_int8_t_s_s(g_8, 1))
        {
            int32_t *l_2001 = &g_172;
            for (; (g_11[2] < (-18)); g_11[2]--)
            {
            }
            (*l_2001) = ((((((g_744.f0 , func_27(g_176[8], l_25, (2 , func_91(0, l_37, &l_2000)), g_538.f2)) | g_1214.f2) , l_2001) == (void*)0)) >= l_25);
        }
    }
    return l_2002;
}
static int8_t func_27(uint16_t p_28, int32_t p_29, int32_t p_30, uint32_t p_31)
{
    int32_t *l_1217 = &g_652[1].f2;
    return (*l_1217);
}
static int32_t func_91(int32_t * p_92, int8_t p_93, int32_t * p_94)
{
    int8_t l_99 = 1L;
    int32_t *l_117 = &g_5;
    for (l_99 = 0; (l_99 <= 0); l_99 += 1)
    {
        int32_t *l_107 = &g_80;
            (*l_107) ^= (safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(0x0442C135L, (*l_117))), 10));
            if (g_11[0])
                break;
            assert (p_92 == &g_80);
    }
    return (*p_94);
}
int main (void)
{
    func_1();
    return 0;
}

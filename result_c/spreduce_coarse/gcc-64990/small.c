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
static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
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
static long __undefined;
static volatile uint16_t g_13 = 65527UL;
static uint8_t g_21[3] = {0xA5L, 0xA5L, 0xA5L};
static uint32_t g_31 = 0x51978E60L;
static uint8_t g_66 = 0x31L;
static int16_t g_100 = 0x7EBAL;
static uint8_t g_104 = 0xCAL;
static int32_t g_115 = 0x167AC4CBL;
static uint16_t g_116 = 65528UL;
static uint16_t g_117 = 0UL;
static uint8_t g_175 = 1UL;
static int16_t g_221 = 0L;
static int32_t g_222[5][5] = {{1L, 0x6D986254L, 0xE6007DA6L, 0xE8731FA0L, 0x189EED15L}, {1L, 0x6D986254L, 0xE6007DA6L, 0xE8731FA0L, 0x189EED15L}, {1L, 0x6D986254L, 0xE6007DA6L, 0xE8731FA0L, 0x189EED15L}, {1L, 0x6D986254L, 0xE6007DA6L, 0xE8731FA0L, 0x189EED15L}, {1L, 0x6D986254L, 0xE6007DA6L, 0xE8731FA0L, 0x189EED15L}};
static int32_t g_269 = 0x3A494EFEL;
static uint32_t g_315 = 0x9CA97485L;
static uint8_t g_349 = 8UL;
static uint8_t g_351 = 0x4FL;
static uint32_t g_428 = 0x3AAD4235L;
static int32_t g_472 = (-3L);
static uint32_t g_654 = 0xAF7C65D6L;
static uint32_t g_662 = 4UL;
static uint8_t g_678 = 255UL;
static uint8_t g_763 = 247UL;
static int32_t g_810 = 1L;
static int32_t g_839 = 3L;
static int32_t g_847 = 0x4D16A0F4L;
static int16_t g_873 = 0x1E61L;
static uint32_t g_962[9][7] = {{0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}, {0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}, {0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}, {0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}, {0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}, {0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}, {0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}, {0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}, {0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}};
static int32_t g_1018[2][8][10] = {{{0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}}, {{0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}}};
static int32_t g_1087 = 0x19674FE7L;
static uint8_t g_1089[5] = {0x85L, 0x85L, 0x85L, 0x85L, 0x85L};
static int32_t g_1090 = 0x67CE7E3FL;
static uint32_t g_1100 = 0x77FCAF7DL;
static int8_t g_1105 = (-1L);
static uint32_t g_1231 = 4294967295UL;
static uint16_t g_1247 = 0x38A5L;
static int32_t g_1391 = 0L;
static uint8_t g_1603 = 0x44L;
static volatile uint8_t g_1671 = 1UL;
static uint32_t g_1832 = 18446744073709551606UL;
static uint32_t g_2244[9][2][3] = {{{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}};
static uint16_t g_2405 = 0x3F4CL;
static uint8_t g_2440 = 0x31L;
static volatile int32_t g_2684 = 4L;
static uint32_t func_1(void);
static uint32_t func_4(int16_t p_5);
static uint8_t func_6(int8_t p_7, int16_t p_8, int32_t p_9, int8_t p_10);
static int8_t func_11(int32_t p_12);
static uint32_t func_17(int32_t p_18);
static int8_t func_22(uint32_t p_23, uint8_t p_24);
static uint8_t func_27(int16_t p_28, uint32_t p_29, uint8_t p_30);
static uint32_t func_1(void)
{
    uint16_t l_16[4][3] = {{65531UL, 0x14A9L, 65531UL}, {65531UL, 0x14A9L, 65531UL}, {65531UL, 0x14A9L, 65531UL}, {65531UL, 0x14A9L, 65531UL}};
    int32_t l_32 = 0x34ADC6F7L;
    uint32_t l_1393[8][6] = {{1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}};
    uint8_t l_2409[10][9] = {{0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}};
    g_1018[0][7][6] = (safe_rshift_func_int8_t_s_s((func_4(((((0x7CL < func_6(func_11((g_13 & (safe_sub_func_int32_t_s_s(l_16[0][2], func_17(((safe_mod_func_int16_t_s_s(((g_21[2] ^ func_22(((safe_mod_func_uint32_t_u_u((g_21[2] , (g_1090 = (((g_21[1] , func_27((l_16[0][2] <= (l_32 = ((g_31 = (l_16[1][1] != ((-9L) | g_21[2]))) ^ g_21[2]))), g_21[2], g_21[2])) | g_1089[4]) < g_1089[4]))), g_1089[1])) <= g_763), g_21[1])) && 0L), g_21[0])) <= l_1393[1][1])))))), l_1393[7][5], l_2409[7][2], l_16[0][2])) | l_1393[1][1]) ^ l_1393[1][3]) , 0xDC89L)) <= g_2440), 1));
    if (g_13)
    {
        for (g_654 = 0; (g_654 != 54); g_654++)
        {
        }
        l_32 = g_2405;
    }
    else
    {
    }
    return g_2684;
}
static uint32_t func_4(int16_t p_5)
{
    uint32_t l_2711[5][1][2] = {{{0x5CBAE672L, 4294967295UL}}, {{0x5CBAE672L, 4294967295UL}}, {{0x5CBAE672L, 4294967295UL}}, {{0x5CBAE672L, 4294967295UL}}, {{0x5CBAE672L, 4294967295UL}}};
    return l_2711[3][0][1];
}
static uint8_t func_6(int8_t p_7, int16_t p_8, int32_t p_9, int8_t p_10)
{
    int32_t l_2429[8] = {0x428E3B66L, 1L, 0x428E3B66L, 1L, 0x428E3B66L, 1L, 0x428E3B66L, 1L};
    int32_t l_2430 = 0xF4BE388BL;
    int32_t l_2443 = (-4L);
    uint16_t l_2445 = 0UL;
    int32_t l_2433 = 0x96836310L;
        int32_t l_2444 = 1L;
        l_2445 = ((l_2433 < (l_2430 = g_115)) != (l_2429[1] > (safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_810, (g_221 = ((l_2444 = (((l_2443 = (((g_2440 && ((safe_rshift_func_uint16_t_u_u(0x48ADL, 12)) == g_1231)) == ((p_7 || (g_2244[1][0][1] = ((1L >= p_7) <= p_7))) > g_1089[1])) || 0xE7L)) != l_2429[0]) || g_1832)) , g_1018[0][7][2])))), g_428)), p_7))));
    return l_2429[2];
}
static int8_t func_11(int32_t p_12)
{
    uint32_t l_1624[6][3][2] = {{{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}};
    int32_t l_1883 = 0x709BFC8AL;
    for (g_117 = 0; (g_117 <= 6); g_117 += 1)
    {
        if (g_654)
            break;
                        return l_1624[(g_100 + 1)][(g_1603 + 1)][g_1603];
    }
lbl_1833:
    if ((g_1018[0][0][6] = g_104))
    for (; (g_1087 >= 17); g_1087++)
        {
break;
        }
    else
    {
                        return g_222[g_100][g_100];
    }
    return l_1883;
}
static uint32_t func_17(int32_t p_18)
{
    int32_t l_1410 = 0x99FD98BEL;
    return l_1410;
}
static int8_t func_22(uint32_t p_23, uint8_t p_24)
{
    uint16_t l_1097[9][5][5] = {{{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}};
    uint8_t l_1114 = 253UL;
    uint8_t l_1143 = 0x2FL;
    for (g_428 = 0; (g_428 <= 6); g_428 += 1)
    {
        int8_t l_1101[3];
        int8_t l_1104 = 0xDDL;
        int32_t l_1106[5][7][4] = {{{0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}}, {{0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}}, {{0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}}, {{0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}}, {{0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}}};
        int16_t l_1111 = 0L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1101[i] = 1L;
        if (((safe_sub_func_uint16_t_u_u((p_24 <= ((((0x5194L == (safe_mod_func_int32_t_s_s(0L, (safe_lshift_func_uint16_t_u_u(l_1097[7][3][0], ((safe_unary_minus_func_int16_t_s(((l_1106[0][3][0] = (!(((g_763 = l_1097[7][3][0]) && ((((((((((g_763 , g_1100) ^ (l_1101[1] & (safe_add_func_uint32_t_u_u((((l_1104 != l_1101[1]) >= l_1101[1]) ^ l_1097[2][4][3]), g_222[4][1])))) < g_21[2]) && l_1097[3][0][3]) , p_24) , p_23) ^ 0L) , 0x00DEL) >= (-5L)) | g_1018[0][7][2])) < g_1105))) , p_24))) && p_24)))))) == l_1104) & 0UL) & g_221)), p_24)) , (-1L)))
        {
            uint16_t l_1120 = 65528UL;
            int32_t l_1121[9][1];
            {}
            for (g_104 = 0; (g_104 <= 4); g_104 += 1)
            {
                uint32_t l_1115 = 4294967293UL;
                int16_t l_1122[5][6] = {{0x31E4L, 0x31E4L, 0x5D89L, 0x31E4L, 0x31E4L, 0x5D89L}, {0x31E4L, 0x31E4L, 0x5D89L, 0x31E4L, 0x31E4L, 0x5D89L}, {0x31E4L, 0x31E4L, 0x5D89L, 0x31E4L, 0x31E4L, 0x5D89L}, {0x31E4L, 0x31E4L, 0x5D89L, 0x31E4L, 0x31E4L, 0x5D89L}, {0x31E4L, 0x31E4L, 0x5D89L, 0x31E4L, 0x31E4L, 0x5D89L}};
                g_222[4][1] = (l_1106[4][2][1] = (safe_add_func_int16_t_s_s(1L, (safe_sub_func_uint32_t_u_u(l_1111, (0x549DB6C7L || ((safe_mod_func_uint16_t_u_u(((l_1114 && g_175) == g_222[4][1]), l_1115)) ^ (safe_lshift_func_int8_t_s_u((g_1105 = (((((((l_1115 | (((l_1121[3][0] = (safe_mul_func_uint8_t_u_u(0x6CL, l_1120))) < l_1097[7][3][0]) >= l_1106[0][0][2])) , p_24) == p_24) | l_1115) , l_1122[0][4]) , l_1101[1]) >= p_23)), 6)))))))));
                for (; (g_1100 <= 1); g_1100 += 1)
                g_1018[g_1100][(g_1100 + 2)][g_428] = (g_1018[g_1100][(g_1100 + 1)][(g_428 + 1)] ^ ((safe_mod_func_uint8_t_u_u(l_1097[(g_1100 + 7)][g_104][(g_1100 + 2)], (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(l_1097[(g_428 + 2)][g_104][g_104], (p_24 || (safe_mul_func_int8_t_s_s((((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((((safe_add_func_int32_t_s_s(((g_847 < (safe_rshift_func_uint8_t_u_u((((g_1089[g_1100] = g_21[1]) , (((((safe_mul_func_uint8_t_u_u((((p_24 == ((0L >= (safe_lshift_func_uint8_t_u_u(0x8BL, 2))) > l_1122[2][4])) > 1L) >= (-7L)), (-10L))) && p_24) || p_24) , g_678) < g_269)) <= p_23), 1))) , p_23), g_31)) | 1L) | g_962[4][6]) == l_1121[3][0]), l_1121[3][0])), p_23)) | p_24) > l_1143), p_23))))) , 0xE576L), 15)))) == (-2L)));
            }
        }
        else
        {
        }
        for (g_472 = 1; (g_472 >= 0); g_472 -= 1)
        {
                int32_t l_1233[4][7] = {{(-9L), 0x0D798AF9L, (-9L), 0x0D798AF9L, (-9L), 0x0D798AF9L, (-9L)}, {(-9L), 0x0D798AF9L, (-9L), 0x0D798AF9L, (-9L), 0x0D798AF9L, (-9L)}, {(-9L), 0x0D798AF9L, (-9L), 0x0D798AF9L, (-9L), 0x0D798AF9L, (-9L)}, {(-9L), 0x0D798AF9L, (-9L), 0x0D798AF9L, (-9L), 0x0D798AF9L, (-9L)}};
                    return l_1233[3][2];
        }
    }
                        return g_222[g_100][g_100];
}
static uint8_t func_27(int16_t p_28, uint32_t p_29, uint8_t p_30)
{
    return g_810;
}
int main (void)
{
    func_1();
    return 0;
}

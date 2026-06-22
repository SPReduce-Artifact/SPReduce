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
static int64_t
(safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
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
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
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
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 + ui2;
}
static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 - ui2;
}
static uint64_t
(safe_unary_minus_func_uint64_t_u)(uint64_t ui )
{
  return -ui;
}
static uint64_t
(safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ui1 + ui2;
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
static long __undefined;
static int32_t g_3 = 0xB2006887L;
static uint32_t g_4 = 0x80BFB3A4L;
static uint32_t g_57 = 0x8275BAEDL;
static int8_t g_75 = 0L;
static int8_t g_106 = 0x88L;
static uint32_t g_139 = 0x79D400EAL;
static uint32_t g_144 = 0x10C71A7AL;
static int16_t g_161 = 0x23A9L;
static int64_t g_162[6][5][1] = {{{(-9L)},{1L},{(-1L)},{0xB88CA99809853766LL},{(-1L)}},{{1L},{(-9L)},{1L},{(-1L)},{0xB88CA99809853766LL}},{{(-1L)},{1L},{(-9L)},{1L},{(-1L)}},{{0xB88CA99809853766LL},{(-1L)},{1L},{(-9L)},{1L}},{{(-1L)},{0xB88CA99809853766LL},{(-1L)},{1L},{(-9L)}},{{1L},{(-1L)},{0xB88CA99809853766LL},{(-1L)},{1L}}};
static uint32_t g_164 = 0x125FC94FL;
static int64_t g_170 = 0xB2E1E59718C347C6LL;
static uint16_t g_175[1][3] = {{0xB83BL,0xB83BL,0xB83BL}};
static int32_t g_177 = 0x1CE45A5EL;
static int64_t g_180 = 0x037CA2DBAE0E4194LL;
static uint32_t g_224 = 18446744073709551615UL;
static int16_t g_253 = 0x669AL;
static int8_t g_281 = 1L;
static int32_t g_284 = 0xC5FA31A8L;
static uint64_t g_301 = 18446744073709551609UL;
static int64_t g_311 = 0x1D3FF564315EF98ALL;
static int8_t g_312 = 0x66L;
static int16_t g_329[4] = {0L,0L,0L,0L};
static int16_t g_332 = 0x9F77L;
static int64_t g_361 = 2L;
static int32_t g_381 = 0x83098027L;
static int32_t g_459 = 0x30A7D56AL;
static uint8_t g_462 = 0x3BL;
static uint64_t g_552 = 18446744073709551614UL;
static uint8_t g_777 = 1UL;
static int32_t g_810 = 0x61BF8A8EL;
static uint32_t g_836 = 0x995B2178L;
static int16_t g_877 = 1L;
static int32_t g_923 = 0xD9003AB3L;
static int16_t g_977 = 1L;
static uint8_t g_991 = 249UL;
static int32_t g_1039 = 0xEF062AE5L;
static int32_t g_1118[1] = {0L};
static uint64_t g_1147 = 0x7BAAE86401010370LL;
static uint32_t g_1284[1] = {0xA7AD44D3L};
static uint64_t g_1293[8][3] = {{0x7E5A06C1A9C55C5ALL,0x7E5A06C1A9C55C5ALL,0x7E5A06C1A9C55C5ALL},{0x742FB213869889FCLL,0x742FB213869889FCLL,0x742FB213869889FCLL},{0x7E5A06C1A9C55C5ALL,0x7E5A06C1A9C55C5ALL,0x7E5A06C1A9C55C5ALL},{0x742FB213869889FCLL,0x742FB213869889FCLL,0x742FB213869889FCLL},{0x7E5A06C1A9C55C5ALL,0x7E5A06C1A9C55C5ALL,0x7E5A06C1A9C55C5ALL},{0x742FB213869889FCLL,0x742FB213869889FCLL,0x742FB213869889FCLL},{0x7E5A06C1A9C55C5ALL,0x7E5A06C1A9C55C5ALL,0x7E5A06C1A9C55C5ALL},{0x742FB213869889FCLL,0x742FB213869889FCLL,0x742FB213869889FCLL}};
static int16_t g_1434 = 3L;
static const int32_t g_1501 = 0L;
static int8_t g_1589 = 7L;
static uint8_t g_1701[5] = {0UL,0UL,0UL,0UL,0UL};
static int32_t g_1717[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int64_t g_1735[4] = {0L,0L,0L,0L};
static int16_t g_1756 = 0x107DL;
static int8_t g_2063[2][10] = {{0x88L,1L,0x88L,0x88L,1L,0x88L,0x88L,1L,0x88L,0x88L},{1L,1L,4L,1L,1L,4L,1L,1L,4L,1L}};
static int64_t g_2158 = 0xB6925F978A47DC55LL;
static int8_t g_2188 = 0xF2L;
static int32_t g_2228 = 0x516B0020L;
static uint32_t g_2236 = 0x4F333AFEL;
static uint32_t g_2247 = 0x8085FFE9L;
static uint32_t g_2424[6][2][3] = {{{0x4B63432BL,18446744073709551615UL,7UL},{6UL,18446744073709551615UL,0x174C4646L}},{{0UL,0x2E164FDEL,0x3049CF58L},{0x44BD1C72L,0UL,0UL}},{{0UL,8UL,0UL},{6UL,0x2EB20443L,0UL}},{{0x4B63432BL,0UL,0UL},{18446744073709551615UL,0x174C4646L,0x3049CF58L}},{{0UL,0UL,0x174C4646L},{0x2E164FDEL,0x2EB20443L,7UL}},{{0x2E164FDEL,8UL,18446744073709551615UL},{0UL,0UL,0x2EB20443L}}};
static int16_t g_2426 = (-3L);
static uint64_t g_2427 = 18446744073709551615UL;
static uint64_t g_2452 = 18446744073709551614UL;
static int32_t g_2465 = 2L;
static uint32_t g_2764 = 0x046A17DAL;
static int64_t g_2806[4] = {0x7F419F4420CCC24DLL,0x7F419F4420CCC24DLL,0x7F419F4420CCC24DLL,0x7F419F4420CCC24DLL};
static uint64_t g_2811 = 9UL;
inline static int32_t func_1(void);
inline static int8_t func_11(uint8_t p_12);
inline static uint8_t func_13(uint64_t p_14, uint16_t p_15);
static int32_t func_18(uint8_t p_19, int16_t p_20, int16_t p_21);
static uint8_t func_26(uint8_t p_27, uint32_t p_28, int32_t p_29, const uint16_t p_30);
static int16_t func_39(int32_t p_40, int32_t p_41, uint8_t p_42, int16_t p_43, uint64_t p_44);
inline static int32_t func_45(int32_t p_46, uint8_t p_47, uint32_t p_48, const int16_t p_49, int16_t p_50);
inline static uint64_t func_55(int8_t p_56);
static uint8_t func_62(int32_t p_63);
inline static int32_t func_1(void)
{
    uint8_t l_2[6][6][4] = {{{0x73L,0xF0L,255UL,1UL},{0xF1L,1UL,0xACL,249UL},{9UL,1UL,0UL,0x48L},{0xD9L,0x79L,1UL,0x79L},{0x96L,0xF1L,0x96L,0UL},{0UL,0xD9L,0xF1L,0xACL}},{{255UL,0x71L,0x48L,0xD9L},{0x07L,0xDFL,0x48L,255UL},{255UL,0x13L,0xF1L,0x29L},{0UL,0x73L,0x96L,0xE6L},{0x96L,0xE6L,1UL,0x13L},{0xD9L,0x07L,0UL,0UL}},{{9UL,9UL,0xACL,0x73L},{0xF1L,0UL,255UL,1UL},{0x73L,0x29L,249UL,255UL},{0xACL,0x29L,0xDFL,1UL},{0x29L,0UL,0x07L,0x73L},{0x65L,9UL,1UL,0UL}},{{249UL,0x07L,0x79L,0x13L},{1UL,0xE6L,0UL,0xE6L},{255UL,0x73L,0x13L,0x29L},{6UL,0x13L,0x79L,255UL},{0xE6L,0xDFL,255UL,0xD9L},{0xE6L,0x71L,0x79L,0xACL}},{{6UL,0xD9L,0x13L,0xDFL},{255UL,249UL,0x79L,0x48L},{0xF0L,0x29L,0x48L,255UL},{1UL,0xF0L,0xF0L,1UL},{0x13L,0x65L,0UL,0xD9L},{0x79L,0UL,0xF1L,255UL}},{{9UL,0x48L,1UL,255UL},{6UL,0UL,255UL,0xD9L},{249UL,0x65L,9UL,1UL},{0x6EL,0xF0L,1UL,255UL},{0xE6L,0x29L,0x65L,0x48L},{255UL,249UL,255UL,0xDFL}}};
    int32_t l_2186 = (-1L);
    uint16_t l_3032 = 1UL;
    for (g_3 = 3; (g_3 >= 0); g_3 -= 1)
    {
        uint16_t l_22 = 0xDB88L;
        int64_t l_2187 = 1L;
        g_2188 = ((safe_add_func_int32_t_s_s(((((safe_lshift_func_uint8_t_u_s((l_2[4][4][3] , (((l_2186 = (safe_rshift_func_int8_t_s_u(((func_11(func_13((safe_sub_func_int32_t_s_s(func_18(g_4, l_22, l_22), (!0xB607800FL))), g_3)) & 252UL) < 7UL), l_22))) ^ g_1118[0]) && l_2187)), 6)) < l_2[0][3][0]) & 8L) , (-4L)), 0xE463EC33L)) <= g_1118[0]);
    }
lbl_2878:
    return l_3032;
}
inline static int8_t func_11(uint8_t p_12)
{
    return g_810;
}
inline static uint8_t func_13(uint64_t p_14, uint16_t p_15)
{
    uint32_t l_24[5][10] = {{1UL,1UL,1UL,1UL,1UL,1UL,4294967295UL,1UL,4294967295UL,1UL},{0x888AD88CL,1UL,0x4BC795C3L,1UL,0x888AD88CL,0x4BC795C3L,0x12EF314DL,0x12EF314DL,0x4BC795C3L,0x888AD88CL},{0x888AD88CL,4294967295UL,4294967295UL,0x888AD88CL,1UL,1UL,0x888AD88CL,1UL,1UL,0x888AD88CL},{1UL,0x888AD88CL,1UL,1UL,0x888AD88CL,4294967295UL,4294967295UL,0x888AD88CL,1UL,1UL},{0x12EF314DL,0x12EF314DL,0x4BC795C3L,0x888AD88CL,1UL,0x4BC795C3L,1UL,0x888AD88CL,0x4BC795C3L,0x12EF314DL}};
    int32_t l_1829 = 0x2F2F6D26L;
    uint8_t l_25 = 248UL;
        uint8_t l_1830 = 0x2FL;
        l_1830 = ((l_1829 = (l_25 & (g_3 < (((func_26((safe_mod_func_uint8_t_u_u(((-2L) > (safe_lshift_func_int8_t_s_s(func_18(p_15, p_15, l_25), l_25))), ((g_4 > 18446744073709551607UL) ^ p_15))), l_25, p_15, l_24[1][2]) ^ 0xA8L) , p_15) ^ 18446744073709551615UL)))) | l_24[2][0]);
    return l_1829;
}
static int32_t func_18(uint8_t p_19, int16_t p_20, int16_t p_21)
{
    return g_3;
}
static uint8_t func_26(uint8_t p_27, uint32_t p_28, int32_t p_29, const uint16_t p_30)
{
    int64_t l_38 = (-7L);
    int32_t l_1129 = (-1L);
    int32_t l_1577 = 0xD2CEBEDCL;
    int16_t l_1584 = 0xD58FL;
    int32_t l_1808 = 0x483A03A9L;
    int32_t l_1809[2][2];
    const int32_t l_1821 = (-1L);
    uint16_t l_1827 = 1UL;
lbl_1595:
    l_1577 = ((~((safe_mod_func_uint16_t_u_u(l_38, func_39((l_1129 = func_45(func_18(l_38, (safe_add_func_uint8_t_u_u((((safe_add_func_uint64_t_u_u(func_55(((((255UL <= ((g_57 = 0UL) , 1UL)) , (safe_lshift_func_int8_t_s_u((0x14L >= (0x0229B020L && (l_38 , (safe_lshift_func_int8_t_s_u((-1L), 0))))), p_27))) != p_28) <= g_4)), g_1118[0])) <= l_38) & l_38), l_38)), g_1118[0]), g_1118[0], l_38, g_4, p_27)), l_38, p_27, g_1118[0], p_27))) >= p_28)) <= p_28);
    int8_t l_1622 = (-2L);
        int32_t l_1676[4][5] = {{0L,0xE8D11F00L,0xE8D11F00L,0L,0xE8D11F00L},{1L,1L,1L,1L,1L},{0xE8D11F00L,0L,0xE8D11F00L,0xE8D11F00L,0L},{1L,1L,1L,1L,1L}};
        int32_t l_1677 = 0x30BB59D2L;
        int32_t l_1781 = 0x251908C6L;
        l_1781 = (((l_1129 = l_1677) < (safe_sub_func_int32_t_s_s((1L & (((((safe_sub_func_int64_t_s_s(((p_27 | (l_1577 >= (((0x9B62291B0270610DLL >= ((((l_1809[0][0] = ((-1L) < g_381)) != (safe_add_func_int64_t_s_s((l_1808 = p_29), ((safe_mod_func_uint16_t_u_u(((((safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint16_t_u_s((g_977 , l_1676[1][2]), 13)))) >= 9L) != g_1118[0]) || 0x9A533341538C4D18LL), p_29)) <= 0UL)))) == g_381) | l_1622)) ^ l_1584) || 1L))) < p_29), l_1821)) , p_28) && 246UL) & 0x3FBCL) || p_29)), 4294967287UL))) != g_1284[0]);
    return l_1827;
}
static int16_t func_39(int32_t p_40, int32_t p_41, uint8_t p_42, int16_t p_43, uint64_t p_44)
{
    int32_t l_1146 = (-3L);
    int32_t l_1333 = 0L;
    int64_t l_1145 = 0x268351B43BFD7F0ALL;
        int64_t l_1165 = (-1L);
        int32_t l_1166 = 0L;
        int32_t l_1240 = 0x0A242F05L;
        for (g_332 = 3; (g_332 >= 0); g_332 -= 1)
        {
            int32_t l_1164 = 0x42FDD4A8L;
            if (((p_42 = (g_777 = (((65527UL >= (((((g_329[g_332] = 0x0964L) > (0x896AL <= (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((((((g_3 ^ ((safe_unary_minus_func_int8_t_s(g_180)) ^ (l_1166 = (safe_lshift_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((g_836 >= (safe_add_func_int64_t_s_s((g_332 >= (((safe_mod_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((((((+(l_1164 <= l_1164)) >= l_1146) & g_332) && l_1164) , g_977), l_1164)) | g_311) <= l_1165), 4L)) && l_1145) && 0x82E1L)), l_1145))), g_180)) < 250UL), 4))))) >= l_1145) < 0xCDL) <= l_1146) < l_1146), 0x09L)) , g_332), 3)))) & g_877) < p_43) != l_1146)) , l_1146) > g_311))) | l_1145))
            {
                g_923 = (p_41 = (0xB515D37B249F97A6LL ^ ((safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(g_836, g_877)), 6)) || (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((p_42 = (safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((!((l_1166 = g_329[g_332]) == 0x294A85636008822DLL)), (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((~p_43) , (safe_add_func_int64_t_s_s((l_1145 > (0x3F77C373L >= (((0x1BCE859916530500LL && 0xF180D4E1F6AD28F0LL) || 0x76L) || 0x406EE5E5F08477A3LL))), 0xC9C24AD94F01C2F5LL))), p_43)), g_139)))) | 3UL), 1))), 0)), g_977)), 3)), (-3L))))));
                if (g_977)
                {
                    const int16_t l_1196 = 0xBCD1L;
                    if ((+((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s(l_1196, (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((((l_1145 , (0x665C3853L ^ p_42)) , ((p_44 == (0x0B3C883CL && (p_44 , p_43))) > 0x63E54E52L)) , p_44) , l_1165), l_1166)), 0xECL)))), p_41)) & 1UL)))
                    {
                        return p_42;
                    }
                    else
                    {
                    }
                }
                else
                {
            int32_t l_1164 = 0x42FDD4A8L;
            int32_t l_1223[9][5] = {{0L,0x1ABBA624L,0x1ABBA624L,0L,0x1ABBA624L},{4L,1L,0xD60A74D5L,1L,4L},{0x1ABBA624L,0L,0x1ABBA624L,0x1ABBA624L,0L},{4L,0x32CC7F24L,0xBD2B6D24L,1L,0xBD2B6D24L},{0L,0L,0x41CEA2CCL,0L,0L},{0xBD2B6D24L,1L,0xBD2B6D24L,0x32CC7F24L,4L},{0L,0x1ABBA624L,0x1ABBA624L,0L,0x1ABBA624L},{4L,1L,0xD60A74D5L,1L,4L},{0x1ABBA624L,0L,0x1ABBA624L,0x1ABBA624L,0L}};
            uint64_t l_1300[5][3][7] = {{{0UL,0x79B3F9D776FDF340LL,0x6CE295112A9E9384LL,0xB661A51D37F22711LL,18446744073709551610UL,1UL,0xDB6D5FC273433E81LL},{0x034836C03B2DC689LL,1UL,18446744073709551608UL,1UL,7UL,1UL,18446744073709551608UL},{0xDB6D5FC273433E81LL,0xDB6D5FC273433E81LL,0UL,0x05D16A1C76A53D57LL,1UL,0xB661A51D37F22711LL,0x6CE295112A9E9384LL}},{{0x6CE295112A9E9384LL,1UL,18446744073709551612UL,0x3252ECEFE5E9D757LL,1UL,0x034836C03B2DC689LL,7UL},{18446744073709551610UL,0x3252ECEFE5E9D757LL,18446744073709551608UL,1UL,1UL,18446744073709551606UL,1UL},{0x05D16A1C76A53D57LL,18446744073709551615UL,2UL,0x79B3F9D776FDF340LL,7UL,0x8F7FB2F70B296FEELL,0x6CE295112A9E9384LL}},{{0xA2B6E572CD4F4A3DLL,18446744073709551612UL,18446744073709551610UL,0x79B3F9D776FDF340LL,18446744073709551610UL,18446744073709551612UL,0xA2B6E572CD4F4A3DLL},{18446744073709551612UL,5UL,0x034836C03B2DC689LL,1UL,0xDB6D5FC273433E81LL,18446744073709551610UL,0UL},{0x3252ECEFE5E9D757LL,0xDB6D5FC273433E81LL,0x491AF1FE4A5913F0LL,0x3252ECEFE5E9D757LL,0x05D16A1C76A53D57LL,0UL,0x79B3F9D776FDF340LL}},{{0xA2B6E572CD4F4A3DLL,18446744073709551606UL,0x034836C03B2DC689LL,0x05D16A1C76A53D57LL,0xA348622ADBEC72ABLL,0x034836C03B2DC689LL,1UL},{0xA348622ADBEC72ABLL,0xA2B6E572CD4F4A3DLL,18446744073709551610UL,1UL,0xDB6D5FC273433E81LL,1UL,1UL},{0x6EC98794B3C73DFCLL,0xA2B6E572CD4F4A3DLL,2UL,0xA2B6E572CD4F4A3DLL,0x6EC98794B3C73DFCLL,0xEF844FAB78DC1EB3LL,0xDB6D5FC273433E81LL}},{{0x6CE295112A9E9384LL,18446744073709551606UL,18446744073709551608UL,5UL,1UL,1UL,0xA2B6E572CD4F4A3DLL},{0UL,0xDB6D5FC273433E81LL,18446744073709551612UL,0xA348622ADBEC72ABLL,1UL,1UL,0x034836C03B2DC689LL},{0x6CE295112A9E9384LL,5UL,0UL,0x3252ECEFE5E9D757LL,5UL,0xCB6B9AAA9EFB2E9ELL,7UL}}};
            int64_t l_1332 = 1L;
                int32_t l_1384[6] = {0x1F96687BL,(-9L),(-9L),0x1F96687BL,(-9L),(-9L)};
                int32_t l_1410 = (-10L);
                    int32_t l_1411[3][8][2] = {{{4L,6L},{6L,4L},{6L,6L},{4L,6L},{6L,4L},{6L,6L},{4L,6L},{4L,(-5L)}},{{4L,4L},{(-5L),4L},{4L,(-5L)},{4L,4L},{(-5L),4L},{4L,(-5L)},{4L,4L},{(-5L),4L}},{{4L,(-5L)},{4L,4L},{(-5L),4L},{4L,(-5L)},{4L,4L},{(-5L),4L},{4L,(-5L)},{4L,4L}}};
                    g_381 = (((l_1223[4][1] = (((-3L) ^ (p_41 = ((safe_mod_func_int16_t_s_s((g_877 = (safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u((65535UL > (((safe_add_func_uint8_t_u_u(p_40, (((l_1410 = (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u(g_1284[0], (0x99L || (((((g_170 && 0UL) && ((-1L) | p_40)) , 0xB02912D7L) > p_44) || l_1223[6][1])))) > 0x94FC9523EB2B033FLL) ^ p_44), l_1333)), 0x77BBL))) <= 1UL) != l_1384[0]))) & l_1411[2][4][0]) <= l_1240)), 0xA46F5777L)) , 0x2F43L), 10))), g_162[4][1][0])) < l_1384[3]))) & g_57)) , p_44) || l_1300[1][1][4]);
        }
            }
            else
            {
            }
        }
    return l_1146;
}
inline static int32_t func_45(int32_t p_46, uint8_t p_47, uint32_t p_48, const int16_t p_49, int16_t p_50)
{
    return g_180;
}
inline static uint64_t func_55(int8_t p_56)
{
    uint32_t l_64 = 0x66AB0C02L;
    int32_t l_1123 = 0xC7529DAAL;
    l_1123 = (0x3DL && (func_62(l_64) <= l_64));
    return g_175[0][0];
}
static uint8_t func_62(int32_t p_63)
{
    for (g_977 = (-27); (g_977 <= 4); ++g_977)
    return p_63;
    return p_63;
}
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    crc32_gentab();
    func_1();
    transparent_crc(g_332, "g_332", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

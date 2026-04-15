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
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
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
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
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
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static long __undefined;
static int32_t g_5 = (-10L);
static int16_t g_27[3][1] = {{5L},{5L},{5L}};
static uint32_t g_32[9][2] = {{4294967290UL,0x520F3038L},{6UL,0x520F3038L},{4294967290UL,6UL},{0xD06F6293L,0xD06F6293L},{0xD06F6293L,6UL},{4294967290UL,0x520F3038L},{6UL,0x520F3038L},{4294967290UL,6UL},{0xD06F6293L,0xD06F6293L}};
static uint32_t g_33 = 0x2CD8491FL;
static int8_t g_34[10] = {0xF9L,0xF9L,0xF9L,0xF9L,0xF9L,0xF9L,0xF9L,0xF9L,0xF9L,0xF9L};
static uint8_t g_35 = 0x2EL;
static volatile uint32_t g_44 = 4294967289UL;
static int16_t g_53 = 0x702BL;
static uint32_t g_86 = 0x19166C0CL;
static uint16_t g_108 = 65535UL;
static volatile uint32_t g_126 = 0x7CFDFC4DL;
static uint32_t g_127 = 1UL;
static uint8_t g_132 = 0xA8L;
static uint32_t g_183[10] = {0x3F7E2340L,0x3F7E2340L,0x3F7E2340L,0x3F7E2340L,0x3F7E2340L,0x3F7E2340L,0x3F7E2340L,0x3F7E2340L,0x3F7E2340L,0x3F7E2340L};
static uint8_t g_185[2][9][3] = {{{0xBEL,0x9FL,0x9FL},{0xBEL,0x9FL,0x44L},{0x9FL,0x44L,0x44L},{0x9FL,0x44L,0x44L},{0x9FL,0x44L,0x44L},{0x9FL,0x44L,0x44L},{0x9FL,0x44L,0x44L},{0x9FL,0x44L,0x44L},{0x9FL,0x44L,0x44L}},{{0x9FL,0x44L,0x44L},{0x9FL,0x44L,0x44L},{0x9FL,0x44L,0x44L},{0x9FL,0x44L,0x44L},{0x9FL,0x44L,0x44L},{0x9FL,0x44L,0x44L},{0x9FL,0x44L,0x44L},{0x9FL,0x44L,0x44L},{0x9FL,0x44L,0x44L}}};
static int16_t g_203 = (-9L);
static uint32_t g_247 = 0x34D8CA7FL;
static uint32_t g_250[1][5] = {{0UL,0UL,0UL,0UL,0UL}};
static uint32_t g_276 = 0UL;
static int16_t g_298 = 0L;
static int32_t g_315 = 0xA0711357L;
static uint32_t g_317 = 5UL;
static uint32_t g_318 = 0UL;
static int16_t g_344 = 0xB4C2L;
static uint16_t g_391 = 2UL;
static uint16_t g_400 = 65528UL;
static int8_t g_419 = 0xF8L;
static int32_t g_427[3] = {0x92A1D2CDL,0x92A1D2CDL,0x92A1D2CDL};
static uint32_t g_449 = 0xEA1D27C7L;
static uint8_t g_456 = 248UL;
static uint32_t g_486 = 0x2CAB0F51L;
static volatile uint32_t g_499 = 0xCCA17D6DL;
static uint16_t g_503 = 0x06D7L;
static uint16_t g_504[10][8][3] = {{{1UL,0x4B63L,0x3008L},{65535UL,1UL,0x3008L},{0xEF53L,6UL,0xAA53L},{0xA4E2L,65535UL,0x3008L},{0x4B63L,6UL,0x3008L},{6UL,0xEF53L,0xAA53L},{6UL,5UL,0x3008L},{5UL,0xA4E2L,0x3008L}},{{0xFFB4L,0xFFB4L,0xAA53L},{1UL,0x4B63L,0x3008L},{65535UL,1UL,0x3008L},{0xEF53L,6UL,0xAA53L},{0xA4E2L,65535UL,0x3008L},{0x4B63L,6UL,0x3008L},{6UL,0xEF53L,0xAA53L},{6UL,5UL,0x3008L}},{{5UL,0xA4E2L,0x3008L},{0xFFB4L,0xFFB4L,0xAA53L},{1UL,0x4B63L,0x3008L},{65535UL,1UL,0x3008L},{0xEF53L,6UL,0xAA53L},{0xA4E2L,65535UL,0x3008L},{0x4B63L,6UL,0x3008L},{6UL,0xEF53L,0xAA53L}},{{6UL,5UL,0x3008L},{5UL,0xA4E2L,0x3008L},{0xFFB4L,0xFFB4L,0xAA53L},{1UL,0x4B63L,0x3008L},{65535UL,1UL,0x3008L},{0xEF53L,6UL,0xAA53L},{0xA4E2L,65535UL,0x3008L},{0x4B63L,6UL,0x3008L}},{{6UL,0xEF53L,0xAA53L},{6UL,5UL,0x3008L},{5UL,0xA4E2L,0x3008L},{0xFFB4L,0xFFB4L,0xAA53L},{1UL,0x4B63L,0x3008L},{65535UL,1UL,0x3008L},{0xEF53L,6UL,0xAA53L},{0xA4E2L,65535UL,0x3008L}},{{0x4B63L,6UL,0x3008L},{6UL,0xEF53L,0xAA53L},{6UL,5UL,0x3008L},{5UL,0xA4E2L,0x3008L},{0xFFB4L,0xFFB4L,6UL},{0xF860L,0x316FL,0xEF53L},{0UL,0xF860L,0xEF53L},{65530UL,0xE9B3L,6UL}},{{0x2DF2L,0UL,0xEF53L},{0x316FL,0UL,0xEF53L},{0xE9B3L,65530UL,6UL},{0UL,0x90F2L,0xEF53L},{0x90F2L,0x2DF2L,0xEF53L},{6UL,6UL,6UL},{0xF860L,0x316FL,0xEF53L},{0UL,0xF860L,0xEF53L}},{{65530UL,0xE9B3L,6UL},{0x2DF2L,0UL,0xEF53L},{0x316FL,0UL,0xEF53L},{0xE9B3L,65530UL,6UL},{0UL,0x90F2L,0xEF53L},{0x90F2L,0x2DF2L,0xEF53L},{6UL,6UL,6UL},{0xF860L,0x316FL,0xEF53L}},{{0UL,0xF860L,0xEF53L},{65530UL,0xE9B3L,6UL},{0x2DF2L,0UL,0xEF53L},{0x316FL,0UL,0xEF53L},{0xE9B3L,65530UL,6UL},{0UL,0x90F2L,0xEF53L},{0x90F2L,0x2DF2L,0xEF53L},{6UL,6UL,6UL}},{{0xF860L,0x316FL,0xEF53L},{0UL,0xF860L,0xEF53L},{65530UL,0xE9B3L,6UL},{0x2DF2L,0UL,0xEF53L},{0x316FL,0UL,0xEF53L},{0xE9B3L,65530UL,6UL},{0UL,0x90F2L,0xEF53L},{0x90F2L,0x2DF2L,0xEF53L}}};
static int32_t g_566 = 0xB2D08BC0L;
static volatile int16_t g_577 = 2L;
static uint32_t g_639 = 0x5BF4443DL;
static uint32_t g_692 = 0x09391D9FL;
static int32_t g_693[2] = {0xCB57FED6L,0xCB57FED6L};
static uint32_t g_739 = 0xD789D116L;
static volatile int8_t g_769 = 0x1EL;
static int16_t g_820 = 0L;
static int32_t g_897[2][3] = {{0xD7D9BB05L,0xD7D9BB05L,0xD7D9BB05L},{(-1L),(-1L),(-1L)}};
static volatile int32_t g_918[5][2][9] = {{{3L,(-1L),3L,0x91CF556EL,0L,0xEAB8A1A6L,0x91CF556EL,0xED0869A6L,(-1L)},{(-1L),0xED0869A6L,0x91CF556EL,0xEAB8A1A6L,0L,0x91CF556EL,3L,(-1L),3L}},{{1L,9L,0x91CF556EL,0x91CF556EL,9L,1L,0xEAB8A1A6L,0x8D07C015L,0x6320F129L},{1L,0xED0869A6L,3L,1L,(-1L),0x6320F129L,(-1L),0x8D07C015L,3L}},{{(-1L),(-1L),0xEAB8A1A6L,0x6320F129L,(-1L),0x6320F129L,0xEAB8A1A6L,(-1L),(-1L)},{3L,0x8D07C015L,(-1L),0x6320F129L,(-1L),1L,3L,0xED0869A6L,1L}},{{0x6320F129L,0x8D07C015L,0xEAB8A1A6L,1L,9L,0x91CF556EL,0x91CF556EL,9L,1L},{3L,(-1L),3L,0x91CF556EL,0L,0xEAB8A1A6L,0x91CF556EL,0xED0869A6L,(-1L)}},{{(-1L),0xED0869A6L,0x91CF556EL,0xEAB8A1A6L,(-1L),0x1D3921EBL,0x385EB4D3L,0L,0x385EB4D3L},{4L,0x91CF556EL,0x1D3921EBL,0x1D3921EBL,0x91CF556EL,4L,0xB5D366A8L,3L,0x5DC9BADBL}}};
static uint32_t g_972 = 0x3AAFA27AL;
static volatile uint32_t g_1001 = 0xD12476D2L;
static uint16_t g_1044 = 0x24BFL;
static volatile int16_t g_1045 = 0x8739L;
static int16_t g_1138 = 0xDCAAL;
static uint16_t g_1328 = 0x2078L;
static volatile uint32_t g_1357 = 0UL;
static int32_t g_1363 = 0x09F5684CL;
static int32_t g_1472 = (-1L);
static int8_t g_1669 = 8L;
static int32_t g_2084 = (-1L);
static int32_t g_2222 = 0x8FE31437L;
static volatile int32_t g_2236[6] = {0x0E7B8307L,0x0E7B8307L,0x0E7B8307L,0x0E7B8307L,0x0E7B8307L,0x0E7B8307L};
static volatile int8_t g_2610 = 0xB6L;
static volatile int16_t g_2674 = 0L;
static uint16_t g_2729[3][7] = {{65528UL,0xB42CL,1UL,0xB42CL,65528UL,1UL,1UL},{65528UL,0xB42CL,1UL,0xB42CL,65528UL,1UL,1UL},{65528UL,0xB42CL,1UL,0xB42CL,65528UL,1UL,1UL}};
static int32_t g_2942 = 0L;
static uint8_t g_3003 = 0x76L;
static int32_t g_3045[3][7] = {{0x26980768L,0x26980768L,0x26980768L,0x26980768L,0x26980768L,0x26980768L,0x26980768L},{8L,8L,8L,8L,8L,8L,8L},{0x26980768L,0x26980768L,0x26980768L,0x26980768L,0x26980768L,0x26980768L,0x26980768L}};
static volatile uint8_t g_3159[3][4][2] = {{{0x8AL,0x8AL},{0x8AL,0x8AL},{0x8AL,0x8AL},{0x8AL,0x8AL}},{{0x8AL,0x8AL},{0x8AL,0x8AL},{0x8AL,0x8AL},{0x8AL,0x8AL}},{{0x8AL,0x8AL},{0x8AL,0x8AL},{0x8AL,0x8AL},{0x8AL,0x8AL}}};
static uint8_t g_3782 = 0xD9L;
static int16_t g_3901 = (-3L);
static volatile int8_t g_3903 = 0x93L;
static int32_t g_4123 = 4L;
static uint16_t func_1(void);
static uint8_t func_10(int16_t p_11, int8_t p_12);
static int8_t func_13(uint16_t p_14, int16_t p_15, int32_t p_16);
static int8_t func_17(int32_t p_18, uint8_t p_19, uint16_t p_20, int8_t p_21);
static uint16_t func_23(int32_t p_24);
static uint16_t func_1(void)
{
    int16_t l_2 = 0x8A1FL;
    int16_t l_22 = (-1L);
    int32_t l_4309 = 0xCC5AFC00L;
    int32_t l_4310 = 0xDB3F08D2L;
    int32_t l_4311[3];
    g_2236[1] = ((l_2 , (safe_add_func_int32_t_s_s(g_5, l_2))) > (l_4311[0] = (l_4310 = (1L == (safe_lshift_func_uint16_t_u_u(9UL, (safe_mod_func_int32_t_s_s((((l_4309 = ((func_10((func_13(g_5, g_5, (((func_17((g_35 = (g_34[5] = (l_22 & (g_33 = (func_23(((((safe_lshift_func_uint16_t_u_u(((g_27[2][0] = g_5) <= l_2), 9)) & 0x9E17L) , g_27[2][0]) | g_5)) , g_32[1][0]))))), g_5, g_5, g_5) <= 1L) != g_5) <= l_2)) , g_247), l_2) , 0xB8L) != l_22)) , 255UL) >= g_3901), g_3045[2][3]))))))));
    return g_2084;
}
static uint8_t func_10(int16_t p_11, int8_t p_12)
{
    uint32_t l_4281[8] = {0x57F96573L,0x57F96573L,0x57F96573L,0x57F96573L,0x57F96573L,0x57F96573L,0x57F96573L,0x57F96573L};
    int32_t l_4282 = 0x47CA2331L;
    if ((g_897[0][2] = g_2222))
    {
        int32_t l_4253 = 0x298E0FB6L;
        int32_t l_4256 = 0xE99E48B2L;
        l_4253 = ((((safe_sub_func_int32_t_s_s((5UL ^ l_4256), ((((((safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(1UL, 11)) && 0xD98578FCL) & 1L), (+(((safe_add_func_int32_t_s_s((l_4282 = (((safe_unary_minus_func_int32_t_s((g_897[0][2] = ((((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((g_427[1] = (safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((l_4281[5] != (-2L)), 7)) <= (((((g_1472 >= g_2084) , g_317) | g_1044) < l_4281[5]) < g_203)), p_11))) , p_11) , l_4281[2]), 3)), g_504[1][1][2])) | l_4253), g_27[2][0])) , p_12) && l_4281[2]), 4)), (-10L))), 0x774942A1L)) , l_4281[3]) | 4294967295UL) || 0x3866562AL)))) != 0x91L) , p_12)), p_12)) || 1L) <= g_250[0][1])))) <= l_4256) >= 0x64BCL) != g_3003) , (-10L)) < p_12))) , 0xF0E3L) | g_1669) , p_11);
    }
    else
    {
    }
    return p_12;
}
static int8_t func_13(uint16_t p_14, int16_t p_15, int32_t p_16)
{
    return g_344;
}
static int8_t func_17(int32_t p_18, uint8_t p_19, uint16_t p_20, int8_t p_21)
{
    int32_t l_49[7];
    uint32_t l_3367 = 7UL;
    int i, j;
    for (i = 0; i < 7; i++)
        l_49[i] = (-1L);
    int32_t l_3184 = 0x492AE369L;
        int32_t l_3187 = 0x18D23FFAL;
lbl_3520:
        for (p_21 = 0; (p_21 <= (-24)); p_21 = safe_sub_func_int32_t_s_s(p_21, 4))
        {
        }
        for (; (g_53 != 13); ++g_53)
        {
            uint8_t l_3519 = 0xC3L;
            int32_t l_3593[5][9][5] = {{{(-1L),5L,(-1L),0xEFF4038FL,0L},{(-10L),(-4L),0x3D12D6ACL,0x3D12D6ACL,0xF7B9C197L},{2L,0xEFF4038FL,5L,0xEFF4038FL,2L},{0xF7B9C197L,0x3D12D6ACL,0x946D202EL,0xF7B9C197L,(-4L)},{(-1L),0xC8EA268AL,5L,0xEFF4038FL,5L},{(-4L),(-4L),0x4D03646FL,0x3D12D6ACL,(-4L)},{(-9L),0xEFF4038FL,(-9L),0xC8EA268AL,2L},{(-4L),0x946D202EL,0x946D202EL,(-4L),0xF7B9C197L},{(-1L),0xEFF4038FL,0L,0xEFF4038FL,(-1L)}},{{0xF7B9C197L,(-4L),0x946D202EL,0x946D202EL,(-4L)},{2L,0xC8EA268AL,(-9L),0xEFF4038FL,(-9L)},{(-4L),0x3D12D6ACL,0x4D03646FL,(-4L),(-4L)},{5L,0xEFF4038FL,5L,0xC8EA268AL,(-1L)},{(-4L),0xF7B9C197L,0x946D202EL,0x3D12D6ACL,0xF7B9C197L},{2L,0xEFF4038FL,5L,0xEFF4038FL,2L},{0xF7B9C197L,0x3D12D6ACL,0x946D202EL,0xF7B9C197L,(-4L)},{(-1L),0xC8EA268AL,5L,0xEFF4038FL,5L},{(-4L),(-4L),0x4D03646FL,0x3D12D6ACL,(-4L)}},{{(-9L),0xEFF4038FL,(-9L),0xC8EA268AL,2L},{(-4L),0x946D202EL,0x946D202EL,(-4L),0xF7B9C197L},{(-1L),0xEFF4038FL,0L,0xEFF4038FL,(-1L)},{0xF7B9C197L,(-4L),0x946D202EL,0x946D202EL,(-4L)},{2L,0xC8EA268AL,(-9L),0xEFF4038FL,(-9L)},{(-4L),0x3D12D6ACL,0x4D03646FL,(-4L),(-4L)},{5L,0xEFF4038FL,5L,0xC8EA268AL,(-1L)},{(-4L),0xF7B9C197L,0x946D202EL,0x3D12D6ACL,0xF7B9C197L},{2L,0xEFF4038FL,5L,0xEFF4038FL,2L}},{{0xF7B9C197L,0x3D12D6ACL,0x946D202EL,0xF7B9C197L,(-4L)},{(-1L),0xC8EA268AL,5L,0xEFF4038FL,5L},{(-4L),(-4L),0x4D03646FL,0x3D12D6ACL,(-4L)},{(-9L),0xEFF4038FL,(-9L),0xC8EA268AL,2L},{(-4L),0x946D202EL,0x946D202EL,(-4L),0xF7B9C197L},{(-1L),0xEFF4038FL,0L,0xEFF4038FL,(-1L)},{0xF7B9C197L,(-4L),0x946D202EL,0x946D202EL,(-4L)},{2L,0xC8EA268AL,(-9L),0xEFF4038FL,(-9L)},{(-4L),0x3D12D6ACL,0x4D03646FL,(-4L),(-4L)}},{{5L,0xEFF4038FL,5L,0xC8EA268AL,(-1L)},{(-4L),0xF7B9C197L,0x946D202EL,0x3D12D6ACL,0xF7B9C197L},{2L,0xEFF4038FL,5L,0xEFF4038FL,2L},{0xF7B9C197L,0x3D12D6ACL,0x946D202EL,0xF7B9C197L,0xF7B9C197L},{5L,5L,0L,0xC8EA268AL,0L},{0xF7B9C197L,0xF7B9C197L,0x3D12D6ACL,0x946D202EL,0xF7B9C197L},{5L,0xC8EA268AL,5L,5L,(-9L)},{0xF7B9C197L,0x4D03646FL,0x4D03646FL,0xF7B9C197L,(-10L)},{5L,0xC8EA268AL,(-1L),0xC8EA268AL,5L}}};
            if (((((0xBEL > (p_19 = (((safe_rshift_func_uint16_t_u_s((((g_317 = (((((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(1L, (g_298 = (((((l_3367 && 1L) == 65529UL) & (safe_lshift_func_int8_t_s_s(0xF3L, p_18))) | (0xB00FL > ((g_639 = ((((((((safe_rshift_func_int16_t_s_u(((g_486 < g_504[0][7][1]) > 0xB2L), 3)) == g_400) & l_3187) < p_19) | l_3519) , l_49[6]) & 4294967295UL) != g_203)) || 0x21E34445L))) == l_49[5])))), 5)) ^ g_1138) <= g_247) != 0x8D8C20F0L) | p_21)) , 0UL) <= l_3367), l_3519)) ^ 0x475E0D25L) >= p_20))) >= g_427[2]) <= p_21) <= p_21))
            return l_3519;
            else
            {
            }
safe_mod_func_uint16_t_u_u((g_2729[2][0] = (g_108 = l_3593[(g_503 + 2)][(g_503 + 8)][(g_503 + 3)])), (((safe_sub_func_int8_t_s_s((l_3184 = g_183[(g_503 + 6)]), (5UL & g_183[g_692]))) , 3UL) , 1L));
        }
    return g_3903;
}
static uint16_t func_23(int32_t p_24)
{
    uint16_t l_30 = 0x8DACL;
    return l_30;
}
int main (void)
{
    func_1();
}

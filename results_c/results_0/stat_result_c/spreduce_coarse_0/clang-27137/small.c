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
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{
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
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
}
static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
}
static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
}
static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
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
void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);static long __undefined;
static uint8_t g_9 = 0xC2L;
static int16_t g_13[7] = {6L,6L,6L,6L,6L,6L,6L};
static uint8_t g_34[1] = {255UL};
static int16_t g_35 = (-1L);
static uint32_t g_68 = 0x826FFEA1L;
static uint32_t g_76 = 0x0DA8F9E1L;
static uint8_t g_87 = 8UL;
static uint16_t g_98[5][5] = {{0x7EEBL,0xD5CEL,0xD5CEL,0x7EEBL,0xD5CEL},{0UL,0x4B89L,65529UL,0x4B89L,0UL},{0xD5CEL,0x7EEBL,0xD5CEL,0xD5CEL,0x7EEBL},{0UL,0x618CL,9UL,0x4B89L,9UL},{0x7EEBL,0x7EEBL,0x38F9L,0x7EEBL,0x7EEBL}};
static int8_t g_154 = 1L;
static uint16_t g_172 = 3UL;
static uint32_t g_184 = 4294967290UL;
static int32_t g_204 = 0xC3769B55L;
static int32_t g_240 = 0x022D0BABL;
static int32_t g_275 = (-1L);
static int16_t g_335 = 0x4348L;
static uint32_t g_352 = 0xA0F0610EL;
static uint32_t g_469 = 1UL;
static uint8_t g_472 = 0x82L;
static const int8_t g_496[4] = {(-5L),(-5L),(-5L),(-5L)};
static int32_t g_506 = 1L;
static int32_t g_573 = 1L;
static uint32_t g_759 = 2UL;
static int16_t g_897 = 2L;
static uint32_t g_982 = 9UL;
static uint32_t g_1138 = 0UL;
static int16_t g_1288 = 0x6F0FL;
static uint32_t g_1345 = 0UL;
static int16_t g_1352 = (-10L);
static uint32_t g_1368 = 0x7E530F86L;
static uint8_t g_1369 = 255UL;
static int32_t g_1370[3] = {3L,3L,3L};
static uint16_t g_1599 = 0x499AL;
static int16_t g_1684[1] = {1L};
static uint32_t g_1798[9][8] = {{0x56E2FFE9L,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x56E2FFE9L,18446744073709551615UL,0xDA781D62L,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,0xDA781D62L,18446744073709551615UL,0xDA781D62L,18446744073709551615UL,18446744073709551615UL,0xDA781D62L},{18446744073709551615UL,0xDA781D62L,0xDA781D62L,18446744073709551615UL,0x56E2FFE9L,18446744073709551615UL,0xDA781D62L,0xDA781D62L},{0xDA781D62L,0x56E2FFE9L,18446744073709551615UL,18446744073709551615UL,0x56E2FFE9L,0xDA781D62L,0x56E2FFE9L,18446744073709551615UL},{18446744073709551615UL,0x56E2FFE9L,18446744073709551615UL,0xDA781D62L,0xDA781D62L,18446744073709551615UL,0x56E2FFE9L,18446744073709551615UL},{18446744073709551615UL,0xDA781D62L,18446744073709551615UL,0xDA781D62L,18446744073709551615UL,18446744073709551615UL,0xDA781D62L,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,0xDA781D62L,18446744073709551615UL,0xDA781D62L,18446744073709551615UL,18446744073709551615UL,0xDA781D62L},{18446744073709551615UL,0xDA781D62L,0xDA781D62L,18446744073709551615UL,0x56E2FFE9L,18446744073709551615UL,0xDA781D62L,0xDA781D62L},{0xDA781D62L,0x56E2FFE9L,18446744073709551615UL,18446744073709551615UL,0x56E2FFE9L,0xDA781D62L,0x56E2FFE9L,18446744073709551615UL}};
static int32_t g_2043 = 1L;
static int8_t g_2422 = 0L;
static int32_t g_2440 = 0x5D5CCD00L;
static int8_t g_2467 = 0x0BL;
static int32_t g_2580[4][10] = {{(-6L),7L,(-6L),7L,(-6L),7L,(-6L),7L,(-6L),7L},{(-7L),7L,(-7L),7L,(-7L),7L,(-7L),7L,(-7L),7L},{(-6L),7L,(-6L),7L,(-6L),7L,(-6L),7L,(-6L),7L},{(-7L),7L,(-7L),7L,(-7L),7L,(-7L),7L,(-7L),7L}};
static uint8_t g_2852 = 0xF5L;
static int32_t g_2853[4][9][7] = {{{1L,8L,1L,(-2L),1L,0x9162827DL,0x2AEB18CDL},{0x22889FBDL,0xFE393A3EL,0x72689436L,1L,(-5L),0xA7638D47L,(-7L)},{(-7L),7L,0x2E60C645L,0x922280B4L,0x2CD7B01AL,0x9162827DL,0x165B162BL},{8L,0xBC24BBA0L,0xEF644D30L,0x29CDD46AL,(-7L),0x2E60C645L,0x3B7B7FB6L},{5L,0x2956CC64L,0x7E7AE4D9L,5L,0xBAC0718BL,(-10L),(-10L)},{0x922280B4L,(-5L),0x2E60C645L,0x2956CC64L,0x5455B5EAL,0x29CDD46AL,0x1E7F4047L},{7L,0x22889FBDL,5L,0L,0xBC24BBA0L,0x2CD7B01AL,0x2E60C645L},{0x45A3EBD2L,1L,0L,(-7L),0xFE393A3EL,0xDAA941AEL,(-7L)},{0xE2A7F447L,0x2CD7B01AL,(-8L),(-7L),1L,0x037CD66FL,0x165B162BL}},{{0xEF644D30L,3L,(-4L),0L,1L,0x5455B5EAL,0xB22D563CL},{8L,0xE2A7F447L,0L,0x2956CC64L,0x22889FBDL,0xCB7BB8D8L,1L},{0x2956CC64L,0L,1L,5L,(-8L),0x57A8756FL,0x45A3EBD2L},{0x3715B254L,0L,4L,4L,0L,0x3715B254L,(-2L)},{3L,0xECFAD87DL,0x45A3EBD2L,0xEF644D30L,1L,(-10L),1L},{(-8L),0xCB7BB8D8L,0xDB9C0739L,1L,0x4EB927D7L,0xA7638D47L,0xEF644D30L},{0x7E7AE4D9L,0xECFAD87DL,0xCB7BB8D8L,(-2L),0x4B49E98FL,0xECEDB848L,4L},{0x57A8756FL,0L,(-2L),3L,0L,(-1L),0x57A8756FL},{0xECB0BC40L,1L,0L,0x2E60C645L,(-2L),0xA7638D47L,0x3B7B7FB6L}},{{0L,0x4B49E98FL,0L,0L,(-1L),0x4EB927D7L,1L},{1L,0xB22D563CL,0x2BD64D8CL,7L,0x2CD7B01AL,0x45A3EBD2L,0x9162827DL},{0xB22D563CL,0xDB9C0739L,0L,(-5L),0L,0L,0x9162827DL},{0x73EF0EC5L,1L,0xCB7BB8D8L,(-10L),0x9162827DL,(-2L),1L},{1L,1L,8L,5L,8L,8L,0x3B7B7FB6L},{0x9162827DL,(-8L),0x3715B254L,0L,0L,(-1L),0x57A8756FL},{(-2L),0x3B7B7FB6L,4L,0L,0L,0L,4L},{0x2AEB18CDL,0x2AEB18CDL,0xE2A7F447L,7L,0x5455B5EAL,8L,0xEF644D30L},{0x9162827DL,0xA08F48A9L,0xD4E37EFFL,0xECFAD87DL,(-4L),4L,1L}},{{(-4L),0L,0x72689436L,0x4EB927D7L,0x5455B5EAL,0L,(-2L)},{(-1L),0x29CDD46AL,(-1L),3L,0L,1L,3L},{0xB22D563CL,1L,0x7F6BF62EL,0x2AEB18CDL,0L,(-5L),0x2E60C645L},{0xA7638D47L,0L,0xAB9529BDL,0L,8L,(-4L),0L},{(-5L),(-8L),1L,0xEF644D30L,0x9162827DL,1L,7L},{0xECB0BC40L,(-2L),0xDAA941AEL,8L,0L,(-10L),(-5L)},{0xAB9529BDL,0x3B7B7FB6L,0xDAA941AEL,0xAB9529BDL,0x2CD7B01AL,0L,(-10L)},{0xEF644D30L,7L,1L,0x3B7B7FB6L,(-1L),0xC093BDB0L,5L},{(-8L),0xA7638D47L,0xAB9529BDL,(-4L),(-2L),0xDB9C0739L,0L}}};
static uint16_t g_3109[3] = {0xAEF2L,0xAEF2L,0xAEF2L};
static int8_t g_3172 = 0xC1L;
static uint8_t g_3193 = 0UL;
static uint16_t g_3317 = 1UL;
static uint32_t g_3463 = 0x33A4172FL;
static int32_t g_3486 = 0L;
static int8_t g_3600 = 0xA8L;
static int32_t g_3935[8][5] = {{8L,0x6D7DF5BFL,0xACB7A77CL,0xCFF4EF85L,0x6D7DF5BFL},{(-1L),0xACB7A77CL,0xACB7A77CL,(-1L),0xCFF4EF85L},{0L,(-1L),(-1L),0x6D7DF5BFL,0x6D7DF5BFL},{8L,(-1L),8L,0xCFF4EF85L,0xACB7A77CL},{8L,(-1L),(-9L),8L,(-9L)},{8L,8L,0x6D7DF5BFL,0xACB7A77CL,0xCFF4EF85L},{(-1L),0xCFF4EF85L,(-9L),(-9L),0xCFF4EF85L},{0xCFF4EF85L,(-1L),(-1L),0xCFF4EF85L,(-9L)}};
static uint8_t g_4423[7] = {250UL,250UL,250UL,250UL,250UL,250UL,250UL};
static uint8_t g_4475 = 0x33L;
static int8_t g_4689 = 9L;
static int32_t g_5210[1] = {(-1L)};
static const int32_t g_5225 = 0xAF6272FEL;
static int32_t g_5446[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
static int16_t g_5512 = (-9L);
static int16_t g_5844 = 0xA81BL;
static uint8_t g_6029 = 1UL;
static int16_t g_6428 = 2L;
static uint32_t g_6771 = 7UL;
inline static int8_t func_1(void);
inline static int32_t func_2(uint8_t p_3, uint8_t p_4, uint32_t p_5, int32_t p_6);
static uint16_t func_15(int16_t p_16, uint8_t p_17);
inline static int16_t func_18(int32_t p_19, uint32_t p_20, const uint16_t p_21);
inline static uint32_t func_28(uint32_t p_29, int32_t p_30, int32_t p_31, const uint16_t p_32);
static uint8_t func_37(uint16_t p_38, int32_t p_39, int32_t p_40, int8_t p_41, const int8_t p_42);
inline static uint16_t func_43(int32_t p_44);
static uint16_t func_51(uint32_t p_52);
inline static int8_t func_1(void)
{
    int32_t l_10 = 0xE30F5872L;
    int32_t l_33 = 0xBF5F40E1L;
    int32_t l_5910 = 0L;
    int16_t l_5913 = 0x1E08L;
    const int32_t l_6074 = 2L;
    uint32_t l_6137 = 0x0644BDCEL;
    uint16_t l_6147 = 9UL;
    uint32_t l_6167 = 0x19A4727FL;
    int8_t l_6823 = (-1L);
    l_33 = func_2(((safe_div_func_int16_t_s_s(((((g_13[4] = ((l_10 = g_9) , (safe_sub_func_int8_t_s_s(l_10, 5L)))) <= (!((func_15((g_9 > (func_18((safe_rshift_func_uint8_t_u_u(g_9, 7)), g_9, (((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_9, 3)), (func_28(l_33, g_9, g_9, g_9) , 1UL))) <= 1UL) && g_172)) | l_33)), l_33) <= 0x5718L) , g_759))) < l_33) ^ 4294967295UL), 0x0918L)) == l_33), g_1798[4][6], g_5225, g_496[2]);
        int32_t l_5943 = 0x3E7952D3L;
        int32_t l_5986 = 0x2FC02A58L;
        int32_t l_6136[4];
        int16_t l_6152 = (-9L);
        int32_t l_6280 = 0L;
        int32_t l_6479[2];
        int8_t l_6486 = 0x18L;
        uint16_t l_6500 = 0x1711L;
        int i, j, k;
        for (i = 0; i < 4; i++)
            {}
        for (i = 0; i < 2; i++)
            l_6479[i] = (-1L);
                    if (((l_33 = g_1798[5][2]) > (-1L)))
        {
        }
        else
        {
            int32_t l_6041 = 0x745A8996L;
            for (l_5913 = (-28); (l_5913 < (-7)); l_5913 = safe_add_func_int32_t_s_s(l_5913, 8))
            {
            }
            for (g_1345 = 0; (g_1345 > 38); g_1345 = safe_add_func_uint16_t_u_u(g_1345, 7))
            {
            }
            for (; (g_506 >= 0); g_506 -= 1)
            {
                                                                                       if ((!((g_2043<=1)) || ((g_3172<=1) && (g_1345 > g_3172))) )
                    if ((l_6486 < l_6041))
                    { 
                               int32_t BGCGCl_6280 = (~(((~(((((g_172 + (~(l_6823))) - (~(((~(l_6486)) + (~(l_6137)))))) | (~((~(g_573))))) && ((~((g_1369 && l_5913))) | (~(((~(g_87)) && g_335))))))) - (~(l_6280)))));
uint32_t BGCGCbl_6137 = (~((((~(((~(l_6280)) + g_172))) / ((g_335 & BGCGCl_6280) - (g_87 ^ l_6137))) && (~(((l_6486 ^ l_6823) & (~((l_5913 / (g_1369 && g_573))))))))));
int8_t BGCGCcl_6823 = (~((((~((~(((((g_87 + l_6823) + (~(l_6137))) | BGCGCl_6280) >> g_172))))) - (((~(g_335)) & (~((~(l_5913))))) + (((~(l_6280)) ^ g_573) & ((~((~(l_6486)))) & (~(BGCGCbl_6137)))))) + g_1369)));
int8_t BGCGCdl_6486 = (~(((~((((BGCGCcl_6823 - (~(g_87))) << (BGCGCl_6280 & (~((l_5913 & (~(l_6823))))))) && (~(((~((((l_6280 | BGCGCbl_6137) >> l_6486) && (~(((~((~(g_573)))) >> (g_335 / g_1369))))))) + g_172)))))) + (~((~(l_6137)))))));
int16_t BGCGCel_5913 = (~(((((l_6280 ^ ((l_6823 - g_1369) | ((~(g_172)) - (l_6486 && BGCGCdl_6486)))) ^ (BGCGCcl_6823 + (l_5913 && (~(g_87))))) | ((BGCGCbl_6137 / (~(BGCGCl_6280))) >> (~((~((g_573 && l_6137))))))) ^ g_335)));
uint16_t BGCGCfg_172 = (~(((~((((~((g_87 && g_335))) + (l_5913 - ((BGCGCbl_6137 | ((g_172 - BGCGCdl_6486) & BGCGCcl_6823)) & ((l_6823 && (BGCGCel_5913 >> BGCGCl_6280)) | (l_6486 - g_573))))) / (~((~((~(l_6137))))))))) ^ ((~((~(g_1369)))) | (~((~(l_6280))))))));
l_5913 = (~(((~((~(((((~((~((l_6280 & l_5913))))) | g_172) - (~(BGCGCdl_6486))) && BGCGCl_6280))))) ^ ((~(((~((~((~(l_6486)))))) & ((~(((~(((BGCGCfg_172 << l_6823) - (~((~(g_573))))))) | (BGCGCel_5913 & BGCGCcl_6823)))) + (l_6137 >> ((~(g_1369)) && BGCGCbl_6137)))))) | (g_87 + g_335)))));
                    }
            }
        }
            for (; (g_172 <= 0); g_172 += 1)
            {
            }
;
        if ((g_2853[0][6][6] = (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((((l_5910 == 0x27A1L) <= g_2852) , (((safe_lshift_func_int8_t_s_u(l_6486, 7)) || (safe_sub_func_int16_t_s_s((~((safe_add_func_uint8_t_u_u(((l_6152 >= (safe_add_func_uint16_t_u_u(0xE3AAL, (((g_5446[5] == (safe_lshift_func_uint8_t_u_u(g_68, (g_4475 = ((safe_lshift_func_int16_t_s_s((l_5943 = (safe_lshift_func_int16_t_s_u((-3L), g_1368))), l_6147)) , g_1288))))) < g_2853[0][6][6]) , 65534UL)))) <= g_2580[3][7]), 0UL)) == l_33)), g_204))) , g_1798[5][2])), l_6500)), g_4689))))
        {
            uint8_t l_6518 = 0xF6L;
            int32_t l_6726 = 1L;
            int i, j;
            for (i = 0; i < 10; i++)
                while ((l_5913 > l_6726) )
l_5913 -= 1;
            if ((safe_mod_func_int32_t_s_s(((safe_div_func_int8_t_s_s(0x0EL, l_6167)) & (g_98[0][1] != (g_897 = (safe_sub_func_int16_t_s_s(((l_6136[1] , ((((!g_496[2]) != (l_5986 = (((((g_4689 = (safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u((((safe_unary_minus_func_uint32_t_u(((g_3193 = l_5986) == (safe_add_func_int32_t_s_s(((65534UL > (((~(l_6136[1] , ((((l_6518 && g_469) ^ g_3935[3][0]) <= l_6074) | g_897))) & l_5910) >= l_6518)) && 0x470D685FL), l_6518))))) != g_3172) < g_1798[6][0]), 0UL)) & 4294967287UL), 0)) < g_3486) | l_5913), l_6479[0]))) && 0xE4L) > g_352) == g_9) != g_469))) <= g_1684[0]) != 0xDCL)) & 1UL), g_1370[2]))))), g_13[4])))
            {
            }
            else
            for (; (g_1368 >= 30); ++g_1368)
                {
                }
        }
        else
        {
        }
}
inline static int32_t func_2(uint8_t p_3, uint8_t p_4, uint32_t p_5, int32_t p_6)
{
    return p_4;
}
static uint16_t func_15(int16_t p_16, uint8_t p_17)
{
    int32_t l_4564 = (-8L);
    int32_t l_4584 = 9L;
    int32_t l_4585 = (-1L);
    int32_t l_4586 = 1L;
lbl_5265:
    if (p_16)
    {
        uint32_t l_4603[2][5] = {{4294967295UL,0xDB78D99EL,4294967295UL,0xDB78D99EL,4294967295UL},{4294967295UL,0xDB78D99EL,4294967295UL,0xDB78D99EL,4294967295UL}};
        int32_t l_4604 = 0xF5237A90L;
        l_4564 = (safe_add_func_int32_t_s_s((l_4604 = ((p_16 < g_1798[5][2]) && (((l_4585 & ((safe_lshift_func_uint8_t_u_u(((((p_17 == (((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((g_1684[0] = ((g_1368 = (safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u((((p_16 , l_4584) <= (safe_add_func_int32_t_s_s(l_4603[1][0], (g_3486 == 0x68L)))) , p_17), 7)) != 0x8D6DE5E7L), 2)), 0x79084F30L))) & p_16)), 65532UL)), 8)) && l_4586) && 0x1FL)) & g_9) && 1L) != l_4585), g_1352)) < (-1L))) && l_4603[0][3]) ^ g_897))), g_1352));
        return g_897;
    }
    else
    {
    }
}
inline static int16_t func_18(int32_t p_19, uint32_t p_20, const uint16_t p_21)
{
        return p_21;
}
inline static uint32_t func_28(uint32_t p_29, int32_t p_30, int32_t p_31, const uint16_t p_32)
{
    uint16_t l_45 = 0x074FL;
    int32_t l_46 = 1L;
    int32_t l_4528 = 0xD2BBE338L;
    g_34[0] = 0xD77CCCAEL;
    l_4528 = (((+(g_35 & (p_31 = g_35))) >= func_37(func_43((l_45 != (l_46 = g_34[0]))), (g_1798[6][5] , g_1798[5][2]), ((safe_div_func_int16_t_s_s((((p_30 < (safe_add_func_int16_t_s_s(0x82FEL, p_30))) != 0x76F37551L) , l_4528), 0x6DD7L)) || g_3486), g_1798[5][2], g_496[2])) < g_9);
}
static uint8_t func_37(uint16_t p_38, int32_t p_39, int32_t p_40, int8_t p_41, const int8_t p_42)
{
    return g_1288;
}
inline static uint16_t func_43(int32_t p_44)
{
    int32_t l_3204[2];
    int32_t l_3209 = 0x374484A8L;
    int i, j;
                    for (i = 0; i < 2; i++)
        l_3204[i] = 0x3FE78DE6L;
    for (; i < 6; i++)
        { 
                    }
                    lbl_3688:
    g_1370[2] = ((g_34[0] ^ (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(func_51(p_44), (0x71021F5EL != 4294967294UL))) >= 0L), 2))) & (g_1798[3][3] | (((((safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((l_3204[1] < ((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(0x4199L, g_9)), 0x79L)) ^ g_35)) != g_573) , 3L), p_44)), 1UL)) | l_3209) >= l_3209) || l_3209) <= p_44)));
                    return g_76;
}
static uint16_t func_51(uint32_t p_52)
{
    uint16_t l_1721 = 0xA004L;
    int32_t l_1734[5];
    int8_t l_1774 = (-1L);
    int32_t l_1865[2];
    int16_t l_2072 = 0x44B4L;
    int32_t l_2508 = 0x35A8E68AL;
    uint16_t l_2938 = 0x1C58L;
                    ;
lbl_2626:
    if (p_52)
    for (; (g_759 != 13); ++g_759)
        for (g_240 = 0; (g_240 <= 4); g_240 += 1)
                {
                }
    else
                    if ((((safe_sub_func_uint32_t_u_u((((l_2072 & ((l_1734[1] = g_759) > (safe_lshift_func_uint16_t_u_u(p_52, 9)))) == (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s(g_1369, 0x8309L)) || (safe_lshift_func_int16_t_s_u(p_52, p_52))), 15)), ((safe_div_func_uint8_t_u_u((((p_52 & (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((g_1138 == g_1352) && g_1288), p_52)), 0UL))) , l_1865[1]) | l_1774), (-6L))) , g_1599)))) , p_52), p_52)) < 0xBF3DF452L) , p_52))
    {
    }
    else
    {
    }
                                   int32_t BgBgBgl_2508 = (~(((((~((~(((~(l_2938)) | g_469))))) * ((~(g_2043)) % l_2508)) | (~(((~((~((~(g_352)))))) && (g_1288 % (l_1721 % g_759)))))) && ((~((~((~(g_35)))))) << g_240))));
uint32_t BgBgBhg_469 = (~(((~((BgBgBgl_2508 * (~(((g_352 * (~((~((g_469 ^ l_2508)))))) % l_1721)))))) ^ (~(((~(l_2938)) & (~(((~((g_240 + (~((~(g_1288))))))) ^ (g_35 | (g_2043 + g_759)))))))))));
int32_t BgBgBig_240 = (~(((~(((~(((~((g_1288 % g_240))) && (~(g_352))))) & (~((((~(g_759)) + BgBgBgl_2508) | (l_2938 ^ (l_2508 ^ g_35)))))))) + (~(((BgBgBhg_469 + (g_2043 * g_469)) & (~((~((~((~((~(l_1721))))))))))))))));
uint32_t BgBgBjg_759 = (~(((~(((g_1288 & ((~(g_35)) ^ (~(BgBgBgl_2508)))) && (~(g_352))))) & ((~((~((g_469 * l_2508))))) & ((~((~(l_2938)))) % ((g_759 * (g_240 | l_1721)) % ((~((g_2043 + BgBgBig_240))) | BgBgBhg_469)))))));
int32_t BgBgBkg_2043 = (~((((~((~(((~(((g_1288 && l_2938) | (g_240 ^ (BgBgBgl_2508 && (~(BgBgBjg_759))))))) + ((~(l_2508)) & (~(l_1721)))))))) && ((~((g_469 ^ (g_2043 && BgBgBhg_469)))) ^ BgBgBig_240)) & ((~(((~(g_35)) % g_759))) + (~(g_352))))));
uint16_t BgBgBll_2938 = (~(((~((BgBgBig_240 & (BgBgBkg_2043 * (~(l_2938)))))) & ((~((l_2508 | (l_1721 & ((~(g_240)) * BgBgBjg_759))))) % ((~(((~((((~(g_469)) | ((g_759 && BgBgBhg_469) | BgBgBgl_2508)) % g_2043))) % g_35))) % ((~(g_1288)) * g_352))))));
                                   if(((BgBgBll_2938 > g_2043) && BgBgBig_240)){
BgBgBjg_759 = g_759;
g_2043 = (~((((~((~(((~(BgBgBll_2938)) && (g_2043 && (~(BgBgBhg_469)))))))) >> ((~((l_2508 % BgBgBjg_759))) && (((~(BgBgBig_240)) && (g_352 + ((BgBgBkg_2043 % (~((l_1721 % g_1288)))) ^ g_35))) * (~((~((l_2938 & g_240)))))))) && (~((((~((~((~(g_759)))))) & (~(g_469))) & BgBgBgl_2508))))));
}
                    return p_52;
}
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    crc32_gentab();
    func_1();
    transparent_crc(g_4689, "g_4689", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

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
static int64_t
(safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807LL)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807LL -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807LL))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
(safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807LL -1)) && (si2 == (-1)))) ?
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
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
(safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ui1 + ui2;
}
static uint64_t
(safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ui1 - ui2;
}
static uint64_t
(safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
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
 crc32_byte ((val>>0) & 0xff);
}
static void
transparent_crc (uint64_t val, char* vname, int flag)
{
 crc32_8bytes(val);
}
static long __undefined;
static volatile int32_t g_3 = (-9L);
static int32_t g_4[2][10] = {
  {0xC01D4C3FL,
   0L,
   0xC01D4C3FL,
   0xC01D4C3FL,
   0L,
   0xC01D4C3FL,
   0xC01D4C3FL,
   0L,
   0xC01D4C3FL,
   0xC01D4C3FL},
  {0L,
   0L,
   1L,
   0L, 0L,
   1L, 0L,
   0L, 1L, 0L}
};
static int8_t g_56 = 1L;
static uint32_t g_75 = 0xDC6F3D13L;
static int32_t g_97 = 0xD68C9157L;
static int32_t g_98 = 0xBD6B4620L;
static uint64_t g_99[4] = {
  0x819422B6A99605DBLL,
  0x819422B6A99605DBLL,
  0x819422B6A99605DBLL,
  0x819422B6A99605DBLL
};
static uint16_t g_178 = 1UL;
static int16_t g_189 = 0L;
static int32_t g_208[3] = {
  (-4L),
  (-4L),
  (-4L)
};
static int16_t g_209 = 0L;
static uint8_t g_236 = 0x61L;
static uint32_t g_280 = 18446744073709551615UL;
static uint8_t g_357 = 0xD8L;
static uint8_t g_359 = 1UL;
static int64_t g_455 = (-7L);
static int16_t g_540[1][1][10] = {
  {{0xA42FL, 0xA42FL, 0xA42FL, 0xA42FL, 0xA42FL, 0xA42FL, 0xA42FL, 0xA42FL,
    0xA42FL, 0xA42FL}}
};
static int32_t g_575 = 0xFE5494DAL;
static int16_t g_655 = 0L;
static int32_t g_675 = 0x77B6C026L;
static uint32_t g_703 = 0xFD21AA41L;
static uint64_t g_806 = 0UL;
static uint32_t g_897 = 0x4F78D624L;
static int32_t g_902 = 1L;
static int32_t g_921[8][10][1] = {
  {{9L}, {0x6DD76205L}, {0x26D23D1FL}, {1L}, {9L}, {1L}, {0x26D23D1FL},
   {0x6DD76205L}, {9L}, {0x6DD76205L}}, {{0x26D23D1FL}, {1L}, {9L}, {1L},
      {0x26D23D1FL}, {0x6DD76205L}, {9L},
      {0x6DD76205L}, {0x26D23D1FL}, {1L}},
{{9L}, {1L}, {0x26D23D1FL}, {0x6DD76205L}, {9L}, {0x6DD76205L}, {0x26D23D1FL}, {1L}, {9L}, {1L}}, {{0x26D23D1FL}, {0x6DD76205L}, {9L},
      {0x6DD76205L}, {0x26D23D1FL}, {1L}, {9L},
      {1L}, {0x26D23D1FL}, {0x6DD76205L}}, {{9L},
         {0x6DD76205L},
         {0x26D23D1FL},
         {1L},
         {9L},
         {1L},
         {0x26D23D1FL},
         {0x6DD76205L},
         {9L},
         {0x6DD76205L}},
{{0x26D23D1FL}, {1L}, {9L}, {1L}, {0x26D23D1FL}, {0x6DD76205L}, {9L}, {0x6DD76205L}, {0x26D23D1FL}, {1L}}, {{9L}, {1L}, {0x26D23D1FL},
        {0x6DD76205L}, {9L}, {0x6DD76205L},
        {0x26D23D1FL}, {1L}, {9L}, {1L}},
{{0x26D23D1FL}, {0x6DD76205L}, {9L}, {0x6DD76205L}, {0x26D23D1FL}, {1L}, {9L}, {1L}, {0x26D23D1FL}, {0x6DD76205L}}
};
static uint16_t g_922 = 65535UL;
static uint32_t g_983 = 0xDE5240FBL;
static uint8_t g_1060 = 0xC8L;
static uint32_t g_1081[1][10] = {
  {0x7202682FL,
   0x7202682FL,
   0x7202682FL,
   0x7202682FL,
   0x7202682FL,
   0x7202682FL,
   0x7202682FL,
   0x7202682FL,
   0x7202682FL,
   0x7202682FL}
};
static int16_t g_1182[3] = {
  0xE348L,
  0xE348L,
  0xE348L
};
static int32_t g_1272 = 0x41AEA787L;
static uint8_t g_1394 = 0x36L;
static int64_t g_1395 = 4L;
static uint32_t g_1513 = 1UL;
static int8_t g_1551 = 0xAFL;
static uint16_t g_1678 = 0x9F7CL;
static uint8_t g_1863 = 0UL;
static int32_t g_1923 = 0x2A8A2152L;
static uint64_t g_2227 = 0UL;
static uint32_t g_2241 = 0x610B7749L;
static int16_t g_2519 = (-6L);
static uint64_t g_2599 = 3UL;
static int8_t g_2791 = 0xADL;
static int8_t g_2945 = (-1L);
static int16_t g_2974 = 0x061DL;
static int8_t g_3175 = 0x31L;
static int32_t g_3331 = (-4L);
static uint32_t g_3487 = 0x2836864CL;
static int64_t g_3807 = (-7L);
static volatile int32_t g_3898 = (-1L);
static int16_t g_3950 = 0xD215L;
static volatile uint16_t g_4447 = 0UL;
static int8_t g_4576[3] = {
  0xA0L,
  0xA0L,
  0xA0L
};
static uint8_t g_4669 = 0x4FL;
static uint32_t g_4880 = 0xA38F5E48L;
static uint32_t g_5019 = 0xBFA07EA0L;
static int64_t func_1 (void);
static
  int8_t
  func_13
  (uint8_t p_14, int32_t p_15, uint32_t p_16, int32_t p_17, uint16_t p_18);
static int32_t func_20 (uint32_t p_21, uint8_t p_22, int16_t p_23);
static int64_t
func_1 (void)
{
  uint32_t l_2[8][8][4] =
  {
    {
      {
      0x37F4A1D2L, 0x5AD058BBL, 0xA7C6DD3EL, 0xEA0627E8L},
      {
      0x4D0F4F23L, 0xD013D0BBL, 0xD013D0BBL, 0x4D0F4F23L},
      {
      0x1DED6804L, 0x45559507L, 0xBDA7FE64L, 1UL},
      {
      0x89276496L, 0x3F8DE905L, 0xC4B4E126L, 18446744073709551608UL},
      {
      0x2B2FAA96L, 0x81606DC0L, 18446744073709551615UL,
   18446744073709551608UL},
      {
      0x1B36C938L, 0x3F8DE905L, 0xAAAEB9AEL, 1UL},
      {
      0x9BEB0647L, 0x45559507L, 1UL, 0x4D0F4F23L},
      {
    0x14B58E17L, 0xD013D0BBL, 5UL, 0xEA0627E8L}},
    {
      {
      0UL, 0x5AD058BBL, 0xE62699FFL, 0xBDA7FE64L},
      {
      1UL, 0x14B58E17L, 0x7AF2C9A1L, 9UL},
      {
      0x799040C3L, 0xA898CBDBL, 0xAAAEB9AEL, 0x4A90611BL},
      {
      0UL, 0UL, 18446744073709551615UL, 0xAAAEB9AEL},
      {
      1UL, 0x4A90611BL, 0x30B91EE4L, 0x89276496L},
      {
      0x89276496L, 0x582F80C3L, 5UL, 0x6F263393L},
      {
      0x81606DC0L, 0x14B58E17L, 0UL, 0xE62699FFL},
      {
    0x9BEB0647L, 0x3F6085E0L, 0xA7C6DD3EL, 0x45559507L}},
    {
      {
      18446744073709551615UL, 0UL, 18446744073709551615UL, 0x4D0F4F23L},
      {
      0x4FF5452FL, 0x89276496L, 0x9F3FAA32L, 18446744073709551615UL},
      {
      0x89276496L, 0x3F6085E0L, 9UL, 0UL},
      {
      0x71A05132L, 0x81606DC0L, 0xD013D0BBL, 0x6F263393L},
      {
      0xAAAEB9AEL, 0x13BF58AAL, 0xAAAEB9AEL, 0UL},
      {
      0x37F4A1D2L, 0x4A90611BL, 1UL, 0x4D0F4F23L},
      {
      0x4D996497L, 1UL, 5UL, 0x4A90611BL},
      {
    0UL, 18446744073709551615UL, 5UL, 0x9F3FAA32L}},
    {
      {
      0x4D996497L, 0x14B58E17L, 1UL, 0xDDAE974CL},
      {
      0x37F4A1D2L, 18446744073709551615UL, 0xAAAEB9AEL, 0xEA0627E8L},
      {
      0x1355FFF8L, 0xAAAEB9AEL, 0xA7C6DD3EL, 0x1355FFF8L},
      {
      18446744073709551615UL, 18446744073709551611UL,
   18446744073709551615UL, 0x1B36C938L},
      {
      0UL, 0xBCA63185L, 18446744073709551610UL, 18446744073709551615UL},
      {
      1UL, 0UL, 0x383C67EEL, 0UL},
      {
      5UL, 5UL, 18446744073709551608UL, 0x1B36C938L},
      {
    0x9F3FAA32L, 0x7DFE4D9EL, 0x0B2811FFL, 5UL}},
    {
      {
      1UL, 0xAAAEB9AEL, 0xB839BF5BL, 0xA7C6DD3EL},
      {
      0UL, 0x1DED6804L, 0x3F8DE905L, 0xA898CBDBL},
      {
      0xD013D0BBL, 1UL, 0x7DFE4D9EL, 0xAB3E90A6L},
      {
      0x30B91EE4L, 0x4FF5452FL, 0x1355FFF8L, 0x383C67EEL},
      {
      0xE62699FFL, 0x1B36C938L, 0x37F4A1D2L, 5UL},
      {
      0xD013D0BBL, 0x383C67EEL, 0x5C8100C4L, 0UL},
      {
      0x0B2811FFL, 0x81606DC0L, 0xB839BF5BL, 0xB839BF5BL},
      {
    0UL, 0UL, 0x799040C3L, 0xFF15CC7CL}},
    {
      {
      0x9F3FAA32L, 18446744073709551614UL, 0x1355FFF8L,
   18446744073709551611UL},
      {
      0x418A5273L, 0UL, 0x383C67EEL, 0x1355FFF8L},
      {
      1UL, 0UL, 0x3F6085E0L, 18446744073709551611UL},
      {
      0UL, 18446744073709551614UL, 0x77904128L, 0xFF15CC7CL},
      {
      0x7AF2C9A1L, 0UL, 0xA7C6DD3EL, 0xB839BF5BL},
      {
      5UL, 0x81606DC0L, 18446744073709551608UL, 0UL},
      {
      0xBDA7FE64L, 0x383C67EEL, 0UL, 5UL},
      {
    1UL, 0x1B36C938L, 0UL, 0x383C67EEL}},
    {
      {
      0UL, 0x4FF5452FL, 0x5AD058BBL, 0xAB3E90A6L},
      {
      18446744073709551615UL, 1UL, 0UL, 0xA898CBDBL},
      {
      9UL, 0x1DED6804L, 0x1355FFF8L, 0xA7C6DD3EL},
      {
      5UL, 0xAAAEB9AEL, 0x4D0F4F23L, 5UL},
      {
      18446744073709551615UL, 0x7DFE4D9EL, 0x77904128L, 0x1B36C938L},
      {
      0x0B2811FFL, 5UL, 18446744073709551610UL, 0UL},
      {
      1UL, 0UL, 0x9BEB0647L, 18446744073709551615UL},
      {
    5UL, 0xBCA63185L, 0x1355FFF8L, 0x1B36C938L}},
    {
      {
      0xC4B4E126L, 18446744073709551611UL, 0x0B2811FFL, 0x1355FFF8L},
      {
      0UL, 0xAAAEB9AEL, 0x13BF58AAL, 0xAAAEB9AEL},
      {
      0UL, 0x58ED0BD2L, 0x5C8100C4L, 0xA898CBDBL},
      {
      18446744073709551614UL, 0UL, 0x7DFE4D9EL, 18446744073709551610UL},
      {
      0xE62699FFL, 0x4FF5452FL, 18446744073709551608UL, 0x71DBCABEL},
      {
      0xE62699FFL, 0UL, 0x7DFE4D9EL, 5UL},
      {
      18446744073709551614UL, 0x71DBCABEL, 0x5C8100C4L, 0x0B2811FFL},
      {
  0UL, 0x81606DC0L, 0x13BF58AAL, 0x582F80C3L}}};
  uint8_t l_19 = 4UL;
  int32_t l_4768[7][9][3] =
  {
    {
      {
      0x6F93F8E4L, 0L, 0L},
      {
      0xBCED9506L, (-1L), 1L},
      {
      0x407BAE69L, 0x8030389FL, 9L},
      {
      (-1L), 6L, 2L},
      {
      (-1L), (-9L), 0x19A92BE5L},
      {
      1L, 0xE3332CFCL, 1L},
      {
      (-1L), 0x6F93F8E4L, 0x08E852D4L},
      {
      0xDD32B7ABL, 0L, 0x9DE17132L},
      {
    0x381A88EDL, 0xCD5F16A9L, 0xB5B1B244L}},
    {
      {
      0xE3332CFCL, 0x86998E08L, 0xDB8DC516L},
      {
      0xB5B1B244L, 0x08E852D4L, 0xA407A085L},
      {
      0xAB96A36AL, 0xAB96A36AL, 0x4529A934L},
      {
      0L, (-9L), 0L},
      {
      0x432A9120L, (-1L), 0x063C23FDL},
      {
      (-1L), 0x1C1793E0L, (-6L)},
      {
      (-7L), 0x432A9120L, 0x063C23FDL},
      {
      1L, 0L, 0L},
      {
    (-5L), 8L, 0L}},
    {
      {
      0x19A92BE5L, 4L, 1L},
      {
      1L, (-5L), 0xF28FA565L},
      {
      0x407BAE69L, (-9L), (-10L)},
      {
      0L, 0x2E05679EL, 0x4529A934L},
      {
      0xCD5F16A9L, 0x08E852D4L, 0L},
      {
      0x55D20815L, 0x349578D6L, 8L},
      {
      (-6L), 0xAFF17ACDL, 0x407BAE69L},
      {
      1L, (-1L), 1L},
      {
    (-4L), 0x239DFD81L, (-1L)}},
    {
      {
      0xC6F15672L, (-1L), 0L},
      {
      (-9L), (-1L), 0xAFF17ACDL},
      {
      9L, 8L, 0L},
      {
      (-9L), 0L, 0L},
      {
      0xC6F15672L, 0xDB8DC516L, 8L},
      {
      (-4L), (-6L), (-9L)},
      {
      1L, 0xD4428E3AL, 0x432A9120L},
      {
      (-6L), 0L, 0xA407A085L},
      {
    0x55D20815L, (-7L), 0xDCE8B061L}},
    {
      {
      0xCD5F16A9L, 0xA407A085L, 0x19A92BE5L},
      {
      0L, (-7L), 6L},
      {
      0x407BAE69L, 0xDF137B5EL, (-1L)},
      {
      1L, 0xC6F15672L, 0xC6F15672L},
      {
      0x19A92BE5L, 1L, 0x1C1793E0L},
      {
      (-5L), 0xDCE8B061L, 0xF5F490A1L},
      {
      1L, 0x8030389FL, (-7L)},
      {
      (-7L), 1L, (-5L)},
      {
    (-1L), 0x8030389FL, 0x6F93F8E4L}},
    {
      {
      0x432A9120L, 0xDCE8B061L, 1L},
      {
      6L, 1L, 0x90AEB8D0L},
      {
      0x86998E08L, 0xC6F15672L, 0xC83337E4L},
      {
      (-10L), 0xDF137B5EL, 0x239DFD81L},
      {
      2L, (-7L), 0xD4428E3AL},
      {
      4L, 0xA407A085L, 3L},
      {
      (-1L), (-7L), 0x8892F792L},
      {
      0xDF137B5EL, 0L, 0xCD5F16A9L},
      {
    0x8892F792L, 0xD4428E3AL, 8L}},
    {
      {
      (-6L), (-6L), 0xF33BD556L},
      {
      1L, 0xDB8DC516L, (-1L)},
      {
      (-1L), 0L, (-6L)},
      {
      0xE3332CFCL, 8L, (-7L)},
      {
      (-6L), (-1L), (-6L)},
      {
      8L, (-1L), (-1L)},
      {
      0x60180667L, 0x239DFD81L, 0xF33BD556L},
      {
      0xDCE8B061L, (-1L), 8L},
      {
  0xB5B1B244L, 0xAFF17ACDL, 0xCD5F16A9L}}};
  int32_t l_4780 = (-1L);
  uint16_t l_4839 = 0x2432L;
  int32_t l_4872[3];
  int32_t l_4873[6][9] =
  {
    {
    0x8FF09EB2L, 5L, 0xE715FA55L, 5L, 0xCD7D07BDL, 3L, 3L, 0xCD7D07BDL, 5L},
    {
    0x8FF09EB2L,
 0x74158486L,
 0x8FF09EB2L, 3L, 0L, 0xE715FA55L, (-3L), (-3L), 0xE715FA55L},
    {
    0xE715FA55L, 5L, 0x8FF09EB2L, 5L, 0xE715FA55L, 5L, 0xCD7D07BDL, 3L, 3L},
    {
    5L, 0xAD18FF4BL, 0xE715FA55L, 3L, 0xE715FA55L, 0xAD18FF4BL, 5L, 0L,
 0xD53E6E15L},
    {
    (-3L), 0xD53E6E15L, 5L, 5L, 0xD53E6E15L, 0xAD18FF4BL, 0x74158486L,
 0xE715FA55L, 0x8FF09EB2L},
    {
  0xCD7D07BDL, 0xAD18FF4BL, 0x8FF09EB2L, 0xD53E6E15L, 3L, (-3L), 3L,
 0xD53E6E15L, 0x8FF09EB2L}};
  uint16_t l_4990 = 9UL;
  int16_t l_5017 = 7L;
  int i, j, k;
  for (i = 0; i < 3; i++)
    l_4872[i] = 0x0860B758L;
  for (; (g_4[1][2] >= 0); g_4[1][2] -= 1)
    {
      int16_t l_24 = (-1L);
      int32_t l_4769 = 1L;
      int32_t l_4783 = 0x3DFDB016L;
      int64_t l_4784 = 7L;
      int32_t l_4837[5][2][10] =
      {
 {
   {
   (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L}
   ,
   {
   (-4L), (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L)}
 }
 ,
 {
   {
   (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L}
   ,
   {
   (-4L), (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L)}
 }
 ,
 {
   {
   (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L}
   ,
   {
   (-4L), (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L)}
 }
 ,
 {
   {
   (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L}
   ,
   {
   (-4L), (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L)}
 }
 ,
 {
   {
   (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L}
   ,
   {
   (-4L), (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L)}
 }
      };
      int8_t l_4842[6] =
      {
      0x01L, 1L, 0x01L, 0x01L, 1L, 0x01L};
      uint16_t l_4959[10];
      int i, j, k;
      for (i = 0; i < 10; i++)
 l_4959[i] = 1UL;
      l_4769
 =
 (safe_rshift_func_int16_t_s_s
  ((~
    (safe_mul_func_uint16_t_u_u
     ((safe_mul_func_int16_t_s_s
       ((g_540[0][0][0] =
  (g_4[1][5] <
   (safe_mul_func_uint8_t_u_u
    (2UL,
     (l_4768[2][2][0] =
      func_13 (l_19,
        func_20 ((l_24
           || l_2[6][3][2]), l_24, l_24),
        g_4[1][3], g_4[0][0], l_2[4][2][2])))))), l_19)),
      g_4[1][2]))), g_2945));
      for (g_806 = 0; (g_806 <= 3); g_806 += 1)
 {
   int8_t l_4838 = (-4L);
   uint32_t l_4851 = 0xC5599B89L;
   uint8_t l_4883 = 1UL;
   int32_t l_4906 = 0xDE4468F8L;
   int32_t l_4907 = 0x859DA2E8L;
   int32_t l_5022[10][3] =
   {
     {
     0x7EA7B377L, 0x14A9940BL, 0x6C8FA663L}
     ,
     {
     1L, 0x6C398603L, 1L}
     ,
     {
     0x6C8FA663L, 0x14A9940BL, 0x7EA7B377L}
     ,
     {
     (-1L), 0L, 0x7EA7B377L}
     ,
     {
     (-1L), (-1L), 1L}
     ,
     {
     1L, 1L, 0x6C8FA663L}
     ,
     {
     (-1L), 0x6C8FA663L, (-1L)}
     ,
     {
     (-1L), 0x6C8FA663L, (-1L)}
     ,
     {
     0x6C8FA663L, 1L, 1L}
     ,
     {
     1L, (-1L), (-1L)}
   };
   for (g_189 = 0; (g_189 <= 3); g_189 += 1)
     {
       int64_t l_4803 = 0x96458143B7FABA93LL;
       int32_t l_4836 = (-8L);
       int16_t l_4909 = (-9L);
       uint16_t l_4960 = 5UL;
       uint16_t l_4787[1];
    int32_t l_4871 = 0x22DB2806L;
    int i;
    for (i = 0; i < 1; i++)
      l_4787[i] = 65529UL;
    for (; (g_897 <= 3); g_897 += 1)
      {}
    if ((safe_mul_func_uint16_t_u_u
         ((g_75 >=
    (((4L |
       (safe_add_func_uint8_t_u_u
        ((g_359 =
          (safe_mod_func_uint16_t_u_u
    (l_19,
     (((safe_mod_func_int16_t_s_s
        (((safe_rshift_func_uint8_t_u_u
           ((safe_add_func_uint32_t_u_u
      (((safe_rshift_func_int16_t_s_u
         ((safe_mul_func_uint16_t_u_u
           (g_3898,
            (safe_lshift_func_uint8_t_u_s
      (g_236,
       (l_4769 <=
        ((l_4837[4][1][5] =
          ((safe_add_func_uint64_t_u_u ((~(safe_mul_func_uint8_t_u_u ((safe_mul_func_uint8_t_u_u (((l_4836 = (safe_add_func_int64_t_s_s ((g_455 = (g_3807 = g_3950)), (safe_mul_func_int8_t_s_s ((safe_mod_func_int16_t_s_s (g_3487, l_24)), g_280))))) != g_540[0][0][5]), g_1394)), l_4803))), g_806)) && 0x57L)) == g_540[0][0][1])))))), g_1513)) | 0x5379D1F7L), 0x69F15ACDL)), l_4838)) && 0x4229L), 0xDA2DL)) != g_75) | 0x5C5773AEL)))), 0UL))) > g_4576[2]) != 0x563A4A5C11C1B531LL)), l_4803)))
      {
        int32_t l_4852 = 0x403283DFL;
        int32_t l_4884 = 9L;
        int32_t l_4885 = (-1L);
        int32_t l_4908 = 0xFE3073B2L;
        g_3 = (g_1272 =
        (g_2241 >=
         (l_4768[2][2][0] !=
          ((l_4851 == l_4852) >=
    (safe_rshift_func_int16_t_s_s
     (((0x5C91L <
        ((safe_rshift_func_uint16_t_u_s
          ((safe_rshift_func_int8_t_s_s
     ((safe_rshift_func_uint16_t_u_u
       (((safe_mod_func_int8_t_s_s
          ((l_4836 ==
            (safe_mod_func_int8_t_s_s
      ((safe_rshift_func_int16_t_s_u
        (((safe_lshift_func_uint8_t_u_u (0x68L, (l_4871 = g_4447))) || l_4872[2]), l_4873[4][7])), (-2L)))), g_921[6][6][0])) > g_3487), g_2791)), g_675)), l_4851)) >= l_4837[4][1][5])) < 0x991BL), l_4787[0]))))));
        g_208[1] =
   ((g_3487 =
     ((((l_4884 =
         ((safe_mod_func_uint8_t_u_u
    ((((safe_mul_func_int8_t_s_s
        ((g_56 =
          (l_24 <= (l_4871 = 0UL))),
         ((g_97 ^
           ((((safe_mul_func_uint8_t_u_u
        ((l_4852 =
          g_4880), 0x91L)) <= 0x1A6AL)
      &&
      ((0x3E57L >
        (safe_sub_func_int64_t_s_s
         ((l_4769 <=
           ((l_4837[0][1][9] =
      l_4883) <= l_4842[4])),
          g_208[2]))) > g_2241))
     && g_4447)) & g_806))) <= g_4880) ==
      g_1678),
     g_1923)) ^ l_4872[0])) < g_4576[2]) <=
       l_4885) > (-5L))) >= g_2974);
        g_921[5][3][0] =
   ((((safe_mul_func_uint8_t_u_u
       (l_4837[4][1][4],
        (l_4909 =
         (+
          (((~
      ((((+
          ((((l_4908 =
       (((((g_99[3] =
            l_4837[4][1][5]) >
           (safe_mul_func_int16_t_s_s
            (((g_178 =
        l_4883) &
       (((l_4884 =
          ((((g_2227 =
       ((safe_sub_func_uint16_t_u_u (g_2945, (l_4907 = (safe_add_func_int32_t_s_s ((l_4769 = (-5L)), ((safe_add_func_uint8_t_u_u ((safe_mod_func_int16_t_s_s ((l_4884 & 2L), (safe_add_func_uint8_t_u_u ((l_4906 = ((safe_rshift_func_int16_t_s_s (((safe_rshift_func_int16_t_s_s (g_75, 2)) & ((g_3487 && 1L) & g_3807)), l_4871)) < g_3)), l_4842[2])))), g_208[2])) || l_4780)))))) > g_280)) > g_280) && g_1081[0][0]) == 0x0933C1602E5D7963LL)) != g_359) >= g_1395)), g_4669))) >= l_4787[0]) ^ l_4885) | g_56)) > 0x9CL) || g_540[0][0][4]) == l_4787[0])) & 2L) != 0x9F52L) | g_983)) | l_4871) | g_897))))) >= g_1394) | g_3175) == l_4885);
      }
    else
      {
        uint64_t l_4937 = 0x38F9D73A0A794B48LL;
        int32_t l_4938[1];
        g_3331
   =
   (safe_lshift_func_int8_t_s_u
    ((safe_add_func_uint16_t_u_u
      ((safe_mul_func_uint8_t_u_u
        (((safe_sub_func_int64_t_s_s
    (((((~
         (safe_lshift_func_int8_t_s_u
          ((l_4787[0] |
     (safe_add_func_int8_t_s_s
      (((-9L) <
        (l_4837[4][1][5] <
         (g_922 =
          (!g_3175)))),
       (safe_mod_func_int64_t_s_s
        ((((safe_mod_func_uint64_t_u_u
            (4UL,
      0xAB8CCC50124A0B7ELL)) |
           ((safe_mod_func_uint32_t_u_u
      ((safe_unary_minus_func_uint8_t_u (g_455)), ((safe_mod_func_uint64_t_u_u ((g_2599 = ((safe_sub_func_int16_t_s_s (((safe_mul_func_uint8_t_u_u (((((l_4937 = ((safe_sub_func_uint64_t_u_u (((g_1551 | g_575) != 1L), g_4447)) >= (-9L))) > l_4872[2]) >= 0x49L) | g_540[0][0][0]), g_675)) | g_1182[2]), g_208[1])) | g_3807)), g_208[0])) && g_655))) | 0x58A0L)) != l_4871), g_2519))))), l_19))) == l_4938[0]) < g_357) >= g_189), 0x36CCBABFFCE52C27LL)) < l_4837[4][1][5]), l_4787[0])), l_4838)), g_1394));
        l_4960 =
   ((g_983 =
     (g_1272 >=
      (safe_add_func_uint32_t_u_u
       ((safe_rshift_func_uint16_t_u_u
         (((safe_mod_func_int32_t_s_s
     (((safe_sub_func_uint8_t_u_u
        (((safe_lshift_func_uint16_t_u_u
           (((safe_mod_func_int8_t_s_s
       (l_4787[0],
        g_540[0][0][0])) <
      ((((g_2227 =
          0x2607FB2D10C9B352LL) &
         (((~
            (g_922 =
      (safe_sub_func_int16_t_s_s
       (((0xEE04A600D6338CD1LL >=
          ((-9L) <=
           (((l_4787[0]
       && (l_4871 =
           (l_4938[0] =
            (g_1395 =
             (safe_add_func_uint16_t_u_u
              ((g_1678 =
         (((-10L) >=
           (safe_rshift_func_uint8_t_u_u
            ((safe_lshift_func_int16_t_s_u ((l_4768[2][2][0] ^ 1L), 7)), g_236))) >= 5L)), l_4909)))))) != l_4839) >= g_3950))) > (-1L)), 0UL)))) == 0x1BD2L) | l_4959[8])) || g_1863) ^ g_1060)), 9)) || 251UL), l_4837[3][1][3])) ^ l_4873[3][7]), l_4909)) & 0xD3A392EBE6E8EF1ALL), 15)), l_4787[0])))) && g_703);
      }
    if (l_4768[2][2][0])
      {}uint32_t l_4989 = 9UL;
    g_921
      [1]
      [9]
      [0]
      =
      ((l_4906 <= g_3950) >=
       (safe_mod_func_int16_t_s_s
        (l_4838,
         (l_4769
   &&
   ((g_455 =
     ((0x3D222EB2D167D453LL
       ||
       ((safe_rshift_func_uint16_t_u_u
         (((safe_sub_func_uint8_t_u_u
     (((safe_lshift_func_int16_t_s_s
        (l_4909,
         (safe_mod_func_int32_t_s_s
          (g_2599,
           (((g_209
       ||
       (safe_mod_func_int64_t_s_s
        (((l_4837[2][1][6] >=
           l_4837[3][1][6])
          && g_2974), g_1060)))
      && l_4989) & l_4872[1])))))
       || g_189), 0x99L)) <= 0L),
          g_178)) != l_4768[0][6][1])) >
      l_4783)) ^ l_4990)))));
     }
   uint64_t l_5084 = 0xA9C667284D8615AFLL;
       for (; (g_2945 <= 3); g_2945 += 1)
  {
    int8_t l_5124 = 1L;
    for (g_1923 = 3; (g_1923 >= 0); g_1923 -= 1)
      {
        int64_t l_5123 = 0xCCDB0BE861047541LL;
        l_4873
   [4]
   [7]
   =
   (safe_sub_func_uint32_t_u_u
    (((safe_lshift_func_int8_t_s_u
       (0x20L,
        (l_5017 !=
         (((~(g_99[2] = g_280)) >= g_3950) >
          (((safe_sub_func_int32_t_s_s
      ((g_921[5][7][0] =
        (safe_sub_func_int64_t_s_s
         (0xFE2B8FA57479FD98LL,
          (g_3807 <=
           ((safe_add_func_uint8_t_u_u
      ((safe_unary_minus_func_uint32_t_u
        (((safe_mul_func_uint16_t_u_u
           ((g_1678 =
      (safe_lshift_func_uint8_t_u_u
       ((safe_add_func_uint32_t_u_u
         ((((((((safe_rshift_func_int8_t_s_s ((g_4880 == g_3331), (l_4959[1] && 8UL))) | g_675) && g_4576[2]) != 0xA5B9L) < l_5022[9][1]) && 7UL) | g_1395), l_4959[8])), 6))), l_5123)) & l_4784))), g_4880)) | 0x1A6A892DD97E9186LL))))), l_5124)) >= l_5123) != l_5084))))) == l_4851), g_902));
        return g_983;
      }
  }
       {
  int8_t l_4838 = (-4L);
  uint32_t l_4851 = 0xC5599B89L;
  uint8_t l_4883 = 1UL;
  int32_t l_5022[10][3] =
  {
    {
    0x7EA7B377L, 0x14A9940BL, 0x6C8FA663L}
    ,
    {
    1L, 0x6C398603L, 1L}
    ,
    {
    0x6C8FA663L, 0x14A9940BL, 0x7EA7B377L}
    ,
    {
    (-1L), 0L, 0x7EA7B377L}
    ,
    {
    (-1L), (-1L), 1L}
    ,
    {
    1L, 1L, 0x6C8FA663L}
    ,
    {
    (-1L), 0x6C8FA663L, (-1L)}
    ,
    {
    (-1L), 0x6C8FA663L, (-1L)}
    ,
    {
    0x6C8FA663L, 1L, 1L}
    ,
    {
    1L, (-1L), (-1L)}
  };
  int64_t l_4803 = 0x96458143B7FABA93LL;
      int32_t l_4836 = (-8L);
      uint16_t l_4787[1];
   int32_t l_4871 = 0x22DB2806L;
   if ((safe_mul_func_uint16_t_u_u
        ((g_75 >=
          (((4L |
      (safe_add_func_uint8_t_u_u
       ((g_359 =
         (safe_mod_func_uint16_t_u_u
          (l_19,
           (((safe_mod_func_int16_t_s_s
       (((safe_rshift_func_uint8_t_u_u
          ((safe_add_func_uint32_t_u_u
            (((safe_rshift_func_int16_t_s_u
        ((safe_mul_func_uint16_t_u_u
          (g_3898,
           (safe_lshift_func_uint8_t_u_s
            (g_236,
             (l_4769 <=
       ((l_4837[4][1][5] =
         ((safe_add_func_uint64_t_u_u ((~(safe_mul_func_uint8_t_u_u ((safe_mul_func_uint8_t_u_u (((l_4836 = (safe_add_func_int64_t_s_s ((g_455 = (g_3807 = g_3950)), (safe_mul_func_int8_t_s_s ((safe_mod_func_int16_t_s_s (g_3487, l_24)), g_280))))) != g_540[0][0][5]), g_1394)), l_4803))), g_806)) && 0x57L)) == g_540[0][0][1])))))), g_1513)) | 0x5379D1F7L), 0x69F15ACDL)), l_4838)) && 0x4229L), 0xDA2DL)) != g_75) | 0x5C5773AEL)))), 0UL))) > g_4576[2]) != 0x563A4A5C11C1B531LL)), l_4803)))
     {
       int32_t l_4852 = 0x403283DFL;
       int32_t l_4884 = 9L;
       int32_t l_4885 = (-1L);
       g_208[1] =
         ((g_3487 =
    ((((l_4884 =
        ((safe_mod_func_uint8_t_u_u
          ((((safe_mul_func_int8_t_s_s
       ((g_56 =
         (l_24 <= (l_4871 = 0UL))),
        ((g_97 ^
          ((((safe_mul_func_uint8_t_u_u
       ((l_4852 =
         g_4880),
        0x91L)) <= 0x1A6AL)
            &&
            ((0x3E57L >
       (safe_sub_func_int64_t_s_s
        ((l_4769 <=
          ((l_4837[0][1][9] =
            l_4883) <= l_4842[4])),
         g_208[2]))) > g_2241))
           && g_4447)) & g_806))) <=
      g_4880) == g_1678),
           g_1923)) ^ l_4872[0])) < g_4576[2]) <=
      l_4885) > (-5L))) >= g_2974);
     }
   else
     {
       uint64_t l_4937 = 0x38F9D73A0A794B48LL;
       int32_t l_4938[1];
       g_3331
         =
         (safe_lshift_func_int8_t_s_u
          ((safe_add_func_uint16_t_u_u
     ((safe_mul_func_uint8_t_u_u
       (((safe_sub_func_int64_t_s_s
          (((((~
        (safe_lshift_func_int8_t_s_u
         ((l_4787[0] |
           (safe_add_func_int8_t_s_s
            (((-9L) <
       (l_4837[4][1][5] <
        (g_922 =
         (!g_3175)))),
      (safe_mod_func_int64_t_s_s
       ((((safe_mod_func_uint64_t_u_u (4UL, 0xAB8CCC50124A0B7ELL)) | ((safe_mod_func_uint32_t_u_u ((safe_unary_minus_func_uint8_t_u (g_455)), ((safe_mod_func_uint64_t_u_u ((g_2599 = ((safe_sub_func_int16_t_s_s (((safe_mul_func_uint8_t_u_u (((((l_4937 = ((safe_sub_func_uint64_t_u_u (((g_1551 | g_575) != 1L), g_4447)) >= (-9L))) > l_4872[2]) >= 0x49L) | g_540[0][0][0]), g_675)) | g_1182[2]), g_208[1])) | g_3807)), g_208[0])) && g_655))) | 0x58A0L)) != l_4871), g_2519))))), l_19))) == l_4938[0]) < g_357) >= g_189), 0x36CCBABFFCE52C27LL)) < l_4837[4][1][5]), l_4787[0])), l_4838)), g_1394));
     }
      for (; (g_75 <= 3); g_75 += 1)
     {
     }
  uint64_t l_5084 = 0xA9C667284D8615AFLL;
      int8_t l_5124 = 1L;
   int64_t l_5123 = 0xCCDB0BE861047541LL;
       l_4873
         [4]
         [7]
         =
         (safe_sub_func_uint32_t_u_u
          (((safe_lshift_func_int8_t_s_u
      (0x20L,
       (l_5017 !=
        (((~(g_99[2] = g_280)) >= g_3950) >
         (((safe_sub_func_int32_t_s_s
     ((g_921[5][7][0] =
       (safe_sub_func_int64_t_s_s
        (0xFE2B8FA57479FD98LL,
         (g_3807 <=
          ((safe_add_func_uint8_t_u_u
            ((safe_unary_minus_func_uint32_t_u (((safe_mul_func_uint16_t_u_u ((g_1678 = (safe_lshift_func_uint8_t_u_u ((safe_add_func_uint32_t_u_u ((((((((safe_rshift_func_int8_t_s_s ((g_4880 == g_3331), (l_4959[1] && 8UL))) | g_675) && g_4576[2]) != 0xA5B9L) < l_5022[9][1]) && 7UL) | g_1395), l_4959[8])), 6))), l_5123)) & l_4784))), g_4880)) | 0x1A6A892DD97E9186LL))))), l_5124)) >= l_5123) != l_5084))))) == l_4851), g_902));
       }
 }
    }
  return l_4839;
}
static int8_t
  func_13
  (uint8_t p_14, int32_t p_15, uint32_t p_16, int32_t p_17, uint16_t p_18)
{
  int32_t l_3709 = 0x71CB1649L;
  uint8_t l_3759 = 0x4AL;
      int32_t l_3796 = 0xBE6752B7L;
   int32_t l_3793 = 0xADBFB178L;
       g_3
  =
  ((safe_mod_func_uint16_t_u_u
    (((safe_add_func_int64_t_s_s
       ((safe_sub_func_uint32_t_u_u
         ((safe_rshift_func_uint8_t_u_u
    (0xFFL,
     (((p_18 &
        ((p_18 |
          ((((l_3759 >=
       ((safe_mul_func_uint16_t_u_u
         (((((g_1551 =
       (safe_add_func_uint16_t_u_u
        ((safe_sub_func_int64_t_s_s
          (p_15, 0xA4746D6BFFAA20B5LL)),
         p_18))) | (l_3796 =
             (((((p_17 =
           ((~0xBCL) &
            (1L | g_1678)))
          >= 0x241F9B21L) >
         g_2519) ==
        g_897) & g_209))) <=
     3UL) | 5UL), 65535UL)) <= l_3793))
      || p_17)
     || p_15) != 5L)) < 1UL)) & 0x9FL) <=
      g_4[1][2]))), g_983)), g_1182[2])) <= g_1182[1]),
     l_3709)) | g_2227);return g_99[1];
}
static int32_t func_20 (uint32_t p_21, uint8_t p_22, int16_t p_23)
{
  return p_23;
}
int
main (void)
{
  int print_hash_value = 0;
  crc32_gentab ();
  func_1 ();
  transparent_crc (g_3, "g_3", print_hash_value);
  platform_main_end (crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}

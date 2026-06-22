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
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
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
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
(safe_unary_minus_func_int64_t_s)(int64_t si )
{
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
(safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 - ui2;
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
static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 - ui2;
}
static uint64_t
(safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ui1 + ui2;
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
 crc32_byte ((val>>8) & 0xff);
}
static void
transparent_crc (uint64_t val, char* vname, int flag)
{
 crc32_8bytes(val);
}
static long __undefined;
static uint32_t g_15 = 0x1DFD9475L;
static uint16_t g_28[7][9] = {{65527UL, 65531UL, 0xE6C8L, 0xAC31L, 65535UL, 0xAC31L, 0xE6C8L, 65531UL, 65527UL}, {65527UL, 65531UL, 0xE6C8L, 0xAC31L, 65535UL, 0xAC31L, 0xE6C8L, 65531UL, 65527UL}, {65527UL, 65531UL, 0xE6C8L, 0xAC31L, 65535UL, 0xAC31L, 0xE6C8L, 65531UL, 65527UL}, {65527UL, 65531UL, 0xE6C8L, 0xAC31L, 65535UL, 0xAC31L, 0xE6C8L, 65531UL, 65527UL}, {65527UL, 65531UL, 0xE6C8L, 0xAC31L, 65535UL, 0xAC31L, 0xE6C8L, 65531UL, 65527UL}, {65527UL, 65531UL, 0xE6C8L, 0xAC31L, 65535UL, 0xAC31L, 0xE6C8L, 65531UL, 65527UL}, {65527UL, 65531UL, 0xE6C8L, 0xAC31L, 65535UL, 0xAC31L, 0xE6C8L, 65531UL, 65527UL}};
static volatile int32_t g_76 = 0x79815C87L;
static uint8_t g_81[1] = {0xFAL};
static uint32_t g_90 = 0UL;
static uint32_t g_91 = 0x487E88E1L;
static int32_t g_93 = (-2L);
static int32_t g_105[1][9][10] = {{{9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L}, {9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L}, {9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L}, {9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L}, {9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L}, {9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L}, {9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L}, {9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L}, {9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L}}};
static uint64_t g_124 = 1UL;
static int16_t g_148 = (-10L);
static int8_t g_151 = 0x15L;
static uint64_t g_152[5][1][6] = {{{0xA2021D835F2621DCLL, 0x5673C17101716674LL, 0xB8FCCBCFC55BB8F8LL, 0x5673C17101716674LL, 0xA2021D835F2621DCLL, 0x5673C17101716674LL}}, {{0xA2021D835F2621DCLL, 0x5673C17101716674LL, 0xB8FCCBCFC55BB8F8LL, 0x5673C17101716674LL, 0xA2021D835F2621DCLL, 0x5673C17101716674LL}}, {{0xA2021D835F2621DCLL, 0x5673C17101716674LL, 0xB8FCCBCFC55BB8F8LL, 0x5673C17101716674LL, 0xA2021D835F2621DCLL, 0x5673C17101716674LL}}, {{0xA2021D835F2621DCLL, 0x5673C17101716674LL, 0xB8FCCBCFC55BB8F8LL, 0x5673C17101716674LL, 0xA2021D835F2621DCLL, 0x5673C17101716674LL}}, {{0xA2021D835F2621DCLL, 0x5673C17101716674LL, 0xB8FCCBCFC55BB8F8LL, 0x5673C17101716674LL, 0xA2021D835F2621DCLL, 0x5673C17101716674LL}}};
static uint64_t g_163 = 9UL;
static int32_t g_167 = 6L;
static uint8_t g_188[1] = {0x5AL};
static int32_t g_202 = 5L;
static uint8_t g_203 = 0UL;
static int32_t g_208 = 0L;
static uint32_t g_269 = 0x2B0E516BL;
static int8_t g_276 = 0x3AL;
static int16_t g_324 = 0xD1C0L;
static int64_t g_381 = 0x53076E19BB2B780CLL;
static int64_t g_423 = 0x498ADFB72610C518LL;
static int8_t g_465 = 0xC4L;
static int32_t g_482[7][3][4] = {{{0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}, {0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}, {0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}}, {{0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}, {0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}, {0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}}, {{0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}, {0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}, {0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}}, {{0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}, {0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}, {0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}}, {{0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}, {0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}, {0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}}, {{0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}, {0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}, {0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}}, {{0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}, {0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}, {0x8FD500D0L, 1L, 0x926A1E5FL, 0x2A50666EL}}};
static uint32_t g_483[3] = {0xF5A22B49L, 0xF5A22B49L, 0xF5A22B49L};
static volatile uint64_t g_511 = 1UL;
static int8_t g_519 = 0xC0L;
static int8_t g_520 = 0xDCL;
static uint16_t g_521 = 0x9926L;
static uint64_t g_551 = 0x0C3E9FAD57ED5205LL;
static int16_t g_559 = 0x34D1L;
static uint64_t g_576 = 0xB7E0F2C445097D32LL;
static int32_t g_579 = 0x73505EB7L;
static int32_t g_694 = (-2L);
static int32_t g_695 = 0xE00B5322L;
static uint16_t g_747 = 0x033AL;
static volatile uint64_t g_758[10][6] = {{18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL}, {18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL}, {18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL}, {18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL}, {18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL}, {18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL}, {18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL}, {18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL}, {18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL}, {18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL, 18446744073709551611UL, 1UL}};
static int64_t g_875 = (-1L);
static uint8_t g_952[8][5] = {{255UL, 1UL, 255UL, 1UL, 255UL}, {255UL, 1UL, 255UL, 1UL, 255UL}, {255UL, 1UL, 255UL, 1UL, 255UL}, {255UL, 1UL, 255UL, 1UL, 255UL}, {255UL, 1UL, 255UL, 1UL, 255UL}, {255UL, 1UL, 255UL, 1UL, 255UL}, {255UL, 1UL, 255UL, 1UL, 255UL}, {255UL, 1UL, 255UL, 1UL, 255UL}};
static uint16_t g_1016 = 0x7CE0L;
static uint32_t g_1023[3][5][10] = {{{0UL, 0x3F96B48DL, 18446744073709551608UL, 0x4FC4911DL, 18446744073709551613UL, 0x12B9AE81L, 0x6C89C667L, 0xCEA9D2EAL, 18446744073709551615UL, 0xE6DB3CA3L}, {0UL, 0x3F96B48DL, 18446744073709551608UL, 0x4FC4911DL, 18446744073709551613UL, 0x12B9AE81L, 0x6C89C667L, 0xCEA9D2EAL, 18446744073709551615UL, 0xE6DB3CA3L}, {0UL, 0x3F96B48DL, 18446744073709551608UL, 0x4FC4911DL, 18446744073709551613UL, 0x12B9AE81L, 0x6C89C667L, 0xCEA9D2EAL, 18446744073709551615UL, 0xE6DB3CA3L}, {0UL, 0x3F96B48DL, 18446744073709551608UL, 0x4FC4911DL, 18446744073709551613UL, 0x12B9AE81L, 0x6C89C667L, 0xCEA9D2EAL, 18446744073709551615UL, 0xE6DB3CA3L}, {0UL, 0x3F96B48DL, 18446744073709551608UL, 0x4FC4911DL, 18446744073709551613UL, 0x12B9AE81L, 0x6C89C667L, 0xCEA9D2EAL, 18446744073709551615UL, 0xE6DB3CA3L}}, {{0UL, 0x3F96B48DL, 18446744073709551608UL, 0x4FC4911DL, 18446744073709551613UL, 0x12B9AE81L, 0x6C89C667L, 0xCEA9D2EAL, 18446744073709551615UL, 0xE6DB3CA3L}, {0UL, 0x3F96B48DL, 18446744073709551608UL, 0x4FC4911DL, 18446744073709551613UL, 0x12B9AE81L, 0x6C89C667L, 0xCEA9D2EAL, 18446744073709551615UL, 0xE6DB3CA3L}, {0UL, 0x3F96B48DL, 18446744073709551608UL, 0x4FC4911DL, 18446744073709551613UL, 0x12B9AE81L, 0x6C89C667L, 0xCEA9D2EAL, 18446744073709551615UL, 0xE6DB3CA3L}, {0UL, 0x3F96B48DL, 18446744073709551608UL, 0x4FC4911DL, 18446744073709551613UL, 0x12B9AE81L, 0x6C89C667L, 0xCEA9D2EAL, 18446744073709551615UL, 0xE6DB3CA3L}, {0UL, 0x3F96B48DL, 18446744073709551608UL, 0x4FC4911DL, 18446744073709551613UL, 0x12B9AE81L, 0x6C89C667L, 0xCEA9D2EAL, 18446744073709551615UL, 0xE6DB3CA3L}}, {{0UL, 0x3F96B48DL, 18446744073709551608UL, 0x4FC4911DL, 18446744073709551613UL, 0x12B9AE81L, 0x6C89C667L, 0xCEA9D2EAL, 18446744073709551615UL, 0xE6DB3CA3L}, {0UL, 0x3F96B48DL, 18446744073709551608UL, 0x4FC4911DL, 18446744073709551613UL, 0x12B9AE81L, 0x6C89C667L, 0xCEA9D2EAL, 18446744073709551615UL, 0xE6DB3CA3L}, {0UL, 0x3F96B48DL, 18446744073709551608UL, 0x4FC4911DL, 18446744073709551613UL, 0x12B9AE81L, 0x6C89C667L, 0xCEA9D2EAL, 18446744073709551615UL, 0xE6DB3CA3L}, {0UL, 0x3F96B48DL, 18446744073709551608UL, 0x4FC4911DL, 18446744073709551613UL, 0x12B9AE81L, 0x6C89C667L, 0xCEA9D2EAL, 18446744073709551615UL, 0xE6DB3CA3L}, {0UL, 0x3F96B48DL, 18446744073709551608UL, 0x4FC4911DL, 18446744073709551613UL, 0x12B9AE81L, 0x6C89C667L, 0xCEA9D2EAL, 18446744073709551615UL, 0xE6DB3CA3L}}};
static int32_t g_1121 = 6L;
static int16_t g_1388[3] = {0x411BL, 0x411BL, 0x411BL};
static volatile int16_t g_1405[10][9][2] = {{{0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}}, {{0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}}, {{0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}}, {{0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}}, {{0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}}, {{0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}}, {{0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}}, {{0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}}, {{0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}}, {{0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}, {0xEE96L, 0xAFADL}}};
static int16_t g_1507 = (-7L);
static int16_t g_1593 = 0x71AEL;
static int8_t g_1613 = 0xA3L;
static volatile uint64_t g_1703 = 0xCC154F334727056FLL;
static volatile int8_t g_1704 = 1L;
static uint64_t g_1729[1][4] = {{18446744073709551614UL, 18446744073709551614UL, 18446744073709551614UL, 18446744073709551614UL}};
static uint64_t g_1730 = 0x22CF64ED8F928E06LL;
static int32_t g_1775 = (-3L);
static volatile uint32_t g_1783[7][1] = {{4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}};
static int64_t g_1820 = (-1L);
static int8_t g_1854 = (-1L);
static volatile int64_t g_1884 = 0x11E85E49C1803EEALL;
static int8_t g_1970 = 0L;
static uint32_t g_2151 = 0UL;
static volatile int64_t g_2201 = 0xB8B5AF854C92A8E3LL;
static uint8_t g_2718 = 0x18L;
static uint32_t g_2720[3] = {0x86FC3314L, 0x86FC3314L, 0x86FC3314L};
static uint16_t g_2939 = 0x0468L;
static uint16_t g_3020 = 0x2F95L;
static uint32_t g_3022 = 3UL;
static uint8_t g_3106 = 0x2DL;
static uint32_t g_3551 = 0x752DD6CAL;
static int16_t func_1(void);
static int16_t func_7(int64_t p_8, int16_t p_9, uint8_t p_10, uint32_t p_11);
static uint8_t func_12(int8_t p_13, int32_t p_14);
static int32_t func_17(uint32_t p_18, int32_t p_19, int32_t p_20);
static uint64_t func_22(uint32_t p_23, uint32_t p_24, int32_t p_25, uint64_t p_26, int32_t p_27);
static int32_t func_32(int32_t p_33, uint8_t p_34, uint32_t p_35, int32_t p_36);
static uint8_t func_37(uint8_t p_38, uint32_t p_39, uint32_t p_40, int32_t p_41, int8_t p_42);
static uint8_t func_46(uint8_t p_47, uint8_t p_48, int64_t p_49, uint8_t p_50);
static int32_t func_53(uint16_t p_54);
static uint16_t func_55(int32_t p_56);
static int16_t func_1(void)
{
    uint8_t l_2 = 0x13L;
    int8_t l_16 = 0xFBL;
    int32_t l_3555 = 0L;
    l_3555 = ((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(func_7((((func_12(g_15, l_16) < 255UL) || (((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((g_90 > g_1703), 6)), l_16)) == l_2) > (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_423, g_167)), 0x620AL)), 15)), 0UL)))) < l_16), l_16, l_16, g_3551), g_3551)), 0x6A2B20D8L)) | 1UL);
    return l_3555;
}
static int16_t func_7(int64_t p_8, int16_t p_9, uint8_t p_10, uint32_t p_11)
{
    return p_11;
}
static uint8_t func_12(int8_t p_13, int32_t p_14)
{
    int32_t l_3205 = 0L;
    uint32_t l_3206 = 0xCE610382L;
    int32_t l_3247 = 6L;
    l_3247 = func_17(g_15, ((+((func_22(p_14, p_14, g_15, (g_28[6][1] = 18446744073709551613UL), g_15) >= 0L) == (l_3205 = ((p_14 <= 18446744073709551615UL) , p_13)))) <= l_3206), l_3206);
return p_13;
}
static int32_t func_17(uint32_t p_18, int32_t p_19, int32_t p_20)
{
    uint8_t l_3246 = 1UL;
    return l_3246;
}
static uint64_t func_22(uint32_t p_23, uint32_t p_24, int32_t p_25, uint64_t p_26, int32_t p_27)
{
    int16_t l_29[1];
    l_29[0] = 1L;
    uint8_t l_43 = 255UL;
        uint16_t l_1351 = 7UL;
        int16_t l_1352 = 0xCED9L;
        int32_t l_2069 = 0xCC7CAC4CL;
        int32_t l_2070 = 0x6663D855L;
        p_25 = func_32(g_28[6][1], func_37(l_43, ((l_2069 = (((func_46((safe_lshift_func_int8_t_s_s(((func_53(func_55((safe_unary_minus_func_uint32_t_u(l_43)))) , g_695) , ((g_91 == (p_24 , (safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((((18446744073709551614UL >= 0xC7CC7D8C010F4ABALL) ^ l_43) < p_26) && l_29[0]), g_511)) <= l_1351), 0x83EEL)) ^ g_952[4][2]), p_27)), 0)))) & l_29[0])), 4)), l_1352, g_28[2][5], p_24) != g_1729[0][3]) && l_1351) > 0UL)) > (-2L)), l_2070, l_29[0], g_28[2][8]), g_1023[1][1][0], p_23);
    return p_24;
}
static int32_t func_32(int32_t p_33, uint8_t p_34, uint32_t p_35, int32_t p_36)
{
    uint16_t l_2123[7][4] = {{2UL, 0xC7BEL, 0x4742L, 0xF2F2L}, {2UL, 0xC7BEL, 0x4742L, 0xF2F2L}, {2UL, 0xC7BEL, 0x4742L, 0xF2F2L}, {2UL, 0xC7BEL, 0x4742L, 0xF2F2L}, {2UL, 0xC7BEL, 0x4742L, 0xF2F2L}, {2UL, 0xC7BEL, 0x4742L, 0xF2F2L}, {2UL, 0xC7BEL, 0x4742L, 0xF2F2L}};
    int32_t l_2124 = (-2L);
        for (; (g_163 < 51); ++g_163)
        {
            uint32_t l_2137 = 18446744073709551615UL;
            uint64_t l_2150[9];
            int i;
            for (i = 0; i < 9; i++)
                l_2150[i] = 0x9EE7F9D1C772505BLL;
            g_1775 = ((safe_rshift_func_uint16_t_u_s(((g_324 >= (safe_mod_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(0x819D62416B30E980LL, (safe_sub_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(p_34)), (l_2137 ^ p_34))))), ((((g_152[1][0][5] = (l_2124 = (safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((g_1729[0][3] = (safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(((l_2124 != (((safe_mod_func_int32_t_s_s((l_2150[0] && (g_1783[5][0] > (-10L))), p_34)) > g_483[1]) < 0UL)) | p_36), p_36)) && 4L), l_2124))), g_2151)), l_2123[3][3])), l_2150[0])))) , p_36) | l_2137) , 0xD1403C4BL)))) , l_2137), 1)) != g_520);
        }
    return l_2123[3][2];
}
static uint8_t func_37(uint8_t p_38, uint32_t p_39, uint32_t p_40, int32_t p_41, int8_t p_42)
{
    return g_483[0];
}
static uint8_t func_46(uint8_t p_47, uint8_t p_48, int64_t p_49, uint8_t p_50)
{
    int8_t l_1515 = 0x61L;
    return l_1515;
}
static int32_t func_53(uint16_t p_54)
{
    return p_54;
}
static uint16_t func_55(int32_t p_56)
{
    uint64_t l_1173 = 4UL;
    return l_1173;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    for (j = 0; j < 9; j++)
        {}
    for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
        transparent_crc(g_1729[i][j], "g_1729[i][j]", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

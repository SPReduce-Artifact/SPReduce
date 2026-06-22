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
platform_main_end(uint32_t crc, int flag) {
  printf("checksum = %X\n", crc);
}
static int8_t(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2) {
  return
      (((si1 > 0) && (si2 > 0) && (si1 > ((127) - si2))) ||
       ((si1 < 0) && (si2 < 0) && (si1 < ((-128) - si2))))
          ? ((si1))
          :
          (si1 + si2);
}
static int8_t(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2) {
  return
      (((si1 ^ si2) & (((si1 ^ ((si1 ^ si2) & (~(127)))) - si2) ^ si2)) < 0)
          ? ((si1))
          :
          (si1 - si2);
}
static int8_t(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2) {
  return
      (((si1 > 0) && (si2 > 0) && (si1 > ((127) / si2))) ||
       ((si1 > 0) && (si2 <= 0) && (si2 < ((-128) / si1))) ||
       ((si1 <= 0) && (si2 > 0) && (si1 < ((-128) / si2))) ||
       ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((127) / si1))))
          ? ((si1))
          :
          si1 * si2;
}
static int8_t(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2) {
  return
      ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ? ((si1)) :
                                                           (si1 % si2);
}
static int8_t(safe_lshift_func_int8_t_s_s)(int8_t left, int right) {
  return
      ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) ||
       (left > ((127) >> ((int)right))))
          ? ((left))
          :
          (left << ((int)right));
}
static int16_t(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2) {
  return
      (((si1 > 0) && (si2 > 0) && (si1 > ((32767) - si2))) ||
       ((si1 < 0) && (si2 < 0) && (si1 < ((-32767-1) - si2))))
          ? ((si1))
          :
          (si1 + si2);
}
static int16_t(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2) {
  return
      (((si1 > 0) && (si2 > 0) && (si1 > ((32767) / si2))) ||
       ((si1 > 0) && (si2 <= 0) && (si2 < ((-32767-1) / si1))) ||
       ((si1 <= 0) && (si2 > 0) && (si1 < ((-32767-1) / si2))) ||
       ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((32767) / si1))))
          ? ((si1))
          :
          si1 * si2;
}
static int16_t(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2) {
  return
      ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ? ((si1)) :
                                                            (si1 % si2);
}
static int16_t(safe_lshift_func_int16_t_s_s)(int16_t left, int right) {
  return
      ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) ||
       (left > ((32767) >> ((int)right))))
          ? ((left))
          :
          (left << ((int)right));
}
static int16_t(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right) {
  return
      ((left < 0) || (((unsigned int)right) >= 32) ||
       (left > ((32767) >> ((unsigned int)right))))
          ? ((left))
          :
          (left << ((unsigned int)right));
}
static int16_t(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right) {
  return
      ((left < 0) || (((unsigned int)right) >= 32))
          ? ((left))
          :
          (left >> ((unsigned int)right));
}
static int32_t(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2) {
  return
      (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) - si2))) ||
       ((si1 < 0) && (si2 < 0) && (si1 < ((-2147483647-1) - si2))))
          ? ((si1))
          :
          (si1 + si2);
}
static int32_t(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2) {
  return
      (((si1 ^ si2) & (((si1 ^ ((si1 ^ si2) & (~(2147483647)))) - si2) ^ si2)) < 0)
          ? ((si1))
          :
          (si1 - si2);
}
static int32_t(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2) {
  return
      ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ? ((si1)) :
                                                            (si1 % si2);
}
static uint8_t(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2) {
  return ui1 - ui2;
}
static uint8_t(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2) {
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2) {
  return
      (ui2 == 0) ? ((ui1)) :
                 (ui1 % ui2);
}
static uint8_t(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right) {
  return
      ((((int)right) < 0) || (((int)right) >= 32)) ? ((left)) :
                                                   (left >> ((int)right));
}
static uint8_t(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right) {
  return
      (((unsigned int)right) >= 32) ? ((left)) :
                                    (left >> ((unsigned int)right));
}
static uint16_t(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return ui1 + ui2;
}
static uint16_t(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right) {
  return
      ((((int)right) < 0) || (((int)right) >= 32) ||
       (left > ((65535) >> ((int)right))))
          ? ((left))
          :
          (left << ((int)right));
}
static uint16_t(safe_lshift_func_uint16_t_u_u)(uint16_t left,
                                               unsigned int right) {
  return
      ((((unsigned int)right) >= 32) ||
       (left > ((65535) >> ((unsigned int)right))))
          ? ((left))
          :
          (left << ((unsigned int)right));
}
static uint16_t(safe_rshift_func_uint16_t_u_u)(uint16_t left,
                                               unsigned int right) {
  return
      (((unsigned int)right) >= 32) ? ((left)) :
                                    (left >> ((unsigned int)right));
}
static uint32_t(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2) {
  return ui1 + ui2;
}
static uint32_t(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2) {
  return ui1 - ui2;
}
static uint32_t(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2) {
  return
      (ui2 == 0) ? ((ui1)) :
                 (ui1 % ui2);
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static void crc32_gentab(void) {
  uint32_t crc;
  int i, j;
  for (i = 0; i < 256; i++) {
    crc = i;
    crc32_tab[i] = crc;
  }
}
static void crc32_byte(uint8_t b) {
  crc32_context = ((crc32_context >> 8) & 0x00FFFFFF) ^
                  crc32_tab[(crc32_context ^ b) & 0xFF];
}
static void crc32_8bytes(uint32_t val) {
  crc32_byte((val >> 0) & 0xff);
}
static void transparent_crc(uint32_t val, char* vname, int flag) {
  crc32_8bytes(val);
}
static long __undefined;
struct S0 {
  int32_t f0;
  const uint16_t f1;
  const uint32_t f2;
  const int32_t f3;
  uint32_t f4;
  uint32_t f5;
  uint16_t f6;
};
struct S1 {
  uint8_t f0;
  int32_t f1;
  uint16_t f2;
  uint32_t f3;
  uint16_t f4;
  const int16_t f5;
};
struct S2 {
  int32_t f0;
  uint8_t f1;
  int16_t f2;
  uint32_t f3;
  int16_t f4;
  int16_t f5;
  uint16_t f6;
};
static const struct S0 g_5[1] = {
    {1L, 5UL, 0xC63C4078L, 1L, 0xC25B054DL, 0xBE56890CL, 0x4408L}};
static uint32_t g_16 = 0xE5161E33L;
static uint32_t g_17[8] = {4294967289UL, 5UL, 4294967289UL, 5UL,
                           4294967289UL, 5UL, 4294967289UL, 5UL};
static uint16_t g_22 = 65535UL;
static struct S2 g_28 = {0x3CC114FFL, 0xA9L, 0xA76AL, 1UL, 0x0519L, -1L, 9UL};
static struct S2 g_76[5][4][10] = {
    {{{1L, 0x93L, 0xB6BEL, 7UL, 0xBBDFL, -9L, 0xA4B2L},
      {-1L, 2UL, 0L, 0x36661290L, 0L, 0L, 65529UL},
      {-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x491F1F15L, 252UL, 0x96B5L, 0x1468E88EL, -1L, -3L, 0UL},
      {-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {-1L, 2UL, 0L, 0x36661290L, 0L, 0L, 65529UL},
      {1L, 0x93L, 0xB6BEL, 7UL, 0xBBDFL, -9L, 0xA4B2L},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {-2L, 254UL, -1L, 0x37CDB552L, 0xD6D4L, 0x0C11L, 0x42F3L},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL}},
     {{0xFDDCEC70L, 5UL, 3L, 0x445E426DL, 0x7943L, 0x2B23L, 0x0CBEL},
      {-1L, 2UL, 0L, 0x36661290L, 0L, 0L, 65529UL},
      {0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x491F1F15L, 252UL, 0x96B5L, 0x1468E88EL, -1L, -3L, 0UL},
      {0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {-1L, 2UL, 0L, 0x36661290L, 0L, 0L, 65529UL},
      {0xFDDCEC70L, 5UL, 3L, 0x445E426DL, 0x7943L, 0x2B23L, 0x0CBEL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {-2L, 0xD0L, -1L, 0xD8B2F8DCL, 8L, 0xBAAFL, 6UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL}},
     {{1L, 0x93L, 0xB6BEL, 7UL, 0xBBDFL, -9L, 0xA4B2L},
      {-1L, 2UL, 0L, 0x36661290L, 0L, 0L, 65529UL},
      {-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x491F1F15L, 252UL, 0x96B5L, 0x1468E88EL, -1L, -3L, 0UL},
      {-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {-1L, 2UL, 0L, 0x36661290L, 0L, 0L, 65529UL},
      {1L, 0x93L, 0xB6BEL, 7UL, 0xBBDFL, -9L, 0xA4B2L},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {-2L, 254UL, -1L, 0x37CDB552L, 0xD6D4L, 0x0C11L, 0x42F3L},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL}},
     {{0xFDDCEC70L, 5UL, 3L, 0x445E426DL, 0x7943L, 0x2B23L, 0x0CBEL},
      {-1L, 2UL, 0L, 0x36661290L, 0L, 0L, 65529UL},
      {0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x491F1F15L, 252UL, 0x96B5L, 0x1468E88EL, -1L, -3L, 0UL},
      {0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {-1L, 2UL, 0L, 0x36661290L, 0L, 0L, 65529UL},
      {0xFDDCEC70L, 5UL, 3L, 0x445E426DL, 0x7943L, 0x2B23L, 0x0CBEL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0x1021D522L, 0x42L, 0x98E8L, 0xF6226F77L, 0x7A5BL, 0x85A9L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}}},
    {{{-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {6L, 0x0DL, 0x3939L, 0x282F80E5L, 0x6308L, 0x2EBDL, 65527UL},
      {0xD186C8CCL, 2UL, 0x6F9DL, 4294967295UL, 0x7ECAL, 0x0655L, 0xB860L},
      {6L, 0x0DL, 0x3939L, 0x282F80E5L, 0x6308L, 0x2EBDL, 65527UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0xDF6318FFL, 0x4DL, 0L, 0xD499989FL, 0x4E93L, 0x460CL, 0x5032L},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}},
     {{0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {0x2E7BD33CL, 0UL, -1L, 0xC40DF3FCL, 0x1527L, 0x319CL, 0xE683L},
      {0xD186C8CCL, 2UL, 0x6F9DL, 4294967295UL, 0x7ECAL, 0x0655L, 0xB860L},
      {0x2E7BD33CL, 0UL, -1L, 0xC40DF3FCL, 0x1527L, 0x319CL, 0xE683L},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0x1021D522L, 0x42L, 0x98E8L, 0xF6226F77L, 0x7A5BL, 0x85A9L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}},
     {{-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {6L, 0x0DL, 0x3939L, 0x282F80E5L, 0x6308L, 0x2EBDL, 65527UL},
      {0xD186C8CCL, 2UL, 0x6F9DL, 4294967295UL, 0x7ECAL, 0x0655L, 0xB860L},
      {6L, 0x0DL, 0x3939L, 0x282F80E5L, 0x6308L, 0x2EBDL, 65527UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0xDF6318FFL, 0x4DL, 0L, 0xD499989FL, 0x4E93L, 0x460CL, 0x5032L},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}},
     {{0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {0x2E7BD33CL, 0UL, -1L, 0xC40DF3FCL, 0x1527L, 0x319CL, 0xE683L},
      {0xD186C8CCL, 2UL, 0x6F9DL, 4294967295UL, 0x7ECAL, 0x0655L, 0xB860L},
      {0x2E7BD33CL, 0UL, -1L, 0xC40DF3FCL, 0x1527L, 0x319CL, 0xE683L},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0x1021D522L, 0x42L, 0x98E8L, 0xF6226F77L, 0x7A5BL, 0x85A9L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}}},
    {{{-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {6L, 0x0DL, 0x3939L, 0x282F80E5L, 0x6308L, 0x2EBDL, 65527UL},
      {0xD186C8CCL, 2UL, 0x6F9DL, 4294967295UL, 0x7ECAL, 0x0655L, 0xB860L},
      {6L, 0x0DL, 0x3939L, 0x282F80E5L, 0x6308L, 0x2EBDL, 65527UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0xDF6318FFL, 0x4DL, 0L, 0xD499989FL, 0x4E93L, 0x460CL, 0x5032L},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}},
     {{0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {0x2E7BD33CL, 0UL, -1L, 0xC40DF3FCL, 0x1527L, 0x319CL, 0xE683L},
      {0xD186C8CCL, 2UL, 0x6F9DL, 4294967295UL, 0x7ECAL, 0x0655L, 0xB860L},
      {0x2E7BD33CL, 0UL, -1L, 0xC40DF3FCL, 0x1527L, 0x319CL, 0xE683L},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0x1021D522L, 0x42L, 0x98E8L, 0xF6226F77L, 0x7A5BL, 0x85A9L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}},
     {{-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {6L, 0x0DL, 0x3939L, 0x282F80E5L, 0x6308L, 0x2EBDL, 65527UL},
      {0xD186C8CCL, 2UL, 0x6F9DL, 4294967295UL, 0x7ECAL, 0x0655L, 0xB860L},
      {6L, 0x0DL, 0x3939L, 0x282F80E5L, 0x6308L, 0x2EBDL, 65527UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0xDF6318FFL, 0x4DL, 0L, 0xD499989FL, 0x4E93L, 0x460CL, 0x5032L},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}},
     {{0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {0x2E7BD33CL, 0UL, -1L, 0xC40DF3FCL, 0x1527L, 0x319CL, 0xE683L},
      {0xD186C8CCL, 2UL, 0x6F9DL, 4294967295UL, 0x7ECAL, 0x0655L, 0xB860L},
      {0x2E7BD33CL, 0UL, -1L, 0xC40DF3FCL, 0x1527L, 0x319CL, 0xE683L},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0x1021D522L, 0x42L, 0x98E8L, 0xF6226F77L, 0x7A5BL, 0x85A9L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}}},
    {{{-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {6L, 0x0DL, 0x3939L, 0x282F80E5L, 0x6308L, 0x2EBDL, 65527UL},
      {0xD186C8CCL, 2UL, 0x6F9DL, 4294967295UL, 0x7ECAL, 0x0655L, 0xB860L},
      {6L, 0x0DL, 0x3939L, 0x282F80E5L, 0x6308L, 0x2EBDL, 65527UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0xDF6318FFL, 0x4DL, 0L, 0xD499989FL, 0x4E93L, 0x460CL, 0x5032L},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}},
     {{0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {0x2E7BD33CL, 0UL, -1L, 0xC40DF3FCL, 0x1527L, 0x319CL, 0xE683L},
      {0xD186C8CCL, 2UL, 0x6F9DL, 4294967295UL, 0x7ECAL, 0x0655L, 0xB860L},
      {0x2E7BD33CL, 0UL, -1L, 0xC40DF3FCL, 0x1527L, 0x319CL, 0xE683L},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0x1021D522L, 0x42L, 0x98E8L, 0xF6226F77L, 0x7A5BL, 0x85A9L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}},
     {{-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {6L, 0x0DL, 0x3939L, 0x282F80E5L, 0x6308L, 0x2EBDL, 65527UL},
      {0xD186C8CCL, 2UL, 0x6F9DL, 4294967295UL, 0x7ECAL, 0x0655L, 0xB860L},
      {6L, 0x0DL, 0x3939L, 0x282F80E5L, 0x6308L, 0x2EBDL, 65527UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0xDF6318FFL, 0x4DL, 0L, 0xD499989FL, 0x4E93L, 0x460CL, 0x5032L},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}},
     {{0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {0x2E7BD33CL, 0UL, -1L, 0xC40DF3FCL, 0x1527L, 0x319CL, 0xE683L},
      {0xD186C8CCL, 2UL, 0x6F9DL, 4294967295UL, 0x7ECAL, 0x0655L, 0xB860L},
      {0x2E7BD33CL, 0UL, -1L, 0xC40DF3FCL, 0x1527L, 0x319CL, 0xE683L},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0x1021D522L, 0x42L, 0x98E8L, 0xF6226F77L, 0x7A5BL, 0x85A9L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}}},
    {{{-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {6L, 0x0DL, 0x3939L, 0x282F80E5L, 0x6308L, 0x2EBDL, 65527UL},
      {0xD186C8CCL, 2UL, 0x6F9DL, 4294967295UL, 0x7ECAL, 0x0655L, 0xB860L},
      {6L, 0x0DL, 0x3939L, 0x282F80E5L, 0x6308L, 0x2EBDL, 65527UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0xDF6318FFL, 0x4DL, 0L, 0xD499989FL, 0x4E93L, 0x460CL, 0x5032L},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}},
     {{0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {0x2E7BD33CL, 0UL, -1L, 0xC40DF3FCL, 0x1527L, 0x319CL, 0xE683L},
      {0xD186C8CCL, 2UL, 0x6F9DL, 4294967295UL, 0x7ECAL, 0x0655L, 0xB860L},
      {0x2E7BD33CL, 0UL, -1L, 0xC40DF3FCL, 0x1527L, 0x319CL, 0xE683L},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0x1021D522L, 0x42L, 0x98E8L, 0xF6226F77L, 0x7A5BL, 0x85A9L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}},
     {{-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {6L, 0x0DL, 0x3939L, 0x282F80E5L, 0x6308L, 0x2EBDL, 65527UL},
      {0xD186C8CCL, 2UL, 0x6F9DL, 4294967295UL, 0x7ECAL, 0x0655L, 0xB860L},
      {6L, 0x0DL, 0x3939L, 0x282F80E5L, 0x6308L, 0x2EBDL, 65527UL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {-1L, 0x79L, 0x12DCL, 4294967294UL, 1L, 3L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0xDF6318FFL, 0x4DL, 0L, 0xD499989FL, 0x4E93L, 0x460CL, 0x5032L},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}},
     {{0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {0x2E7BD33CL, 0UL, -1L, 0xC40DF3FCL, 0x1527L, 0x319CL, 0xE683L},
      {0xD186C8CCL, 2UL, 0x6F9DL, 4294967295UL, 0x7ECAL, 0x0655L, 0xB860L},
      {0x2E7BD33CL, 0UL, -1L, 0xC40DF3FCL, 0x1527L, 0x319CL, 0xE683L},
      {0x2E2C5736L, 250UL, 1L, 0xCAF8AA5BL, 1L, 6L, 0x3ECDL},
      {0xF1A53783L, 0UL, 1L, 0xD59BB75FL, 0xF1AFL, -4L, 0x327DL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L},
      {0x1021D522L, 0x42L, 0x98E8L, 0xF6226F77L, 0x7A5BL, 0x85A9L, 65535UL},
      {0x2F772B8AL, 0UL, -8L, 0x0AD585B8L, 0xFC90L, 0L, 0xB137L}}}};
static uint8_t g_146 = 252UL;
static int8_t g_159 = 0x13L;
static int16_t g_160 = (-1L);
static int32_t g_162 = 8L;
static int32_t g_181 = 0x41F1B08CL;
static uint32_t g_223 = 0x5C1F3B26L;
static struct S2 g_290 = {-1L, 249UL, -1L, 1UL, 0L, 0xF8BFL, 65533UL};
static uint8_t g_368[6] = {0xABL, 0xC9L, 0xC9L, 0xABL, 0xC9L, 0xC9L};
static int32_t g_374 = 1L;
static uint16_t g_380[4][3] = {{65535UL, 0x87ECL, 0x87ECL},
                               {65535UL, 0x87ECL, 0x87ECL},
                               {65535UL, 0x87ECL, 0x87ECL},
                               {65535UL, 0x87ECL, 0x87ECL}};
static int16_t g_392 = 0L;
static struct S1 g_415[4][3] = {
    {{0x2CL, 0x004BFDDCL, 0x9246L, 0x7C76657BL, 65535UL, 1L},
     {0x2CL, 0x004BFDDCL, 0x9246L, 0x7C76657BL, 65535UL, 1L},
     {0x2CL, 0x004BFDDCL, 0x9246L, 0x7C76657BL, 65535UL, 1L}},
    {{0x2CL, 0x004BFDDCL, 0x9246L, 0x7C76657BL, 65535UL, 1L},
     {0x2CL, 0x004BFDDCL, 0x9246L, 0x7C76657BL, 65535UL, 1L},
     {0x2CL, 0x004BFDDCL, 0x9246L, 0x7C76657BL, 65535UL, 1L}},
    {{0x2CL, 0x004BFDDCL, 0x9246L, 0x7C76657BL, 65535UL, 1L},
     {0x2CL, 0x004BFDDCL, 0x9246L, 0x7C76657BL, 65535UL, 1L},
     {0x2CL, 0x004BFDDCL, 0x9246L, 0x7C76657BL, 65535UL, 1L}},
    {{0x2CL, 0x004BFDDCL, 0x9246L, 0x7C76657BL, 65535UL, 1L},
     {0x2CL, 0x004BFDDCL, 0x9246L, 0x7C76657BL, 65535UL, 1L},
     {0x2CL, 0x004BFDDCL, 0x9246L, 0x7C76657BL, 65535UL, 1L}}};
static int32_t g_447 = 1L;
static uint16_t g_449 = 2UL;
static int32_t g_467 = 1L;
static int8_t g_468 = 0x16L;
static int16_t g_470 = 0xEE57L;
static uint16_t g_472[2][2][10] = {
    {{0x567DL, 0x567DL, 65535UL, 65529UL, 65535UL, 0x567DL, 0x567DL, 65535UL,
      65529UL, 65535UL},
     {0x567DL, 0x567DL, 65535UL, 65529UL, 65535UL, 0x567DL, 0x567DL, 65535UL,
      65529UL, 65535UL}},
    {{0x567DL, 0x567DL, 65535UL, 65529UL, 65535UL, 0x567DL, 0x567DL, 65535UL,
      65529UL, 65535UL},
     {0x567DL, 0x567DL, 65535UL, 65529UL, 65535UL, 0x567DL, 0x567DL, 65535UL,
      65529UL, 65535UL}}};
static uint8_t g_580 = 0x7CL;
static int16_t g_584 = (-1L);
static int16_t g_766 = 0xF7E8L;
static uint16_t g_811 = 0UL;
static int16_t g_845 = (-1L);
static uint32_t g_846[9][8] = {
    {4294967295UL, 0xC48835D1L, 4294967295UL, 0x2E1A3ECEL, 4294967295UL,
     0x2E1A3ECEL, 4294967295UL, 0xC48835D1L},
    {4294967295UL, 0x2E1A3ECEL, 4294967295UL, 0xC48835D1L, 4294967295UL,
     0x2E1A3ECEL, 4294967295UL, 0x2E1A3ECEL},
    {4294967295UL, 0xC48835D1L, 4294967290UL, 0xC48835D1L, 4294967295UL,
     4294967295UL, 4294967295UL, 0xC48835D1L},
    {4294967295UL, 0xC48835D1L, 4294967295UL, 0x2E1A3ECEL, 4294967295UL,
     0x2E1A3ECEL, 4294967295UL, 0xC48835D1L},
    {4294967295UL, 0x2E1A3ECEL, 4294967295UL, 0xC48835D1L, 4294967295UL,
     0x2E1A3ECEL, 4294967295UL, 0x2E1A3ECEL},
    {4294967295UL, 0xC48835D1L, 4294967290UL, 0xC48835D1L, 4294967295UL,
     4294967295UL, 4294967295UL, 0xC48835D1L},
    {4294967295UL, 0xC48835D1L, 4294967295UL, 0x2E1A3ECEL, 4294967295UL,
     0x2E1A3ECEL, 4294967295UL, 0xC48835D1L},
    {4294967295UL, 0x2E1A3ECEL, 4294967295UL, 0xC48835D1L, 4294967295UL,
     0x2E1A3ECEL, 4294967295UL, 0x2E1A3ECEL},
    {4294967295UL, 0xC48835D1L, 4294967290UL, 0xC48835D1L, 4294967295UL,
     4294967295UL, 4294967295UL, 0xC48835D1L}};
static uint16_t g_1038 = 0xC903L;
static int32_t g_1160 = 0x2F524F45L;
static uint32_t g_1220 = 0UL;
static uint32_t func_1(void);
static int32_t func_2(const struct S0 p_3, int32_t p_4);
static int32_t func_6(int32_t p_7, uint32_t p_8, uint32_t p_9);
static int32_t func_20(const int8_t p_21);
static uint32_t func_30(struct S2 p_31, int32_t p_32);
static int8_t func_48(uint8_t p_49, uint8_t p_50, const struct S2 p_51,
                      int32_t p_52, uint32_t p_53);
static uint8_t func_54(uint8_t p_55, int32_t p_56, uint8_t p_57, int16_t p_58,
                       int8_t p_59);
static uint8_t func_61(struct S0 p_62);
static int16_t func_67(int8_t p_68, struct S0 p_69, uint32_t p_70,
                       struct S0 p_71, int32_t p_72);
static uint16_t func_83(int8_t p_84);
static uint32_t func_1(void) {
  uint32_t l_10 = 0x80EBBD48L;
  struct S2 l_1174[8] = {{0x1747EB85L, 0x27L, 0x4B97L, 0UL, 0x97E7L, -7L, 0UL},
                         {0L, 0x04L, 5L, 0UL, 0xFF98L, 0x60A8L, 65531UL},
                         {0x1747EB85L, 0x27L, 0x4B97L, 0UL, 0x97E7L, -7L, 0UL},
                         {0L, 0x04L, 5L, 0UL, 0xFF98L, 0x60A8L, 65531UL},
                         {0x1747EB85L, 0x27L, 0x4B97L, 0UL, 0x97E7L, -7L, 0UL},
                         {0L, 0x04L, 5L, 0UL, 0xFF98L, 0x60A8L, 65531UL},
                         {0x1747EB85L, 0x27L, 0x4B97L, 0UL, 0x97E7L, -7L, 0UL},
                         {0L, 0x04L, 5L, 0UL, 0xFF98L, 0x60A8L, 65531UL}};
  g_1160 ^= func_2(g_5[0], func_6(l_10, g_5[0].f0, l_10));
        for (g_181 = 1; (g_181 <= 7); g_181 += 1) {
        }
  return l_1174[5].f3;
}
static int32_t func_2(const struct S0 p_3, int32_t p_4) {
  return g_28.f3;
}
static int32_t func_6(int32_t p_7, uint32_t p_8, uint32_t p_9) {
  int16_t l_854 = 6L;
  struct S2 l_872 = {0xB5C80C62L, 0xAEL, -3L, 1UL, 0x456CL, 0x0154L, 4UL};
  for (; (p_7 != (-30)); --p_7) {
    uint32_t l_13[6][6][7] = {
        {{0x881DDA8DL, 0x0335900BL, 0x0335900BL, 0x881DDA8DL, 0x6B51F0EFL,
          4294967295UL, 0x881DDA8DL},
         {4294967295UL, 1UL, 0x6B51F0EFL, 0x6B51F0EFL, 1UL, 4294967295UL,
          0x0335900BL},
         {0x6B51F0EFL, 0x0335900BL, 0x407374FDL, 4294967295UL, 4294967295UL,
          0x407374FDL, 0x0335900BL},
         {0x6B51F0EFL, 0UL, 0xFC0336AEL, 0x6B51F0EFL, 4294967290UL,
          4294967290UL, 0x6B51F0EFL},
         {0xFC0336AEL, 0x0335900BL, 0xFC0336AEL, 4294967290UL, 0x0335900BL, 0UL,
          0UL},
         {0x0335900BL, 0x6B51F0EFL, 0x407374FDL, 0x6B51F0EFL, 0x0335900BL,
          0x407374FDL, 4294967295UL}},
        {{4294967295UL, 0UL, 4294967290UL, 4294967295UL, 4294967290UL, 0UL,
          4294967295UL},
         {0xFC0336AEL, 4294967295UL, 0UL, 4294967290UL, 4294967295UL,
          4294967290UL, 0UL},
         {4294967295UL, 4294967295UL, 0x407374FDL, 0x0335900BL, 0x6B51F0EFL,
          0x407374FDL, 0x6B51F0EFL},
         {0x0335900BL, 0UL, 0UL, 0x0335900BL, 4294967290UL, 0xFC0336AEL,
          0x0335900BL},
         {0xFC0336AEL, 0x6B51F0EFL, 4294967290UL, 4294967290UL, 0x6B51F0EFL,
          0xFC0336AEL, 0UL},
         {0x6B51F0EFL, 0x0335900BL, 0x407374FDL, 4294967295UL, 4294967295UL,
          0x407374FDL, 0x0335900BL}},
        {{0x6B51F0EFL, 0UL, 0xFC0336AEL, 0x6B51F0EFL, 4294967290UL,
          4294967290UL, 0x6B51F0EFL},
         {0xFC0336AEL, 0x0335900BL, 0xFC0336AEL, 4294967290UL, 0x0335900BL, 0UL,
          0UL},
         {0x0335900BL, 0x6B51F0EFL, 0x407374FDL, 0x6B51F0EFL, 0x0335900BL,
          0x407374FDL, 4294967295UL},
         {4294967295UL, 0UL, 4294967290UL, 4294967295UL, 4294967290UL, 0UL,
          4294967295UL},
         {0xFC0336AEL, 4294967295UL, 0UL, 4294967290UL, 4294967295UL,
          4294967290UL, 0UL},
         {4294967295UL, 4294967295UL, 0x407374FDL, 0x0335900BL, 0x6B51F0EFL,
          0x407374FDL, 0x6B51F0EFL}},
        {{0x0335900BL, 0UL, 0UL, 0x0335900BL, 4294967290UL, 0xFC0336AEL,
          0x0335900BL},
         {0xFC0336AEL, 0x6B51F0EFL, 4294967290UL, 4294967290UL, 0x6B51F0EFL,
          0xFC0336AEL, 0UL},
         {0x6B51F0EFL, 0x0335900BL, 0x407374FDL, 4294967295UL, 4294967295UL,
          0x407374FDL, 0x0335900BL},
         {0x6B51F0EFL, 0UL, 0xFC0336AEL, 0x6B51F0EFL, 4294967290UL,
          4294967290UL, 0x6B51F0EFL},
         {0xFC0336AEL, 0x0335900BL, 0xFC0336AEL, 4294967290UL, 0x0335900BL, 0UL,
          0UL},
         {0x0335900BL, 0x6B51F0EFL, 0x407374FDL, 0x6B51F0EFL, 0x0335900BL,
          0x407374FDL, 4294967295UL}},
        {{4294967295UL, 0UL, 4294967290UL, 4294967295UL, 4294967290UL, 0UL,
          4294967295UL},
         {0xFC0336AEL, 4294967295UL, 0UL, 4294967290UL, 4294967295UL,
          4294967290UL, 0UL},
         {4294967295UL, 4294967295UL, 0x407374FDL, 0x0335900BL, 0x6B51F0EFL,
          0x407374FDL, 0x6B51F0EFL},
         {0x0335900BL, 0UL, 0UL, 0x0335900BL, 4294967290UL, 0xFC0336AEL,
          0x0335900BL},
         {0xFC0336AEL, 0x6B51F0EFL, 4294967290UL, 4294967290UL, 0x6B51F0EFL,
          0xFC0336AEL, 0UL},
         {0x6B51F0EFL, 0x0335900BL, 4294967295UL, 0xFC0336AEL, 0xFC0336AEL,
          4294967295UL, 0UL}},
        {{4294967290UL, 0x407374FDL, 1UL, 4294967290UL, 0x881DDA8DL,
          0x881DDA8DL, 4294967290UL},
         {1UL, 0UL, 1UL, 0x881DDA8DL, 0UL, 0x407374FDL, 0x407374FDL},
         {0UL, 4294967290UL, 4294967295UL, 4294967290UL, 0UL, 4294967295UL,
          0xFC0336AEL},
         {0xFC0336AEL, 0x407374FDL, 0x881DDA8DL, 0xFC0336AEL, 0x881DDA8DL,
          0x407374FDL, 0xFC0336AEL},
         {1UL, 0xFC0336AEL, 0x407374FDL, 0x881DDA8DL, 0xFC0336AEL, 0x881DDA8DL,
          0x407374FDL},
         {0xFC0336AEL, 0xFC0336AEL, 4294967295UL, 0UL, 4294967290UL,
          4294967295UL, 4294967290UL}}};
    struct S2 l_871 = {0x31924B3EL, 3UL, 0x8534L, 0xDC3984BEL,
                       0xF496L, 0x0B1CL, 0x43F3L};
    int32_t l_890 = 1L;
    int32_t l_898 = 0x37473797L;
    uint32_t l_900 = 0x5F7B44B0L;
    int32_t l_901 = 2L;
    int32_t l_902 = 0x8CBFB14CL;
    uint32_t l_875 = 0x5056D583L;
      int8_t l_897 = 0x75L;
      g_16 = (safe_lshift_func_int16_t_s_u((0x4FL > p_8), 7));
      for (p_9 = 1; (p_9 <= 5); p_9 += 1) {
        l_854 = (l_13[p_9][p_9][(p_9 + 1)] != func_20(l_13[0][5][6]));
      }
      if (((safe_mul_func_uint16_t_u_u(
               (safe_add_func_int8_t_s_s(
                   p_7,
                   ((p_7 <= (safe_lshift_func_int8_t_s_s(0xC8L, 2))),
                    (safe_rshift_func_uint8_t_u_u(
                        (g_415[0][0].f0 =
                             ((safe_mod_func_int16_t_s_s(
                                  ((((safe_rshift_func_int16_t_s_u(
                                         (((+0x926C23A0L), 0L) &&
                                          (safe_sub_func_int32_t_s_s(
                                              p_7,
                                              (safe_mul_func_int8_t_s_s(
                                                  ((g_374 = 0x3D575655L),
                                                   (g_159 =
                                                        ((l_872 = l_871),
                                                         (safe_mod_func_int8_t_s_s(
                                                             (0x5A39L != p_9),
                                                             0x67L))))),
                                                  7UL))))),
                                         4)) &
                                     p_9) &&
                                    l_875) &&
                                   p_7),
                                  1L)) ||
                              0x2AEDL)),
                        5))))),
               4UL)) &&
           0x9AC0L)) {
        int32_t l_899 = (-8L);
        l_902 =
            ((!((safe_sub_func_int8_t_s_s(
                    p_9,
                    ((safe_mod_func_int16_t_s_s(
                         ((l_901 ^=
                           (((safe_mul_func_uint8_t_u_u(
                                 (l_900 =
                                      (((safe_mod_func_uint8_t_u_u(
                                            (safe_rshift_func_uint8_t_u_s(
                                                (safe_sub_func_uint8_t_u_u(
                                                    (safe_mul_func_int8_t_s_s(
                                                        g_766,
                                                        (l_890 &=
                                                         (g_290.f1 = p_8)))),
                                                    (-1L))),
                                                0)),
                                            p_9)) ==
                                        (safe_add_func_uint16_t_u_u(
                                            ((safe_add_func_uint16_t_u_u(
                                                 65529UL,
                                                 (((safe_lshift_func_int16_t_s_u(
                                                       ((l_854,
                                                         (((l_899 =
                                                                ((l_898 =
                                                                      l_897) !=
                                                                 p_7)) |
                                                           g_159) <= p_8)) &
                                                        7UL),
                                                       0)) != 0x2D06L) <
                                                  g_368[2]))) < 4L),
                                            g_368[2]))) > 0xC1L)),
                                 g_374)) != 0x4E8E6CE3L) <= g_28.f5)) &
                          0x43F6L),
                         g_447)),
                     8L))) |
                p_8)) <= g_5[0].f1);
          return p_9;
      } else for (; (p_8 <= 5); p_8 += 1) for (; (p_9 <= 5); p_9 += 1) l_854 = (l_13[p_9][p_9][(p_9 + 1)] != func_20(l_13[0][5][6]));
  }
  return p_7;
}
static int32_t func_20(const int8_t p_21) {
  struct S2 l_29 = {0L, 255UL, -2L, 4294967295UL, 0L, 0x519BL, 1UL};
  uint8_t l_771 = 0x77L;
  uint8_t l_772 = 0x7AL;
  int32_t l_773[3];
  for (g_16 = 0; (g_16 < 56); ++g_16) {
    struct S2 l_27 = {0xE520C3D8L, 1UL, -5L, 0xB296AD98L, 1L, 0xAEB9L, 0x3763L};
    uint32_t l_768[8][2] = {
        {4294967295UL, 0x1B4A6FFDL}, {4294967295UL, 0x1B4A6FFDL},
        {4294967295UL, 0x1B4A6FFDL}, {4294967295UL, 0x1B4A6FFDL},
        {4294967295UL, 0x1B4A6FFDL}, {4294967295UL, 0x1B4A6FFDL},
        {4294967295UL, 0x1B4A6FFDL}, {4294967295UL, 0x1B4A6FFDL}};
    uint32_t l_780 = 6UL;
      int32_t l_781[2][7][6] = {
          {{0x46A7AD03L, 0L, (-1L), 0x963E7327L, 0xD0DB5B36L, 0xD0DB5B36L},
           {0x963E7327L, 0xD0DB5B36L, 0xD0DB5B36L, 0x963E7327L, (-1L), 0L},
           {0x46A7AD03L, 1L, 0L, 0L, 0xF132239AL, 0xF53ED125L},
           {0xF132239AL, (-1L), 0xC86AD7C0L, (-1L), 0xF132239AL, 1L},
           {0xF53ED125L, 1L, 0x035D88C6L, (-1L), (-1L), 0L},
           {0L, 0xD0DB5B36L, 1L, 1L, 0xD0DB5B36L, 0L},
           {(-1L), 0L, 0x035D88C6L, 0xF132239AL, 0L, 1L}},
          {{0xD0DB5B36L, 0xF53ED125L, 0xC86AD7C0L, 0L, 0xC86AD7C0L,
            0xF53ED125L},
           {0xD0DB5B36L, 1L, 0L, 0xF132239AL, 0x035D88C6L, 0L},
           {(-1L), 0L, 0xD0DB5B36L, 1L, 1L, 0xD0DB5B36L},
           {0L, 0L, (-1L), (-1L), 0x035D88C6L, 1L},
           {0xF53ED125L, 1L, 0xF132239AL, (-1L), 0xC86AD7C0L, (-1L)},
           {0xF132239AL, 0xF53ED125L, 0xF132239AL, 1L, (-1L), 0xD0DB5B36L},
           {0xF132239AL, 1L, 0xF53ED125L, 0L, 0x963E7327L, 0x963E7327L}}};
      if (((p_21 >
            ((safe_mod_func_int32_t_s_s(
                 (g_447 ^=
                  (g_162 = (safe_rshift_func_uint16_t_u_u(
                       (safe_mul_func_int16_t_s_s(
                           ((((l_781[1][4][2] |= l_780) ==
                              (l_27.f2 !=
                               ((p_21 >=
                                 ((((((4L || p_21) ^ g_467) !=
                                     (safe_add_func_int32_t_s_s(
                                         0x3EF30D39L,
                                         (safe_sub_func_int32_t_s_s(
                                             ((g_415[3][0], g_17[5]) < 0L),
                                             p_21))))) < 4294967295UL) ==
                                   p_21) != p_21)),
                                g_467))) &
                             65527UL) > l_27.f1),
                           p_21)),
                       3)))),
                 4294967293UL)) != 2UL)) > p_21)) {
      } else {
            uint8_t l_33 = 0x8BL;
            const struct S1 l_767[10] = {
                {255UL, 0xBC75E543L, 65534UL, 4294967290UL, 0x75CFL, 0xC718L},
                {255UL, 0xBC75E543L, 65534UL, 4294967290UL, 0x75CFL, 0xC718L},
                {0x46L, 0x96764F14L, 2UL, 0x36891233L, 0UL, -7L},
                {255UL, 0xBC75E543L, 65534UL, 4294967290UL, 0x75CFL, 0xC718L},
                {255UL, 0xBC75E543L, 65534UL, 4294967290UL, 0x75CFL, 0xC718L},
                {0x46L, 0x96764F14L, 2UL, 0x36891233L, 0UL, -7L},
                {255UL, 0xBC75E543L, 65534UL, 4294967290UL, 0x75CFL, 0xC718L},
                {255UL, 0xBC75E543L, 65534UL, 4294967290UL, 0x75CFL, 0xC718L},
                {0x46L, 0x96764F14L, 2UL, 0x36891233L, 0UL, -7L},
                {255UL, 0xBC75E543L, 65534UL, 4294967290UL, 0x75CFL, 0xC718L}};
            l_773[0] =
                ((((-2L) & p_21) !=
                  (func_30(l_29, l_33),
                   (((((((l_767[6], l_768[1][1]) !=
                         (0L && (safe_mul_func_int8_t_s_s(
                                    ((l_771 && 0x4DL) >= l_772), g_28.f1)))) ^
                        l_27.f4) ||
                       1UL) &&
                      p_21) == l_27.f5),
                    l_33))) ||
                 g_290.f1);
          }
  }
  return l_772;
}
static uint32_t func_30(struct S2 p_31, int32_t p_32) {
  int8_t l_60 = 1L;
  struct S0 l_73 = {0xA2B5195EL, 0xC378L, 0x16A71534L, 2L,
                    1UL, 0xA85E45CFL, 0x1528L};
  struct S0 l_74 = {0x38899A86L, 0UL, 4294967288UL, -1L,
                    0x4BD6B41AL, 0x4168CBA4L, 0x4122L};
  int32_t l_583 = 2L;
  const struct S2 l_586 = {2L, 255UL, 0xD4B0L, 2UL, 1L, 0xD8BAL, 0xD4EAL};
  g_766 &=
      ((safe_sub_func_uint32_t_u_u(
           (safe_lshift_func_int16_t_s_s(
               (safe_lshift_func_uint16_t_u_u(
                   (safe_mul_func_uint8_t_u_u(
                       (0L ^
                        (safe_rshift_func_uint8_t_u_s(
                            0UL,
                            (safe_mul_func_int16_t_s_s(
                                (safe_mul_func_uint16_t_u_u(
                                    (func_48(
                                         func_54(
                                             g_28.f3,
                                             ((l_60 !=
                                               ((l_60,
                                                 ((g_584 =
                                                       (l_583 = func_61((
                                                            (l_60 <
                                                             (((safe_add_func_int16_t_s_s(
                                                                   l_60,
                                                                   ((safe_lshift_func_int16_t_s_s(
                                                                        l_60,
                                                                        func_67(
                                                                            l_60,
                                                                            l_73,
                                                                            p_31.f5,
                                                                            l_74,
                                                                            g_5[0]
                                                                                .f1))) &&
                                                                    p_31.f3))) ==
                                                               251UL) ^
                                                              0xA667L)),
                                                            g_5[0])))),
                                                  g_28.f5)) |
                                                g_5[0].f5)) > p_31.f5),
                                             l_74.f1, l_74.f1, l_73.f3),
                                         l_74.f1, l_586, p_31.f1,
                                         l_586.f4) > 0x05L),
                                    g_5[0].f3)),
                                0x186FL))))),
                       g_5[0].f4)),
                   4)),
               g_5[0].f2)),
           p_31.f3)) != 0UL);
  return g_162;
}
static int8_t func_48(uint8_t p_49, uint8_t p_50, const struct S2 p_51,
                      int32_t p_52, uint32_t p_53) {
  if (g_290.f4) for (; (g_181 < 24);
           g_181 = safe_add_func_int16_t_s_s(g_181, 6)) {
      } else {
    }
  return g_22;
}
static uint8_t func_54(uint8_t p_55, int32_t p_56, uint8_t p_57, int16_t p_58,
                       int8_t p_59) {
  uint32_t l_585 = 0x5F364F09L;
  return l_585;
}
static uint8_t func_61(struct S0 p_62) {
  return p_62.f1;
}
static int16_t func_67(int8_t p_68, struct S0 p_69, uint32_t p_70,
                       struct S0 p_71, int32_t p_72) {
  struct S2 l_75 = {-4L, 0x0DL, 0xC7D6L, 0x12DD267AL, 0xBDFEL, -1L, 0UL};
  g_76[1][0][7] = l_75;
  for (; (p_69.f6 > 26); p_69.f6++) {
    uint16_t l_107[5][8][6] = {
        {{0xB528L, 0xF467L, 65535UL, 0UL, 65535UL, 3UL},
         {1UL, 3UL, 0xAE1DL, 1UL, 0x2B1CL, 1UL},
         {65535UL, 0x9BD9L, 65535UL, 65535UL, 1UL, 0x259AL},
         {0xAE1DL, 3UL, 1UL, 0x47AEL, 65535UL, 0x62C9L},
         {65535UL, 0xF467L, 0xB528L, 0x47AEL, 0x1E74L, 65535UL},
         {0xAE1DL, 0UL, 0x7936L, 65535UL, 0x7936L, 0UL},
         {65535UL, 1UL, 0UL, 1UL, 65535UL, 65535UL},
         {1UL, 1UL, 0x9B28L, 0UL, 65535UL, 0x62C9L}},
        {{0xB528L, 1UL, 7UL, 3UL, 65535UL, 0x62C9L},
         {1UL, 0x9BD9L, 65535UL, 0x9BD9L, 1UL, 0UL},
         {7UL, 0xF467L, 9UL, 3UL, 0UL, 0x259AL},
         {65535UL, 65535UL, 65526UL, 0xF467L, 65535UL, 0x259AL},
         {65535UL, 0x259AL, 9UL, 0UL, 0x1E74L, 0UL},
         {65535UL, 65534UL, 65535UL, 1UL, 6UL, 0x62C9L},
         {9UL, 0x259AL, 65535UL, 1UL, 4UL, 0x47AEL},
         {65526UL, 65535UL, 65535UL, 1UL, 0x7936L, 1UL}},
        {{9UL, 0xF467L, 7UL, 1UL, 7UL, 0xF467L},
         {65535UL, 0x9BD9L, 1UL, 0UL, 65526UL, 1UL},
         {65535UL, 0UL, 65535UL, 0xF467L, 0xB528L, 0x47AEL},
         {65535UL, 0UL, 65535UL, 3UL, 65526UL, 0x62C9L},
         {7UL, 0x9BD9L, 4UL, 0x9BD9L, 7UL, 0UL},
         {1UL, 0xF467L, 3UL, 3UL, 0x7936L, 0x259AL},
         {65535UL, 65535UL, 65535UL, 0xF467L, 4UL, 0x259AL},
         {65535UL, 0x259AL, 3UL, 0UL, 6UL, 0UL}},
        {{4UL, 65534UL, 4UL, 1UL, 0x1E74L, 0x62C9L},
         {3UL, 0x259AL, 65535UL, 1UL, 65535UL, 0x47AEL},
         {65535UL, 65535UL, 65535UL, 1UL, 0UL, 1UL},
         {3UL, 0xF467L, 1UL, 1UL, 1UL, 0xF467L},
         {4UL, 0x9BD9L, 7UL, 0UL, 65535UL, 1UL},
         {65535UL, 0UL, 65535UL, 0xF467L, 0x9B28L, 0x47AEL},
         {65535UL, 0UL, 65535UL, 3UL, 65535UL, 0x62C9L},
         {1UL, 0x9BD9L, 65535UL, 0x9BD9L, 1UL, 0UL}},
        {{7UL, 0xF467L, 9UL, 3UL, 0UL, 0x259AL},
         {65535UL, 65535UL, 65526UL, 0xF467L, 65535UL, 0x259AL},
         {65535UL, 0x259AL, 9UL, 0UL, 0x1E74L, 0UL},
         {65535UL, 65534UL, 65535UL, 1UL, 6UL, 0x62C9L},
         {9UL, 0x259AL, 65535UL, 1UL, 4UL, 0x47AEL},
         {65526UL, 65535UL, 65535UL, 1UL, 0x7936L, 1UL},
         {9UL, 0xF467L, 7UL, 1UL, 7UL, 0xF467L},
         {65535UL, 0x9BD9L, 1UL, 0UL, 65526UL, 1UL}}};
    int16_t l_108 = 9L;
    uint16_t l_109 = 0x030AL;
    l_109
      |=
      ((((safe_mul_func_uint16_t_u_u (0xCA7BL, (safe_lshift_func_uint16_t_u_u (func_83 ((p_68 = (g_76[1][3][2], (+(safe_lshift_func_uint16_t_u_s ((safe_add_func_int32_t_s_s ((safe_rshift_func_uint8_t_u_s ((safe_add_func_int16_t_s_s (((((0x8701C1B6L == (safe_add_func_int16_t_s_s (((safe_lshift_func_int16_t_s_s (((g_17[5] = (g_28.f1 <= (safe_add_func_uint32_t_u_u (((safe_sub_func_int32_t_s_s (1L, (safe_lshift_func_int16_t_s_u ((safe_rshift_func_uint8_t_u_u (0x5DL, ((((p_69.f5 >= (g_28.f6 = (((p_72 ^= (safe_mod_func_uint32_t_u_u (((g_28.f2 || ((0x6B95L < g_76[2][0][9].f3) | p_68)) < l_107[2][2][5]), 0x6DA58D7DL))) ^ l_75.f5) ^ 0xA032275AL))) | l_107[3][6][2]) < p_69.f3) || g_5[0].f2))), 1)))) <= g_76[2][0][9].f6), g_28.f1)))) | 0x65F83DE7L), p_71.f1)) < g_5[0].f2), g_76[2][0][9].f5))), 0x29863923L) == l_108) != 0x10L), l_107[2][2][5])), l_107[2][2][5])), l_75.f4)), 1)))))), 13)))) || 0x6BL), p_69.f5), p_69.f6);
  }
  return g_76[2][0][9].f6;
}
static uint16_t func_83(int8_t p_84) { return g_28.f0; }
int main(int argc, char* argv[]) {
  int print_hash_value = 0;
  crc32_gentab();
  func_1();
  transparent_crc(g_16, "g_16", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
}

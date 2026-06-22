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
static int8_t(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2) {
  return
      ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ? ((si1)) :
                                                           (si1 / si2);
}
static int8_t(safe_lshift_func_int8_t_s_s)(int8_t left, int right) {
  return
      ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) ||
       (left > ((127) >> ((int)right))))
          ? ((left))
          :
          (left << ((int)right));
}
static int8_t(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right) {
  return
      ((left < 0) || (((unsigned int)right) >= 32))
          ? ((left))
          :
          (left >> ((unsigned int)right));
}
static int16_t(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2) {
  return
      (((si1 > 0) && (si2 > 0) && (si1 > ((32767) - si2))) ||
       ((si1 < 0) && (si2 < 0) && (si1 < ((-32767-1) - si2))))
          ? ((si1))
          :
          (si1 + si2);
}
static int16_t(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2) {
  return
      (((si1 ^ si2) & (((si1 ^ ((si1 ^ si2) & (~(32767)))) - si2) ^ si2)) < 0)
          ? ((si1))
          :
          (si1 - si2);
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
static int32_t(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2) {
  return
      ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ? ((si1)) :
                                                            (si1 / si2);
}
static uint8_t(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2) {
  return ui1 + ui2;
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
static uint8_t(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right) {
  return
      ((((unsigned int)right) >= 32) ||
       (left > ((255) >> ((unsigned int)right))))
          ? ((left))
          :
          (left << ((unsigned int)right));
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
static uint16_t(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return ui1 - ui2;
}
static uint16_t(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return
      (ui2 == 0) ? ((ui1)) :
                 (ui1 % ui2);
}
static uint16_t(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return
      (ui2 == 0) ? ((ui1)) :
                 (ui1 / ui2);
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
static uint16_t(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right) {
  return
      ((((int)right) < 0) || (((int)right) >= 32)) ? ((left)) :
                                                   (left >> ((int)right));
}
static uint32_t(safe_unary_minus_func_uint32_t_u)(uint32_t ui) { return -ui; }
static uint32_t(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2) {
  return ui1 + ui2;
}
static uint32_t(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2) {
  return ui1 - ui2;
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static void crc32_8bytes(uint64_t val) {
}
static void transparent_crc(uint64_t val, char *vname, int flag) {
}
static long __undefined;
static int32_t g_4 = 1L;
static uint8_t g_27[7] = {0xE7L, 0xE7L, 0xBBL, 0xE7L, 0xE7L, 0xBBL, 0xE7L};
static int32_t g_150 = 1L;
static int16_t g_185 = (-6L);
static uint32_t g_186 = 0x2B7E3690L;
static uint8_t g_205 = 251UL;
static uint32_t g_361 = 0x67B818E0L;
static uint32_t g_362 = 0x07D99C1FL;
static int32_t g_365 = 0xA54B7A8BL;
static uint32_t g_420 = 1UL;
static int32_t g_463[6] = {0x6972C5E3L, 0x6972C5E3L, 0x0CC05694L,
                           0x6972C5E3L, 0x6972C5E3L, 0x0CC05694L};
static uint8_t g_493 = 1UL;
static uint32_t g_734 = 0x10824ECDL;
static uint32_t g_753 = 4294967295UL;
static int32_t g_870 = 0L;
static const uint16_t g_1089[10] = {0x3CA5L, 0x3CA5L, 0x3CA5L, 0x3CA5L,
                                    0x3CA5L, 0x3CA5L, 0x3CA5L, 0x3CA5L,
                                    0x3CA5L, 0x3CA5L};
static uint8_t g_1201 = 0x5AL;
static int32_t g_1503 = 1L;
static int16_t g_1526[7][2] = {{1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)},
                               {1L, (-1L)}, {1L, (-1L)}, {1L, (-1L)},
                               {1L, (-1L)}};
static uint32_t g_1942 = 0UL;
static int8_t g_2050[2] = {0L, 0L};
static int32_t g_2104 = 0x87D9316EL;
static uint8_t g_2473 = 0xA9L;
static int8_t g_2503[7][7][5] = {{{0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L}},
                                 {{0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L}},
                                 {{0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L}},
                                 {{0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L}},
                                 {{0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L}},
                                 {{0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L}},
                                 {{0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L},
                                  {0x7EL, (-9L), 0L, 0xEAL, 6L}}};
static uint8_t g_2780[2] = {0UL, 0UL};
static int8_t g_2787 = 8L;
static const int32_t g_2927 = 0x8481FC27L;
static int32_t func_1(void);
static uint16_t func_28(const int32_t p_29);
static uint8_t func_32(int8_t p_33, uint16_t p_34, int32_t p_35, uint8_t p_36);
static int8_t func_37(int32_t p_38, int8_t p_39, int32_t p_40);
static int16_t func_41(uint8_t p_42, int16_t p_43, uint32_t p_44, int16_t p_45,
                       int32_t p_46);
static int8_t func_49(int8_t p_50, uint16_t p_51, const uint32_t p_52);
static const uint8_t func_57(uint8_t p_58, int8_t p_59, int8_t p_60,
                             int32_t p_61, int8_t p_62);
static uint16_t func_65(uint8_t p_66, uint32_t p_67);
static int8_t func_81(int8_t p_82, int32_t p_83);
static uint8_t func_85(uint8_t p_86, uint16_t p_87, int8_t p_88);
static int32_t func_1(void) {
  uint16_t l_7 = 0x272AL;
  int32_t l_10[7];
  int8_t l_1943[4][2][4] = {
      {{(-1L), (-1L), 0x94L, 0xB9L}, {(-1L), (-1L), 0x94L, 0xB9L}},
      {{(-1L), (-1L), 0x94L, 0xB9L}, {(-1L), (-1L), 0x94L, 0xB9L}},
      {{(-1L), (-1L), 0x94L, 0xB9L}, {(-1L), (-1L), 0x94L, 0xB9L}},
      {{(-1L), (-1L), 0x94L, 0xB9L}, {(-1L), (-1L), 0x94L, 0xB9L}}};
  uint32_t l_2982 = 0xE195B792L;
  int i, j, k;
  for (; i < 7; i++)
    l_10[i] = 0x0E704F3DL;
  l_10[2] = (safe_add_func_uint8_t_u_u(
      (g_4 < g_4), (((safe_mod_func_uint8_t_u_u(l_7, l_7)) &
                     (safe_sub_func_uint32_t_u_u(g_4, g_4))) == g_4)));
  g_27[6] ^=
      ((!0x8421L) &
       ((safe_sub_func_uint16_t_u_u(
            (safe_mod_func_uint16_t_u_u(
                (safe_sub_func_int16_t_s_s(
                    ((-6L) | l_7),
                    ((safe_add_func_uint8_t_u_u(
                         (0x62L <=
                          (safe_div_func_int32_t_s_s(
                              ((safe_add_func_uint8_t_u_u(
                                   ((~l_10[6]) >
                                    (safe_add_func_int8_t_s_s(
                                        (safe_add_func_int16_t_s_s(
                                            (-1L), (l_10[2] >=
                                                    (0x5A8CCEDBL > l_10[2])))),
                                        g_4))),
                                   l_10[2])) == 0xD4L),
                              0xB79DC866L))),
                         l_10[2])) |
                     0x4DL))),
                65526UL)),
            g_4)) ^
        g_4));
  if (g_27[6]) {
    uint32_t l_829 = 0x8A6CA8BCL;
    int8_t l_1959 = 0x7CL;
    if ((g_27[6] !=
         func_28((safe_sub_func_uint8_t_u_u(
             func_32(
                 func_37(
                     (((((func_41(
                              (safe_mul_func_int8_t_s_s(
                                  1L,
                                  (func_49(
                                       (safe_mod_func_uint16_t_u_u(
                                           (0L &
                                            ((safe_mod_func_int8_t_s_s(
                                                 0x02L, (g_4 ^ g_4))) <
                                             func_57(
                                                 (((safe_mod_func_uint16_t_u_u(
                                                       func_65(
                                                           (safe_mul_func_uint8_t_u_u(
                                                               g_4, g_4)),
                                                           g_27[0]),
                                                       1UL)) &
                                                   0x0D3385B3L) <= l_10[0]),
                                                 l_829, g_753, g_734, g_734))),
                                           g_27[6])),
                                       l_7, g_1526[4][0]) < g_1942))),
                              g_27[5], g_1526[5][0], l_1943[3][1][0],
                              g_1526[5][0]) != 1L) == l_829) ^
                        g_734) &&
                       l_10[2]) > g_734),
                     l_1959, g_27[6]),
                 l_7, g_4, l_829),
             l_10[2]))))) {
    } else {}
  } else {
  }
  return l_2982;
}
static uint16_t func_28(const int32_t p_29) {
  uint16_t l_2942 = 65535UL;
  return g_27[6];
}
static uint8_t func_32(int8_t p_33, uint16_t p_34, int32_t p_35, uint8_t p_36) {
  return g_2503[1][3][2];
}
static int8_t func_37(int32_t p_38, int8_t p_39, int32_t p_40) {
    uint32_t l_2084 = 1UL;
  return g_1503;
}
static int16_t func_41(uint8_t p_42, int16_t p_43, uint32_t p_44, int16_t p_45,
                       int32_t p_46) {
  return p_42;
}
static int8_t func_49(int8_t p_50, uint16_t p_51, const uint32_t p_52) {
  int32_t l_1940[5];
  int32_t l_1941 = (-1L);
  return l_1940[1];
}
static const uint8_t func_57(uint8_t p_58, int8_t p_59, int8_t p_60,
                             int32_t p_61, int8_t p_62) {
  int32_t l_849 = 0L;
  int32_t l_850 = 1L;
  int32_t l_918 = 0xF9576AD6L;
  int16_t l_1230 = 1L;
  int32_t l_1251 = 0x3A9B52D8L;
  int32_t l_1260[10][9][2] = {{{0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L}},
                              {{0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L}},
                              {{0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L}},
                              {{0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L}},
                              {{0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L}},
                              {{0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L}},
                              {{0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L}},
                              {{0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L}},
                              {{0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L}},
                              {{0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L},
                               {0x754A2931L, 3L}}};
    int32_t l_1264[10];
    uint16_t l_1527 = 4UL;
    {}
    int8_t l_968 = 0x1FL;
      const int8_t l_1108 = 0xC5L;
      int32_t l_1253 = (-1L);
        int32_t l_1219 = 0xF3C6DCF4L;{}
  return g_463[2];
}
static uint16_t func_65(uint8_t p_66, uint32_t p_67) {
  uint32_t l_72 = 1UL;
  int32_t l_311 = 0xE02EBC21L;
  int32_t l_461 = (-6L);
  int32_t l_481 = 0L;
  int32_t l_483 = 0x1E88A426L;
  for (p_66 = (-14); (p_66 >= 51); ++p_66) {
    uint16_t l_76 = 1UL;
    int8_t l_241 = 0xAAL;
    int8_t l_266 = (-8L);
    int8_t l_354[8][10][3] = {{{1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L}},
                              {{1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L}},
                              {{1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L}},
                              {{1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L}},
                              {{1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L}},
                              {{1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L}},
                              {{1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L}},
                              {{1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L},
                               {1L, 1L, 0xC7L}}};
    int32_t l_470 = 0xB853B75FL;
    uint16_t l_572[9] = {0x5125L, 1UL, 0x5125L, 1UL, 0x5125L,
                         1UL, 0x5125L, 1UL, 0x5125L};
    int32_t l_686 = 0xAAB29B71L;
    if ((l_76 | l_72)) {
      uint16_t l_84 = 65530UL;
      int32_t l_206[7][4][9] = {
          {{0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L}},
          {{0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L}},
          {{0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L}},
          {{0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L}},
          {{0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L}},
          {{0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L}},
          {{0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L},
           {0x88135523L, 3L, 1L, 0x6DE7A280L, 4L, 0x28373B84L, 0xE283F7B2L,
            0xE283F7B2L, 0x28373B84L}}};
      int32_t l_219 = 0L;
      int16_t l_489 = 0xF99BL;
      l_206[5][0][3] |= (safe_lshift_func_int8_t_s_s(
          ((safe_sub_func_int8_t_s_s(
               0xDDL,
               func_81((((l_84 >= func_85(p_66,
                                          ((~(safe_rshift_func_int16_t_s_u(
                                               g_27[6], p_66))) |
                                           0xF78CL),
                                          p_66)) < p_66) >= p_67),
                       g_4))) == 0xEAL),
          p_67));
      int i;
        int32_t l_285 = 0xA9A72296L;
        if ((p_67 |
             (((safe_mul_func_int16_t_s_s(
                   0x0890L,
                   (((((safe_lshift_func_uint16_t_u_u(g_150, g_205)) |
                       ((~((~(safe_mod_func_int16_t_s_s(
                               (((safe_mod_func_int16_t_s_s(
                                     l_219, (safe_mul_func_int8_t_s_s(
                                                (g_185 >= 0x9188L), 0x26L)))) &&
                                 (p_67 && 0x4D6F5489L)) ||
                                g_205),
                               g_27[6]))) > l_266)) < (-1L))) != 0UL) ||
                     g_27[3]) <= p_66))) &
               p_66) != p_67))) l_206[5][0][3] |= (safe_lshift_func_int8_t_s_s(
              ((safe_sub_func_int8_t_s_s(
                   0xDDL,
                   func_81((((l_84 >= func_85(p_66,
                                              ((~(safe_rshift_func_int16_t_s_u(
                                                   g_27[6], p_66))) |
                                               0xF78CL),
                                              p_66)) < p_66) >= p_67),
                           g_4))) == 0xEAL),
              p_67)); else {
        }
        for (; (l_241 < 20); ++l_241) {
          l_311 &=
              ((safe_div_func_int8_t_s_s(
                   ((safe_add_func_int16_t_s_s(
                        (0xB2L || p_67),
                        ((((((-5L) < (~7L)) ==
                            (safe_add_func_int32_t_s_s(
                                (safe_mod_func_int8_t_s_s(
                                    (((safe_add_func_int8_t_s_s(l_285, 0x0DL)) &
                                      (g_420 <= 1L)) >
                                     (safe_sub_func_uint32_t_u_u(
                                         (safe_add_func_uint32_t_u_u(
                                             ((safe_mul_func_int16_t_s_s(
                                                  g_4, 65535UL)) > p_67),
                                             0L)),
                                         g_186))),
                                    p_67)),
                                p_66))) ^
                           l_76) == 255UL) > 0xD2L))) == g_4),
                   p_66)) |
               g_365);
          int i;
            for (; i < 2; i++)
              {}
        }
    } else {
    }
  }
  return p_66;
}
static int8_t func_81(int8_t p_82, int32_t p_83) {
  int8_t l_199 = 0x41L;
  g_186 = p_82;
  return g_185;
}
static uint8_t func_85(uint8_t p_86, uint16_t p_87, int8_t p_88) {
  uint32_t l_91 = 4294967295UL;
  int8_t l_104[9] = {0x0CL, 0xBEL, 0x0CL, 0xBEL, 0x0CL,
                     0xBEL, 0x0CL, 0xBEL, 0x0CL};
  int i;
  if (p_87) {
    uint8_t l_100[4][5] = {{0x69L, 0x69L, 7UL, 0x3FL, 0UL},
                           {0x69L, 0x69L, 7UL, 0x3FL, 0UL},
                           {0x69L, 0x69L, 7UL, 0x3FL, 0UL},
                           {0x69L, 0x69L, 7UL, 0x3FL, 0UL}};
    int32_t l_120 = 0x5CE3A63AL;
    int16_t l_182 = 0xC430L;
    uint32_t l_107 = 0x3D1D1CE1L;
      const int32_t l_147 = 0x8EAAB991L;
      int8_t l_171 = 8L;
      int i;
      for (p_87 = 0; (p_87 < 25); ++p_87) {
        int16_t l_105[7] = {0L, (-9L), 0L, (-9L), 0L, (-9L), 0L};
        l_120 ^= l_104[6];
        for (l_91 = 0; (l_91 <= 3); l_91 += 1) {
          int i, j;
          l_120 =
              (((safe_mul_func_int16_t_s_s(
                    (safe_rshift_func_int8_t_s_u(
                        (safe_mod_func_int16_t_s_s(
                            (safe_div_func_uint16_t_u_u(0xB072L, l_105[l_91])),
                            (safe_mod_func_int32_t_s_s(l_105[(l_91 + 2)],
                                                       0xC767A1E7L)))),
                        6)),
                    (safe_sub_func_int8_t_s_s(
                        (safe_rshift_func_int8_t_s_u(
                            (safe_rshift_func_uint8_t_u_s(
                                (safe_mod_func_uint16_t_u_u(
                                    0xD326L,
                                    (safe_lshift_func_int16_t_s_s(
                                        (safe_mod_func_uint8_t_u_u(
                                            0x4AL, l_100[l_91][l_91])),
                                        ((((safe_add_func_uint8_t_u_u(
                                               (((safe_div_func_int8_t_s_s(
                                                     1L, l_100[l_91][l_91])) &
                                                 4L) &
                                                0x8538L),
                                               l_100[l_91][(l_91 + 1)])) !=
                                           p_86) < l_100[l_91][(l_91 + 1)]) ^
                                         l_120))))),
                                2)),
                            3)),
                        l_105[(l_91 + 2)])))) &&
                l_147) != l_105[2]);
          l_120 ^= (!0x421085DAL);
        }
      }
  } else {
    g_185 = (-2L);
  }
  return g_27[6];
}
int main(void) {
  int i, j, k;
  int print_hash_value = 0;
  func_1();
  for (; i < 7; i++) transparent_crc(g_27[i], "g_27[i]", print_hash_value);
  for (; i < 10; i++) {
  }
}

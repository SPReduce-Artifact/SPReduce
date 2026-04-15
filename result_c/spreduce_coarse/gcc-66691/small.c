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
static int8_t(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2) {
  return (((si1 ^ si2) & (((si1 ^ ((si1 ^ si2) & (~
                                                  (127)
                                                          ))) - si2) ^ si2)) <
          0)
             ? ((si1))
             : (si1 - si2);
}
static int8_t(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2) {
  return (((si1 > 0) && (si2 > 0) && (si1 > (
                                            (127) 
                                                     / si2))) ||
          ((si1 > 0) && (si2 <= 0) && (si2 < (
                                             (-128) 
                                                      / si1))) ||
          ((si1 <= 0) && (si2 > 0) && (si1 < (
                                             (-128) 
                                                      / si2))) ||
          ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < (
                                                            (127) 
                                                                     / si1))))
             ? ((si1))
             : si1 * si2;
}
static int8_t(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2) {
  return ((si2 == 0) || ((si1 == 
                                (-128)
                                        ) && (si2 == (-1)))) ? ((si1))
                                                              : (si1 % si2);
}
static int8_t(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2) {
  return ((si2 == 0) || ((si1 == 
                                (-128)
                                        ) && (si2 == (-1)))) ? ((si1))
                                                              : (si1 / si2);
}
static int8_t(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right) {
  return ((left < 0) || (((unsigned int)right) >= 32) ||
          (left > (
                  (127) 
                           >> ((unsigned int)right))))
             ? ((left))
             : (left << ((unsigned int)right));
}
static int8_t(safe_rshift_func_int8_t_s_s)(int8_t left, int right) {
  return ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))
             ? ((left))
             : (left >> ((int)right));
}
static int8_t(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right) {
  return ((left < 0) || (((unsigned int)right) >= 32))
             ? ((left))
             : (left >> ((unsigned int)right));
}
static int16_t(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2) {
  return (((si1 > 0) && (si2 > 0) && (si1 > (
                                            (32767) 
                                                      - si2))) ||
          ((si1 < 0) && (si2 < 0) && (si1 < (
                                            (-32767-1) 
                                                      - si2))))
             ? ((si1))
             : (si1 + si2);
}
static int16_t(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2) {
  return (((si1 > 0) && (si2 > 0) && (si1 > (
                                            (32767) 
                                                      / si2))) ||
          ((si1 > 0) && (si2 <= 0) && (si2 < (
                                             (-32767-1) 
                                                       / si1))) ||
          ((si1 <= 0) && (si2 > 0) && (si1 < (
                                             (-32767-1) 
                                                       / si2))) ||
          ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < (
                                                            (32767) 
                                                                      / si1))))
             ? ((si1))
             : si1 * si2;
}
static int16_t(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2) {
  return ((si2 == 0) || ((si1 == 
                                (-32767-1)
                                         ) && (si2 == (-1)))) ? ((si1))
                                                               : (si1 % si2);
}
static int16_t(safe_lshift_func_int16_t_s_s)(int16_t left, int right) {
  return ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) ||
          (left > (
                  (32767) 
                            >> ((int)right))))
             ? ((left))
             : (left << ((int)right));
}
static int16_t(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right) {
  return ((left < 0) || (((unsigned int)right) >= 32) ||
          (left > (
                  (32767) 
                            >> ((unsigned int)right))))
             ? ((left))
             : (left << ((unsigned int)right));
}
static int16_t(safe_rshift_func_int16_t_s_s)(int16_t left, int right) {
  return ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))
             ? ((left))
             : (left >> ((int)right));
}
static int16_t(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right) {
  return ((left < 0) || (((unsigned int)right) >= 32))
             ? ((left))
             : (left >> ((unsigned int)right));
}
static int32_t(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2) {
  return (((si1 > 0) && (si2 > 0) && (si1 > (
                                            (2147483647) 
                                                      - si2))) ||
          ((si1 < 0) && (si2 < 0) && (si1 < (
                                            (-2147483647-1) 
                                                      - si2))))
             ? ((si1))
             : (si1 + si2);
}
static int32_t(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2) {
  return (((si1 ^ si2) & (((si1 ^ ((si1 ^ si2) & (~
                                                  (2147483647)
                                                           ))) - si2) ^ si2)) <
          0)
             ? ((si1))
             : (si1 - si2);
}
static int32_t(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2) {
  return ((si2 == 0) || ((si1 == 
                                (-2147483647-1)
                                         ) && (si2 == (-1)))) ? ((si1))
                                                               : (si1 % si2);
}
static int32_t(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2) {
  return ((si2 == 0) || ((si1 == 
                                (-2147483647-1)
                                         ) && (si2 == (-1)))) ? ((si1))
                                                               : (si1 / si2);
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
  return (ui2 == 0) ? ((ui1)) : (ui1 % ui2);
}
static uint8_t(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2) {
  return (ui2 == 0) ? ((ui1)) : (ui1 / ui2);
}
static uint8_t(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right) {
  return ((((unsigned int)right) >= 32) ||
          (left > (
                  (255) 
                            >> ((unsigned int)right))))
             ? ((left))
             : (left << ((unsigned int)right));
}
static uint8_t(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right) {
  return ((((int)right) < 0) || (((int)right) >= 32)) ? ((left))
                                                      : (left >> ((int)right));
}
static uint8_t(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right) {
  return (((unsigned int)right) >= 32) ? ((left))
                                       : (left >> ((unsigned int)right));
}
static uint16_t(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return (ui2 == 0) ? ((ui1)) : (ui1 % ui2);
}
static uint16_t(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right) {
  return ((((int)right) < 0) || (((int)right) >= 32) ||
          (left > (
                  (65535) 
                             >> ((int)right))))
             ? ((left))
             : (left << ((int)right));
}
static uint16_t(safe_lshift_func_uint16_t_u_u)(uint16_t left,
                                               unsigned int right) {
  return ((((unsigned int)right) >= 32) ||
          (left > (
                  (65535) 
                             >> ((unsigned int)right))))
             ? ((left))
             : (left << ((unsigned int)right));
}
static uint16_t(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right) {
  return ((((int)right) < 0) || (((int)right) >= 32)) ? ((left))
                                                      : (left >> ((int)right));
}
static uint16_t(safe_rshift_func_uint16_t_u_u)(uint16_t left,
                                               unsigned int right) {
  return (((unsigned int)right) >= 32) ? ((left))
                                       : (left >> ((unsigned int)right));
}
static uint32_t(safe_unary_minus_func_uint32_t_u)(uint32_t ui) { return -ui; }
static uint32_t(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2) {
  return ui1 + ui2;
}
static uint32_t(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2) {
  return ui1 - ui2;
}
static uint32_t(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2) {
  return (ui2 == 0) ? ((ui1)) : (ui1 % ui2);
}
static uint32_t(safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2) {
  return (ui2 == 0) ? ((ui1)) : (ui1 / ui2);
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static void crc32_byte(uint8_t b) {
  crc32_context = ((crc32_context >> 8) & 0x00FFFFFF) ^
                  crc32_tab[(crc32_context ^ b) & 0xFF];
}
static void crc32_8bytes(uint64_t val) {
  crc32_byte((val >> 40) & 0xff);
  crc32_byte((val >> 48) & 0xff);
  crc32_byte((val >> 56) & 0xff);
}
static void transparent_crc(uint64_t val, char *vname, int flag) {
  crc32_8bytes(val);
}
static long __undefined;
static int32_t g_2 = 0x24A8C6A5L;
static uint8_t g_5 = 0x28L;
static int8_t g_8 = 0x82L;
static int32_t g_53 = (-4L);
static int32_t g_55 = (-9L);
static int32_t g_59 = 0xDDD0C6A3L;
static int32_t g_64 = 0x1F04FECCL;
static int16_t g_65 = 0x2B72L;
static int32_t g_66 = 0xD027BAEDL;
static uint32_t g_67 = 4294967295UL;
static uint32_t g_130 = 4294967295UL;
static int32_t g_137[9][10] = {{3L, (-2L), 5L, (-1L), 0x4424CFB0L, 0xC55B1586L,
                                8L, 0x07F38625L, 0x660488F6L, 9L},
                               {3L, (-2L), 5L, (-1L), 0x4424CFB0L, 0xC55B1586L,
                                8L, 0x07F38625L, 0x660488F6L, 9L},
                               {3L, (-2L), 5L, (-1L), 0x4424CFB0L, 0xC55B1586L,
                                8L, 0x07F38625L, 0x660488F6L, 9L},
                               {3L, (-2L), 5L, (-1L), 0x4424CFB0L, 0xC55B1586L,
                                8L, 0x07F38625L, 0x660488F6L, 9L},
                               {3L, (-2L), 5L, (-1L), 0x4424CFB0L, 0xC55B1586L,
                                8L, 0x07F38625L, 0x660488F6L, 9L},
                               {3L, (-2L), 5L, (-1L), 0x4424CFB0L, 0xC55B1586L,
                                8L, 0x07F38625L, 0x660488F6L, 9L},
                               {3L, (-2L), 5L, (-1L), 0x4424CFB0L, 0xC55B1586L,
                                8L, 0x07F38625L, 0x660488F6L, 9L},
                               {3L, (-2L), 5L, (-1L), 0x4424CFB0L, 0xC55B1586L,
                                8L, 0x07F38625L, 0x660488F6L, 9L},
                               {3L, (-2L), 5L, (-1L), 0x4424CFB0L, 0xC55B1586L,
                                8L, 0x07F38625L, 0x660488F6L, 9L}};
static int32_t g_230 = 1L;
static uint32_t g_867 = 1UL;
static int8_t g_1103 = 1L;
static uint8_t g_1552 = 0xC9L;
static int32_t g_1766[7][10][3] = {{{0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L}},
                                   {{0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L}},
                                   {{0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L}},
                                   {{0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L}},
                                   {{0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L}},
                                   {{0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L}},
                                   {{0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L},
                                    {0L, 0x65D3430EL, 0xD0412C96L}}};
static uint16_t func_1(void);
static uint8_t func_14(int16_t p_15, uint32_t p_16, int8_t p_17);
static uint8_t func_20(uint32_t p_21, uint8_t p_22);
static uint8_t func_23(int32_t p_24, uint32_t p_25);
static uint32_t func_34(uint32_t p_35, int8_t p_36);
static uint32_t func_37(int32_t p_38);
static int32_t func_41(int32_t p_42, uint32_t p_43, int32_t p_44, int32_t p_45);
static uint16_t func_73(int8_t p_74, uint16_t p_75, uint16_t p_76);
static uint32_t func_80(int32_t p_81, uint32_t p_82, uint8_t p_83,
                        uint16_t p_84);
static int8_t func_87(int16_t p_88, uint32_t p_89, int32_t p_90, int32_t p_91);
static uint16_t func_1(void) {
  uint32_t l_9 = 1UL;
  int32_t l_1098 = 0x2E1AA177L;
  int32_t l_1104[4] = {0L, 0xA578909DL, 0L, 0xA578909DL};
  for (g_2 = 0; (g_2 == 3); g_2++) {
  }
  if ((((safe_rshift_func_uint8_t_u_u(
            func_14(
                (safe_mul_func_uint16_t_u_u(
                    (func_20(l_9, func_23(l_9, g_2)) !=
                     (((safe_mod_func_uint32_t_u_u(
                           0x714130E5L,
                           (safe_rshift_func_int16_t_s_s(
                               (safe_rshift_func_uint16_t_u_s(
                                   (safe_lshift_func_uint16_t_u_u(g_8, g_130)),
                                   g_8)),
                               2)))) < g_130) &&
                      l_9)),
                    l_9)),
                g_66, l_9),
            1)) &
        l_9) == g_867)) {
    uint16_t l_1046 = 0UL;
    int16_t l_1057[3];
    int i, j;
    for (i = 0; i < 3; i++)
      l_1057[i] = 0L;
    g_64 ^= g_137[8][0];
    if ((safe_mod_func_int8_t_s_s(
            (0xD43DL >=
             ((safe_mul_func_int8_t_s_s(
                  ((!g_130) &&
                   (safe_mul_func_int8_t_s_s(
                       0x0EL,
                       ((((safe_add_func_uint32_t_u_u(
                              (safe_sub_func_int8_t_s_s(
                                  g_55,
                                  (safe_mod_func_uint32_t_u_u(
                                      (l_9 &&
                                       (safe_sub_func_uint8_t_u_u(
                                           ((l_1046 ^
                                             (safe_rshift_func_uint16_t_u_s(
                                                 (safe_mul_func_int16_t_s_s(
                                                     l_1046,
                                                     (safe_mul_func_uint16_t_u_u(
                                                         0xAED6L,
                                                         (safe_rshift_func_int8_t_s_u(
                                                             (safe_mod_func_int32_t_s_s(
                                                                 ((l_9 ==
                                                                   l_1057[0]) ||
                                                                  l_9),
                                                                 g_230)),
                                                             l_9)))))),
                                                 0))) <= g_230),
                                           g_867))),
                                      g_59)))),
                              l_9)) == l_1057[1]) &&
                         1UL) |
                        g_55)))),
                  g_59)) <= (-3L))),
            l_1057[1]))) {
      uint32_t l_1074[1];
      int32_t l_1106 = 0x9AFB550FL;
      int i;
      for (i = 0; i < 1; i++)
        l_1074[i] = 2UL;
      for (g_65 = 0; (g_65 <= 2); g_65 += 1) {
        int32_t l_1109 = 0L;
        g_2 = (safe_add_func_uint32_t_u_u(
            (((4L & (safe_mod_func_uint8_t_u_u(l_1057[g_65], g_5))) > 0L) <=
             (l_1057[g_65] ^ g_867)),
            ((safe_mul_func_uint8_t_u_u(
                 (safe_mul_func_uint16_t_u_u(
                     ((safe_div_func_uint32_t_u_u(
                          (safe_add_func_int32_t_s_s(
                              ((safe_sub_func_int32_t_s_s((l_1057[2] <= g_8),
                                                          (-5L))) < g_67),
                              g_59)),
                          0xF46F254AL)) < g_230),
                     l_1057[0])),
                 l_1074[0])) > g_137[0][9])));
        if ((g_64 ==
             (safe_add_func_int32_t_s_s(
                 (((safe_add_func_uint8_t_u_u(
                       (safe_sub_func_uint32_t_u_u(
                           (safe_rshift_func_int8_t_s_s(
                               ((l_1074[0] >= l_1074[0]) <= 0UL), 0)),
                           ((safe_sub_func_uint8_t_u_u(
                                (safe_lshift_func_int16_t_s_s(
                                    (safe_rshift_func_int16_t_s_u(
                                        (g_55 &
                                         (g_230 ^
                                          ((safe_div_func_uint8_t_u_u(
                                               (safe_mul_func_int16_t_s_s(
                                                   l_1057[0],
                                                   (l_1057[0] |
                                                    ((safe_sub_func_uint32_t_u_u(
                                                         (0xE627L >= 65532UL),
                                                         0x8ED71005L)) ^
                                                     0xDCAB6DA9L)))),
                                               g_137[0][0])) >= 0x5EF0C82AL))),
                                        13)),
                                    7)),
                                l_1074[0])) < l_1074[0]))),
                       l_1057[2])) ||
                   l_1057[g_65]) ||
                  0xA92BL),
                 g_5)))) {
          int32_t l_1115 = 2L;
          int32_t l_1163 = 5L;
          for (; (g_2 != 22); ++g_2) {
          }
          g_137[4][4] =
              (((g_8 !=
                 ((safe_mul_func_uint16_t_u_u(
                      (safe_rshift_func_uint16_t_u_u(
                          l_1098,
                          (safe_sub_func_uint8_t_u_u(
                              (safe_add_func_int16_t_s_s(
                                  ((safe_div_func_int8_t_s_s(2L, g_8)) <=
                                   (g_66 &
                                    (((((!4L) != ((7L < (-1L)) !=
                                                  (g_137[0][9] == l_1115))) ==
                                       g_137[7][8]) >= l_1163) &
                                     0xE96A4512L))),
                                  l_1109)),
                              l_1057[0])))),
                      g_1103)) != l_1057[0])) |
                0x50L) > l_1106);
        } else {
        }
      }
    } else {
    }
  } else {
  }
  return l_1104[3];
}
static uint8_t func_14(int16_t p_15, uint32_t p_16, int8_t p_17) {
  int32_t l_731 = 2L;
  int32_t l_745 = (-1L);
  uint16_t l_812 = 3UL;
  int32_t l_820 = 3L;
  int16_t l_888 = 1L;
  uint32_t l_934[7];
  for (g_55 = 7; (g_55 >= 1); g_55 -= 1) {
    int32_t l_759[2][2][9] = {{{(-3L), 0x8357A014L, 0L, 0x8357A014L, (-3L),
                                (-5L), (-3L), 0x8357A014L, 0L},
                               {(-3L), 0x8357A014L, 0L, 0x8357A014L, (-3L),
                                (-5L), (-3L), 0x8357A014L, 0L}},
                              {{(-3L), 0x8357A014L, 0L, 0x8357A014L, (-3L),
                                (-5L), (-3L), 0x8357A014L, 0L},
                               {(-3L), 0x8357A014L, 0L, 0x8357A014L, (-3L),
                                (-5L), (-3L), 0x8357A014L, 0L}}};
    int32_t l_817[3][7] = {
        {(-2L), 0x051BF286L, 0L, 0x051BF286L, (-2L), 0L, (-2L)},
        {(-2L), 0x051BF286L, 0L, 0x051BF286L, (-2L), 0L, (-2L)},
        {(-2L), 0x051BF286L, 0L, 0x051BF286L, (-2L), 0L, (-2L)}};
    for (p_17 = 0; (p_17 <= 8); p_17 += 1) {
      uint8_t l_766 = 0xFCL;
      int32_t l_811 = 0xE9BF8091L;
      if (g_137[p_17][p_17]) {
        g_53 =
            ((safe_rshift_func_uint16_t_u_s(
                 (((p_15 <
                    (safe_mod_func_uint16_t_u_u(
                        g_137[g_55][(g_55 + 1)],
                        (safe_rshift_func_int16_t_s_s(
                            (safe_unary_minus_func_uint32_t_u((g_65 >= p_17))),
                            ((0x07L >=
                              ((safe_sub_func_int8_t_s_s(
                                   (((((+(safe_lshift_func_int16_t_s_u(
                                           (safe_rshift_func_uint16_t_u_s(
                                               ((safe_mod_func_uint16_t_u_u(
                                                    ((255UL <= g_2) ==
                                                     ((p_15 && 4294967295UL) ^
                                                      1UL)),
                                                    l_766)) == g_64),
                                               4)),
                                           l_745))) ||
                                       l_811) == 0x7EL) |
                                     p_16) > l_812),
                                   g_66)) <= p_15)) >= l_731)))))) != g_59) ^
                  g_5),
                 g_130)) <= (-1L));
      } else for (g_67 = 0; (g_67 <= 8); g_67 += 1) {
        }
    }
    g_137[0][9] =
        ((safe_rshift_func_int8_t_s_s(
             (safe_rshift_func_uint8_t_u_u(
                 (0xDC109275L |
                  (safe_div_func_int32_t_s_s(
                      (safe_unary_minus_func_uint32_t_u(g_230)),
                      (safe_mul_func_uint16_t_u_u(
                          (safe_div_func_uint32_t_u_u(g_2, p_15)),
                          (g_2 |
                           (g_8 ==
                            (safe_sub_func_int8_t_s_s(
                                ((l_817[1][1] !=
                                  (safe_rshift_func_int16_t_s_u(
                                      ((safe_add_func_int16_t_s_s(
                                           (((safe_mod_func_int16_t_s_s(
                                                 (safe_lshift_func_int16_t_s_s(
                                                     g_867, l_745)),
                                                 p_16)) > l_759[1][0][7]) ==
                                            g_5),
                                           p_15)) |
                                       g_8),
                                      3))) >= g_230),
                                l_759[0][1][8]))))))))),
                 0)),
             g_67)) < 3L);
  }
  if ((g_2 ||
       (safe_sub_func_int32_t_s_s(
           (p_17 |
            (safe_rshift_func_uint16_t_u_u(
                ((g_53 >=
                  (safe_add_func_uint8_t_u_u(
                      ((l_934[6] |
                        ((safe_lshift_func_int16_t_s_s(0x5D07L, 15)) ==
                         (((((p_15 ||
                              (((((safe_rshift_func_uint8_t_u_u(
                                      (safe_lshift_func_int8_t_s_u(
                                          ((safe_div_func_uint32_t_u_u(
                                               (0x56CF6FDCL > p_15), g_130)) |
                                           g_867),
                                          0)),
                                      l_934[6])) != l_731) ||
                                 g_67) >= 0UL) |
                               l_888)) >= 4294967295UL) < p_16) < g_65) !=
                          g_66))) >= g_64),
                      g_64))) &&
                 0x77CEL),
                g_65))),
           l_934[6])))) {} else {
    uint32_t l_1025[10][8][3] = {{{8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L}},
                                 {{8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L}},
                                 {{8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L}},
                                 {{8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L}},
                                 {{8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L}},
                                 {{8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L}},
                                 {{8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L}},
                                 {{8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L}},
                                 {{8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L}},
                                 {{8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L},
                                  {8UL, 0UL, 0x6D38DFD3L}}};
    g_137[0][9] =
        (l_1025[0][2][1] | (((+p_17) && 0xB9BDL) > (p_17 != l_1025[6][7][2])));
  }
  return l_820;
}
static uint8_t func_20(uint32_t p_21, uint8_t p_22) {
  uint8_t l_30 = 0xA4L;
  uint8_t l_31[3];
  uint32_t l_48 = 0xE3AA9C1CL;
  int16_t l_49 = (-6L);
  int i, j, k;
  for (i = 0; i < 3; i++)
    l_31[i] = 0x2EL;
  if (func_23(p_21, p_22)) {
  } else {
    uint8_t l_50 = 0xE5L;
    int32_t l_647 = 0x9F24E1B9L;
    uint16_t l_669[6][10][3] = {{{1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL}},
                                {{1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL}},
                                {{1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL}},
                                {{1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL}},
                                {{1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL}},
                                {{1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL},
                                 {1UL, 5UL, 4UL}}};
    uint32_t l_670 = 0x22B34C74L;
    int32_t l_671[6];
    int i, j, k;
    for (i = 0; i < 6; i++)
      l_671[i] = 0x12C7BB83L;
    l_647 |=
        (((func_34(func_37(((safe_lshift_func_uint16_t_u_s(
                                0x37D4L,
                                (func_23(func_41(g_5, l_30, g_2,
                                                 (p_21 &
                                                  ((l_48 != l_49) &&
                                                   (l_50 != (((~0x156BL) ||
                                                              0UL) == g_2))))),
                                         l_30) == 0xD0C5FD78L))) < p_21)),
                   p_22) > l_30) ^
          g_130) >= l_50);
    g_53 =
        ((((safe_rshift_func_uint8_t_u_s(
               (safe_sub_func_uint32_t_u_u(
                   g_59,
                   ((((p_21 >= l_647) == g_59) ||
                     (((safe_div_func_int8_t_s_s(0x14L, 0x78L)) <= 0x94A2L) <
                      (+((safe_mod_func_uint16_t_u_u(
                             (0xF48C939FL &
                              (safe_lshift_func_uint8_t_u_u(
                                  (safe_mod_func_int32_t_s_s(
                                      ((g_55 >= g_66) | l_31[0]), 0x4E6BB63AL)),
                                  p_22))),
                             p_22)) ^
                         g_65)))) > g_53))),
               5)) >= l_669[0][2][2]) &
          l_670) &
         l_671[1]);
  }
  return g_53;
}
static uint8_t func_23(int32_t p_24, uint32_t p_25) {
  return p_25;
}
static uint32_t func_34(uint32_t p_35, int8_t p_36) {
  return p_35;
}
static uint32_t func_37(int32_t p_38) {
  uint32_t l_92 = 1UL;
  uint32_t l_95 = 18446744073709551608UL;
  uint32_t l_580 = 7UL;
  g_53 = (safe_mul_func_uint16_t_u_u(
      ((+func_73(
           (+(safe_rshift_func_uint16_t_u_u(
               func_41(g_55, g_53,
                       ((((4294967295UL ^
                           func_80(((safe_rshift_func_int8_t_s_s(
                                        (0xE53FL | 0xE835L),
                                        func_87(p_38, l_92,
                                                (safe_lshift_func_int16_t_s_s(
                                                    g_5, 15)),
                                                l_95))) > g_130),
                                   g_53, g_130, p_38)) &&
                          g_59) >= l_92) != p_38),
                       g_59),
               2))),
           l_92, l_580)) ^
       0UL),
      65535UL));
  return g_137[0][9];
}
static int32_t func_41(int32_t p_42, uint32_t p_43, int32_t p_44,
                       int32_t p_45) {
  return g_55;
}
static uint16_t func_73(int8_t p_74, uint16_t p_75, uint16_t p_76) {
  for (g_5 = 0; (g_5 <= 56); g_5 = safe_add_func_uint8_t_u_u(g_5, 1)) for (; (g_59 <= 8); g_59 += 1) {
      return p_75;
    }
  return g_59;
}
static uint32_t func_80(int32_t p_81, uint32_t p_82, uint8_t p_83,
                        uint16_t p_84) {
  uint16_t l_563 = 65526UL;
  g_2 = l_563;
  return l_563;
}
static int8_t func_87(int16_t p_88, uint32_t p_89, int32_t p_90, int32_t p_91) {
  return p_89;
}
int main(void) {
  int print_hash_value = 0;
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_67, "g_67", print_hash_value);
  return 0;
}

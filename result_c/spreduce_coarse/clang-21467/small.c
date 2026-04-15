typedef unsigned int size_t;
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
int printf(const char *, ...);
void __assert_fail(const char *__assertion, const char *__file,
                   unsigned int __line, const char *__function);
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
static int8_t(safe_rshift_func_int8_t_s_s)(int8_t left, int right) {
  return
      ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))
          ? ((left))
          :
          (left >> ((int)right));
}
static int8_t(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right) {
  return
      ((left < 0) || (((unsigned int)right) >= 32))
          ? ((left))
          :
          (left >> ((unsigned int)right));
}
static int16_t(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2) {
  return
      (((si1 > 0) && (si2 > 0) && (si1 > ((32767) / si2))) ||
       ((si1 > 0) && (si2 <= 0) && (si2 < ((-32767 - 1) / si1))) ||
       ((si1 <= 0) && (si2 > 0) && (si1 < ((-32767 - 1) / si2))) ||
       ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((32767) / si1))))
          ? ((si1))
          :
          si1 * si2;
}
static int16_t(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2) {
  return
      ((si2 == 0) || ((si1 == (-32767 - 1)) && (si2 == (-1)))) ? ((si1)) :
                                                               (si1 % si2);
}
static int16_t(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2) {
  return
      ((si2 == 0) || ((si1 == (-32767 - 1)) && (si2 == (-1)))) ? ((si1)) :
                                                               (si1 / si2);
}
static int16_t(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right) {
  return
      ((left < 0) || (((unsigned int)right) >= 32) ||
       (left > ((32767) >> ((unsigned int)right))))
          ? ((left))
          :
          (left << ((unsigned int)right));
}
static int16_t(safe_rshift_func_int16_t_s_s)(int16_t left, int right) {
  return
      ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))
          ? ((left))
          :
          (left >> ((int)right));
}
static int16_t(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right) {
  return
      ((left < 0) || (((unsigned int)right) >= 32))
          ? ((left))
          :
          (left >> ((unsigned int)right));
}
static int32_t(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2) {
  return
      (((si1 ^ si2) & (((si1 ^ ((si1 ^ si2) & (~(2147483647)))) - si2) ^ si2)) <
       0)
          ? ((si1))
          :
          (si1 - si2);
}
static int32_t(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2) {
  return
      ((si2 == 0) || ((si1 == (-2147483647 - 1)) && (si2 == (-1)))) ? ((si1)) :
                                                                    (si1 % si2);
}
static int32_t(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2) {
  return
      ((si2 == 0) || ((si1 == (-2147483647 - 1)) && (si2 == (-1)))) ? ((si1)) :
                                                                    (si1 / si2);
}
static int64_t(safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2) {
  return
      (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807LL) - si2))) ||
       ((si1 < 0) && (si2 < 0) && (si1 < ((-9223372036854775807LL - 1) - si2))))
          ? ((si1))
          :
          (si1 + si2);
}
static int64_t(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2) {
  return
      (((si1 ^ si2) &
        (((si1 ^ ((si1 ^ si2) & (~(9223372036854775807LL)))) - si2) ^ si2)) < 0)
          ? ((si1))
          :
          (si1 - si2);
}
static int64_t(safe_div_func_int64_t_s_s)(int64_t si1, int64_t si2) {
  return
      ((si2 == 0) || ((si1 == (-9223372036854775807LL - 1)) && (si2 == (-1))))
          ? ((si1))
          :
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
static uint8_t(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right) {
  return
      ((((int)right) < 0) || (((int)right) >= 32) ||
       (left > ((255) >> ((int)right))))
          ? ((left))
          :
          (left << ((int)right));
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
static uint16_t(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return ui1 + ui2;
}
static uint16_t(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return ui1 - ui2;
}
static uint16_t(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return ((unsigned int)ui1) * ((unsigned int)ui2);
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
static uint16_t(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right) {
  return
      ((((int)right) < 0) || (((int)right) >= 32)) ? ((left)) :
                                                   (left >> ((int)right));
}
static uint16_t(safe_rshift_func_uint16_t_u_u)(uint16_t left,
                                               unsigned int right) {
  return
      (((unsigned int)right) >= 32) ? ((left)) :
                                    (left >> ((unsigned int)right));
}
static uint32_t(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2) {
  return ui1 - ui2;
}
static uint32_t(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2) {
  return
      (ui2 == 0) ? ((ui1)) :
                 (ui1 % ui2);
}
static uint64_t(safe_unary_minus_func_uint64_t_u)(uint64_t ui) { return -ui; }
static uint64_t(safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2) {
  return ui1 - ui2;
}
static uint64_t(safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2) {
  return
      (ui2 == 0) ? ((ui1)) :
                 (ui1 % ui2);
}
static uint64_t(safe_div_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2) {
  return
      (ui2 == 0) ? ((ui1)) :
                 (ui1 / ui2);
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static long __undefined;
struct S0 {
  const int32_t f0;
  signed f1 : 10;
  unsigned f2 : 22;
  const unsigned : 0;
  signed f3 : 5;
  const signed f4 : 29;
  unsigned f5 : 10;
  signed f6 : 27;
  unsigned : 0;
  unsigned f7 : 8;
};
struct S1 {
  signed f0 : 27;
  int64_t f1;
  uint32_t f2;
  const unsigned f3 : 18;
};
static uint8_t g_18 = 1UL;
static uint32_t g_93 = 0x4D75DB0CL;
static struct S1 g_98 = {9369, -2L, 1UL, 366};
static int64_t g_103 = 0x2714BD4865626A28LL;
static uint64_t g_104 = 18446744073709551615UL;
static uint32_t g_119 = 4UL;
static uint32_t g_204 = 4294967288UL;
static uint8_t g_207 = 1UL;
static int32_t g_217 = 0x69674BCFL;
static int8_t g_220 = 2L;
static int64_t g_276 = 0x7966B2488C446EDBLL;
static uint8_t g_279 = 0x77L;
static int32_t g_281 = 0x5E1E2EF9L;
static struct S0 g_307 = {0xB5D3E5C6L, 7, 62, -2, -7048, 26, 10775, 3};
static int8_t g_360 = 0xA4L;
static const int8_t g_363 = 0L;
static uint8_t g_417 = 249UL;
static const uint32_t g_443 = 18446744073709551606UL;
static int16_t g_481 = 0x424AL;
static int32_t g_483 = 0x115D8315L;
static int16_t g_486 = (-1L);
static uint8_t g_488 = 0x68L;
static uint32_t g_628 = 1UL;
static int16_t g_631 = 1L;
static uint8_t g_701 = 255UL;
static int64_t g_758 = 9L;
static uint16_t g_946 = 0xCAF7L;
static int32_t g_1054 = (-8L);
static uint32_t g_1066 = 9UL;
static const int16_t g_1338 = (-10L);
static uint32_t g_1814 = 18446744073709551615UL;
static int32_t g_1846 = 1L;
static const int16_t g_1860 = (-1L);
static int32_t func_1(void);
static uint8_t func_25(uint32_t p_26, uint16_t p_27, int16_t p_28);
static uint32_t func_31(int64_t p_32, uint32_t p_33, uint8_t p_34,
                        uint32_t p_35);
static uint8_t func_46(uint16_t p_47);
static uint8_t func_48(int64_t p_49, const int8_t p_50, int8_t p_51);
static int64_t func_58(const uint64_t p_59, const uint8_t p_60, uint32_t p_61);
static int16_t func_64(const uint32_t p_65, int64_t p_66, uint32_t p_67,
                       int64_t p_68);
static uint64_t func_109(int16_t p_110, int16_t p_111, int16_t p_112,
                         const int32_t p_113, uint16_t p_114);
static int8_t func_134(int16_t p_135, int16_t p_136, uint32_t p_137,
                       int32_t p_138, uint64_t p_139);
static uint16_t func_146(uint16_t p_147, int32_t p_148);
static int32_t func_1(void) {
  uint8_t l_12 = 247UL;
  const int32_t l_13 = 0x82AA9DADL;
  int32_t l_19 = 0x98AB79AEL;
  int32_t l_20 = (-1L);
  int32_t l_1952 = (-6L);
  int64_t l_1953 = 7L;
  int16_t l_1954 = 0L;
  int32_t l_1955 = (-6L);
  int32_t l_1956 = 0xAE3BC6E9L;
  l_1956 =
      ((safe_rshift_func_int16_t_s_u(
           (safe_mod_func_int16_t_s_s(
               (safe_sub_func_int8_t_s_s(
                   (safe_mul_func_int8_t_s_s(
                       (((safe_rshift_func_int8_t_s_u(
                             (l_1955 =
                                  (((l_12,
                                     (l_13 ^
                                      ((((safe_lshift_func_int16_t_s_u(
                                             (((((l_19 = g_18) ==
                                                 ((l_20 ^=
                                                   18446744073709551608UL) ==
                                                  (((((safe_lshift_func_int8_t_s_s(
                                                          (((safe_lshift_func_uint8_t_u_u(
                                                                (l_1952 = func_25(
                                                                     g_18,
                                                                     (safe_sub_func_uint8_t_u_u(
                                                                         247UL,
                                                                         0x11L)),
                                                                     ((func_31(
                                                                           ((((g_18,
                                                                               ((safe_mod_func_uint32_t_u_u(
                                                                                    1UL,
                                                                                    g_18)) &&
                                                                                g_18)) &
                                                                              l_12),
                                                                             0x3D8BL) <=
                                                                            0x5E13L),
                                                                           g_18,
                                                                           g_18,
                                                                           g_18) >=
                                                                       g_1338),
                                                                      0xB022L))),
                                                                g_1814)) &
                                                            l_12),
                                                           (-1L)),
                                                          l_1953)) != l_12),
                                                     g_628) &&
                                                    (-1L)) < 6L))) ||
                                                1L),
                                               g_98),
                                              7L),
                                             g_307.f0)) == 0x18L) <
                                        0x91682CECL),
                                       l_1954))) &
                                    l_1953),
                                   0x34L)),
                             2)) >= l_13) ^
                        g_1814),
                       g_98.f3)),
                   l_1953)),
               g_443)),
           15)) != l_1953);
  return g_486;
}
static uint8_t func_25(uint32_t p_26, uint16_t p_27, int16_t p_28) {
  uint8_t l_1951 = 0x1CL;
  return l_1951;
}
static uint32_t func_31(int64_t p_32, uint32_t p_33, uint8_t p_34,
                        uint32_t p_35) {
  int32_t l_53 = (-9L);
  int32_t l_77 = 0xD2166A3CL;
  const int64_t l_1684 = 4L;
  uint32_t l_1696 = 0xFAF3CCEFL;
  uint64_t l_52 = 0x22CFB64730E92F9ELL;
    int32_t l_1685 = 9L;
    l_1685 =
        ((((safe_mul_func_uint16_t_u_u(
               (safe_mod_func_uint8_t_u_u(
                   (safe_mod_func_uint8_t_u_u(
                       func_46((
                           func_48(
                               ((l_52 && (l_53 = 1L)), l_52),
                               (((safe_add_func_int64_t_s_s(
                                     g_18,
                                     (func_58(
                                          (safe_div_func_int64_t_s_s(
                                              (((0xBDD2L ==
                                                 func_64(
                                                     l_52, p_33,
                                                     l_52,
                                                     (safe_div_func_int64_t_s_s(
                                                         (safe_div_func_int16_t_s_s(
                                                             (safe_mul_func_uint16_t_u_u(
                                                                 ((safe_sub_func_int32_t_s_s(
                                                                      (((0x44L ^
                                                                         p_33) &
                                                                        0x3B350B8378C3A3B2LL) !=
                                                                       l_52),
                                                                      g_18)),
                                                                  g_18),
                                                                 0x2C65L)),
                                                             l_77)),
                                                         18446744073709551615UL)))) &
                                                g_18) ||
                                               0xF1E61188795192C2LL),
                                              g_18)),
                                          g_18, l_52) ||
                                      0x711A46C428827C80LL))) &
                                 0UL),
                                0x84L),
                               g_18) &&
                           255UL)),
                       g_18)),
                   g_307.f4)),
               g_363)) |
           l_1684),
          l_52) <= 255UL);
  return p_35;
}
static uint8_t func_46(uint16_t p_47) {
  int32_t l_118 = 0L;
  const uint32_t l_128 = 18446744073709551615UL;
  int32_t l_1481 = 0xB526AC16L;
  if (((safe_div_func_int8_t_s_s(
           (0xD48F2AEC61BC9EF2LL >=
            (l_1481 =
                 (l_118 = func_109(
                      p_47, g_18,
                      ((safe_rshift_func_int16_t_s_s(
                           func_58(g_98.f3, (g_119--), l_118), 8)) <=
                       (safe_sub_func_uint64_t_u_u(
                           (((18446744073709551614UL >=
                              ((1L ^ (g_104--)) ^
                               (safe_rshift_func_uint16_t_u_s(g_98.f3, 5)))) <
                             0x43AD1FF0D8C8EF01LL) <= g_98.f0),
                           p_47))),
                      l_128, g_18)))),
           0x65L)) ^
       l_128)) {
  } else {
  }
  return p_47;
}
static uint8_t func_48(int64_t p_49, const int8_t p_50, int8_t p_51) {
  return p_49;
}
static int64_t func_58(const uint64_t p_59, const uint8_t p_60, uint32_t p_61) {
  uint16_t l_79 = 0x325EL;
  return l_79;
}
static int16_t func_64(const uint32_t p_65, int64_t p_66, uint32_t p_67,
                       int64_t p_68) {
  int64_t l_78 = 5L;
  return l_78;
}
static uint64_t func_109(int16_t p_110, int16_t p_111, int16_t p_112,
                         const int32_t p_113, uint16_t p_114) {
  int32_t l_129 = 0x7A2FDF83L;
  uint32_t l_140 = 0xDE7BC92AL;
  struct S0 l_143 = {1L, 18, 1169, 1, 5742, 15, 5886, 4};
  if ((l_129 <
       (safe_rshift_func_int8_t_s_s(
           0x1DL,
           ((safe_rshift_func_int8_t_s_s(
                func_134(
                    l_129, l_140, p_112,
                    (safe_div_func_uint16_t_u_u(
                        g_119,
                        (l_143, (safe_lshift_func_uint8_t_u_u(
                                    (func_146(l_143.f4, (g_93 | 1L)) != l_129),
                                    l_143.f0))))),
                    p_112),
                3)) ||
            g_488))))) {
  } else {}
  return g_307.f1;
}
static int8_t func_134(int16_t p_135, int16_t p_136, uint32_t p_137,
                       int32_t p_138, uint64_t p_139) {
  uint16_t l_178 = 0xADD0L;
  int32_t l_179 = (-5L);
  int32_t l_218 = 0x992C773CL;
  uint16_t l_219 = 65526UL;
  uint32_t l_271 = 0x200BE11DL;
  int32_t l_272 = 0x971268E8L;
  uint32_t l_310 = 18446744073709551615UL;
  int32_t l_311 = 1L;
  if (((g_220 = (p_138 < (p_135 = (((((p_135 && (~((((+(safe_div_func_int64_t_s_s ((((+(safe_rshift_func_uint16_t_u_s (l_178, (safe_add_func_uint16_t_u_u ((safe_rshift_func_uint16_t_u_u (65535UL, 1)), (18446744073709551615UL & (safe_mod_func_uint64_t_u_u (((safe_mul_func_uint16_t_u_u ((safe_mod_func_int8_t_s_s (((safe_div_func_uint64_t_u_u ((safe_rshift_func_uint8_t_u_s ((safe_lshift_func_int8_t_s_s ((safe_mul_func_uint8_t_u_u (0xB4L, (g_207 = (safe_rshift_func_int16_t_s_u (p_137, (g_204++)))))), (safe_unary_minus_func_uint64_t_u (((safe_mul_func_int16_t_s_s ((safe_rshift_func_uint8_t_u_s ((g_217 = (0x9456L > (safe_div_func_int16_t_s_s (((safe_lshift_func_uint8_t_u_s (l_179, 0)) && g_98.f1), 0x2281L)))), l_178)), p_135)) & p_136))))), 3)), g_98.f2)) | g_18), 3UL)), 0xA56AL)) > l_179), l_178)))))))) & 0x95ECL) == 0xD8L), l_178))) < g_98.f0) && 0xCCL) || g_204))) > l_218) || 0UL), l_179) >= l_219)))) != g_103))
  {
    uint8_t l_231 = 0x0EL;
    struct S1 l_232 = {2542, 0x307BF7950AAE0F3FLL, 0x66D6690DL, 50};
    for (; (g_98.f1 <= (-13));
         g_98.f1 = safe_sub_func_uint64_t_u_u(g_98.f1, 2)) {
      uint16_t l_241 = 65532UL;
      int64_t l_280 = 0x47C295546736D523LL;
      p_138 = (l_232.f0 = (safe_div_func_int32_t_s_s(
                   ((((safe_mul_func_int16_t_s_s(
                          (g_204 ^
                           (safe_sub_func_int64_t_s_s(
                               (l_231 |= g_207),
                               (((+(+(g_98.f0 |= (l_232, 0x95C3721EL)))) ||
                                 (safe_sub_func_uint16_t_u_u(
                                     ((safe_sub_func_uint32_t_u_u(
                                          ((((p_135 = l_232.f1) ^
                                             ((((((((g_103, l_179) &
                                                    (safe_mod_func_int8_t_s_s(
                                                        l_232.f3, g_98.f2))) <=
                                                   0x9786083EL) ^
                                                  (-1L)) == 1L) ||
                                                g_220) ^
                                               255UL) ^
                                              g_217)) &
                                            0xE584L),
                                           0UL),
                                          g_119)) &&
                                      g_204),
                                     1UL))) >= 0x4E49BDC695E7397ELL)))),
                          0xAE28L)),
                      p_137) > p_137),
                    l_231),
                   l_232.f2)));
      if (((p_135 & p_135),
           (safe_div_func_int16_t_s_s(
               l_241, (safe_div_func_int16_t_s_s(0x2FAAL, 65535UL)))))) p_138 =
            (l_232.f0 = (safe_div_func_int32_t_s_s(
                 ((((safe_mul_func_int16_t_s_s(
                        (g_204 ^
                         (safe_sub_func_int64_t_s_s(
                             (l_231 |= g_207),
                             (((+(+(g_98.f0 |= (l_232, 0x95C3721EL)))) ||
                               (safe_sub_func_uint16_t_u_u(
                                   ((safe_sub_func_uint32_t_u_u(
                                        ((((p_135 = l_232.f1) ^
                                           ((((((((g_103, l_179) &
                                                  (safe_mod_func_int8_t_s_s(
                                                      l_232.f3, g_98.f2))) <=
                                                 0x9786083EL) ^
                                                (-1L)) == 1L) ||
                                              g_220) ^
                                             255UL) ^
                                            g_217)) &
                                          0xE584L),
                                         0UL),
                                        g_119)) &&
                                    g_204),
                                   1UL))) >= 0x4E49BDC695E7397ELL)))),
                        0xAE28L)),
                    p_137) > p_137),
                  l_231),
                 l_232.f2))); else l_311 &=
            (((safe_mul_func_uint8_t_u_u(
                  p_137,
                  (safe_sub_func_uint32_t_u_u(
                      ((((((((l_218 |= (safe_div_func_uint64_t_u_u(
                                  g_98.f0, (safe_div_func_uint64_t_u_u(
                                               (~p_136), g_98.f1))))) &&
                             (safe_rshift_func_uint16_t_u_s(
                                 (safe_sub_func_int64_t_s_s(
                                     ((safe_lshift_func_uint8_t_u_s(
                                          (((safe_lshift_func_uint16_t_u_s(
                                                ((((g_103 =
                                                        (g_207,
                                                         ((((safe_sub_func_uint64_t_u_u(
                                                                (p_139--),
                                                                (safe_add_func_uint8_t_u_u(
                                                                    (g_307,
                                                                     (+(l_280 ==
                                                                        (((255UL <
                                                                           ((safe_sub_func_uint32_t_u_u(
                                                                                0x7E3EB81DL,
                                                                                0x48762EDCL)),
                                                                            l_272)) >=
                                                                          0x86884AE3L) ==
                                                                         l_271)))),
                                                                    p_138)))) ^
                                                            4294967286UL) >
                                                           g_204) ^
                                                          l_218))) &
                                                   l_310) > 0xA833L) ==
                                                 4294967295UL),
                                                l_272)),
                                            0x58F199D2557C3E86LL) &&
                                           g_98.f3),
                                          g_279)) ^
                                      l_232.f2),
                                     p_137)),
                                 13))) |
                            g_307.f6) >= p_135) |
                          g_279) <= l_178) != g_93) ||
                       p_139),
                      g_279)))) <= l_271),
             p_136);
      p_138 = (l_232.f0 = (safe_div_func_int32_t_s_s(
                   ((((safe_mul_func_int16_t_s_s(
                          (g_204 ^
                           (safe_sub_func_int64_t_s_s(
                               (l_231 |= g_207),
                               (((+(+(g_98.f0 |= (l_232, 0x95C3721EL)))) ||
                                 (safe_sub_func_uint16_t_u_u(
                                     ((safe_sub_func_uint32_t_u_u(
                                          ((((p_135 = l_232.f1) ^
                                             ((((((((g_103, l_179) &
                                                    (safe_mod_func_int8_t_s_s(
                                                        l_232.f3, g_98.f2))) <=
                                                   0x9786083EL) ^
                                                  (-1L)) == 1L) ||
                                                g_220) ^
                                               255UL) ^
                                              g_217)) &
                                            0xE584L),
                                           0UL),
                                          g_119)) &&
                                      g_204),
                                     1UL))) >= 0x4E49BDC695E7397ELL)))),
                          0xAE28L)),
                      p_137) > p_137),
                    l_231),
                   l_232.f2)));
    }
  } else {
  }
  return p_137;
}
static uint16_t func_146(uint16_t p_147, int32_t p_148) {
  return g_98.f0;
}
int main(int argc, char *argv[]) {
  func_1();
}

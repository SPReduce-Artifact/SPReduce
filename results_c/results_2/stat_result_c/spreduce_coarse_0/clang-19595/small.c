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
static int8_t(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2) {
  return
      ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ? ((si1)) :
                                                           (si1 % si2);
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
static int16_t(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right) {
  return
      ((left < 0) || (((unsigned int)right) >= 32) ||
       (left > ((32767) >> ((unsigned int)right))))
          ? ((left))
          :
          (left << ((unsigned int)right));
}
static uint8_t(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2) {
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2) {
  return
      (ui2 == 0) ? ((ui1)) :
                 (ui1 % ui2);
}
static uint8_t(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right) {
  return
      (((unsigned int)right) >= 32) ? ((left)) :
                                    (left >> ((unsigned int)right));
}
static uint16_t(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return
      (ui2 == 0) ? ((ui1)) :
                 (ui1 % ui2);
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
static long __undefined;
static int32_t g_2 = 0xB110C93BL;
static int32_t g_5[10] = {0x4EBB0CB8L, 0x9609C3FBL, 0xDF98A59CL, 0xDF98A59CL,
                          0x9609C3FBL, 0x4EBB0CB8L, 0x9609C3FBL, 0xDF98A59CL,
                          0xDF98A59CL, 0x9609C3FBL};
static int32_t g_8[3][2] = {{0xEC79E672L, 0xEC79E672L},
                            {0xEC79E672L, 0xEC79E672L},
                            {0xEC79E672L, 0xEC79E672L}};
static int32_t g_9 = 0L;
static int8_t g_10 = 0x15L;
static uint32_t g_101 = 0x7C3E802FL;
static int8_t g_142[5][5] = {{(-1L), (-1L), 0x39L, 7L, (-6L)},
                             {(-1L), (-1L), 0x39L, 7L, (-6L)},
                             {(-1L), (-1L), 0x39L, 7L, (-6L)},
                             {(-1L), (-1L), 0x39L, 7L, (-6L)},
                             {(-1L), (-1L), 0x39L, 7L, (-6L)}};
static uint32_t g_208 = 0x8879A0F3L;
static uint16_t g_227 = 0x2153L;
static int16_t g_358 = 0L;
static uint16_t g_405[9] = {65530UL, 0xF13BL, 65530UL, 0xF13BL, 65530UL,
                            0xF13BL, 65530UL, 0xF13BL, 65530UL};
static int16_t g_406 = (-2L);
static int8_t g_458[1] = {0x90L};
static uint32_t g_508[3][10][1] = {{{0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL}},
                                   {{0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL}},
                                   {{0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL},
                                    {0xA0ABFA0EL}}};
static int16_t g_520[9] = {3L, 3L, 4L, 3L, 3L, 4L, 3L, 3L, 4L};
static int32_t g_580[4] = {0xD7605479L, 0xD7605479L, 0xD7605479L, 0xD7605479L};
static int8_t g_754 = (-7L);
static int32_t g_830 = (-1L);
static int8_t g_1165 = (-1L);
static uint32_t g_1195 = 0x8B77D5C4L;
static uint8_t g_1588 = 0xE5L;
static uint32_t g_1625 = 0x37ADF603L;
static int32_t func_1(void);
static int8_t func_11(uint16_t p_12, int16_t p_13, int32_t p_14, uint32_t p_15,
                      uint32_t p_16);
static uint16_t func_21(uint16_t p_22);
static int8_t func_23(int8_t p_24, uint8_t p_25, uint16_t p_26, int32_t p_27);
static int16_t func_36(uint32_t p_37, int32_t p_38);
static int16_t func_46(int8_t p_47, int32_t p_48, uint8_t p_49, int32_t p_50);
static int32_t func_1(void) {
  uint16_t l_2038 = 0x0693L;
  uint8_t l_2036 = 0x5DL;
    for (g_5[6] = 0; (g_5[6] == (-15)); g_5[6]--) {
      int8_t l_2037[6][7][2] = {{{0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L}},
                                {{0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L}},
                                {{0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L}},
                                {{0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L}},
                                {{0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L}},
                                {{0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L},
                                 {0x1CL, 0L}}};
          for (g_10 = 0; (g_10 <= 1); g_10 += 1) {
            int32_t l_2058 = 0x38544D0EL;
            int8_t l_2035 = 0xC1L;
              l_2058 =
                  (func_11(((g_5[6],
                             (safe_sub_func_uint32_t_u_u(
                                 g_8[(g_10 + 1)][g_9],
                                 (safe_rshift_func_uint16_t_u_u(
                                     func_21(g_10),
                                     (((safe_mod_func_int8_t_s_s(l_2035, g_9)) |
                                       l_2035) <= l_2036)))))),
                            (l_2036, g_9)),
                           l_2037[4][5][0], g_8[(g_9 + 1)][g_9], l_2038,
                           g_8[(g_9 + 1)][g_9]) != l_2035);
          }
    }
  return g_458[0];
}
static int8_t func_11(uint16_t p_12, int16_t p_13, int32_t p_14, uint32_t p_15,
                      uint32_t p_16) {
  return p_16;
}
static uint16_t func_21(uint16_t p_22) {
  uint32_t l_45[3];
  uint8_t l_51 = 0x0FL;
  int i;
  for (i = 0; i < 3; i++)
    l_45[i] = 0UL;
lbl_1856:
  g_580[1] =
      (func_23(((safe_mod_func_uint16_t_u_u(
                    g_2,
                    (safe_lshift_func_int16_t_s_u(
                        ((safe_mod_func_uint32_t_u_u(
                             (((((func_36(p_22, p_22) &&
                                  (safe_add_func_uint32_t_u_u(
                                      (safe_mod_func_uint16_t_u_u(
                                          l_45[0], func_46(p_22, g_9, g_5[8],
                                                           (((((g_5[6] | l_51) |
                                                               p_22) > 252UL) |
                                                             0xA4L) == 5L)))),
                                      g_1588))),
                                 g_1625) ||
                                p_22),
                               (-7L)),
                              4294967295UL),
                             l_45[0])),
                         g_8[1][0]),
                        g_5[0])))) > 0UL),
               g_2, p_22, g_2),
       g_458[0]);
  if (g_1195) {
    int32_t l_1717[2];
    int i;
    for (i = 0; i < 2; i++) l_1717[i] = 0L;
  lbl_1843:
    if (p_22) return l_1717[0]; else {
      uint32_t l_1823 = 0xA82F9AD5L;
    lbl_1855:
      if (((g_508[2][4][0] |
            (0x79L &
             ((((safe_mod_func_uint8_t_u_u(
                    ((p_22 &&
                      (safe_mul_func_uint8_t_u_u(
                          (((l_1717[1],
                             ((p_22 ^
                               (p_22,
                                (((safe_add_func_int8_t_s_s(
                                      (((safe_mul_func_int16_t_s_s(
                                            (p_22 < g_405[6]),
                                            (safe_add_func_uint32_t_u_u(
                                                ((safe_rshift_func_uint8_t_u_u(
                                                     (safe_rshift_func_uint16_t_u_s(
                                                         ((((((safe_sub_func_int16_t_s_s(
                                                                  ((g_580[0] ||
                                                                    g_5[3]) ^
                                                                   0L),
                                                                  p_22)),
                                                              0x7DE91883L) >=
                                                             p_22) &
                                                            g_508[2][4][0]) |
                                                           0x2254L) >= 65527UL),
                                                         8)),
                                                     2)) == p_22),
                                                0xBB9BE894L)))) >= l_1823),
                                       0xCFL),
                                      0L)) != p_22) < 0x873EFC68L))) > p_22)) >
                            0x2FL),
                           l_1823),
                          0UL))),
                     g_10),
                    g_458[0])),
                0x922804D8L),
               0x91E0L) < g_405[7]))),
           p_22)) {
      } else goto lbl_1843;
      return g_405[1];
    }
  } else return g_208;
}
static int8_t func_23(int8_t p_24, uint8_t p_25, uint16_t p_26, int32_t p_27) {
  uint16_t l_1640 = 1UL;
  for (; (p_24 != (-17)); --p_24) for (g_830 = 0; (g_830 >= (-23));
         g_830 = safe_sub_func_int16_t_s_s(g_830, 7)) for (; (p_24 != (-17)); --p_24) {
      }
  return l_1640;
}
static int16_t func_36(uint32_t p_37, int32_t p_38) {
  return p_38;
}
static int16_t func_46(int8_t p_47, int32_t p_48, uint8_t p_49, int32_t p_50) {
lbl_1442:
  return p_47;
}
int main(void) {
  func_1();
}

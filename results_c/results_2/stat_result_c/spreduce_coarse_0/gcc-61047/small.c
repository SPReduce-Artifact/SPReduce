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
static int8_t(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2) {
  return (si1 + si2);
}
static int8_t(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2) {
  return si1 * si2;
}
static int8_t(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2) {
  return ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ? ((si1))
                                                            : (si1 % si2);
}
static int8_t(safe_lshift_func_int8_t_s_s)(int8_t left, int right) {
  return ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) ||
          (left > ((127) >> ((int)right))))
             ? ((left))
             : (left << ((int)right));
}
static int8_t(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right) {
  return ((left < 0) || (((unsigned int)right) >= 32))
             ? ((left))
             : (left >> ((unsigned int)right));
}
static int16_t(safe_unary_minus_func_int16_t_s)(int16_t si) { return -si; }
static int16_t(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2) {
  return (si1 - si2);
}
static int16_t(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2) {
  return si1 * si2;
}
static int16_t(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2) {
  return ((si2 == 0) || ((si1 == (-32767 - 1)) && (si2 == (-1)))) ? ((si1))
                                                                  : (si1 % si2);
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
static int32_t(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2) {
  return (((si1 ^ si2) &
           (((si1 ^ ((si1 ^ si2) & (~(2147483647)))) - si2) ^ si2)) < 0)
             ? ((si1))
             : (si1 - si2);
}
static int32_t(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2) {
  return ((si2 == 0) || ((si1 == (-2147483647 - 1)) && (si2 == (-1))))
             ? ((si1))
             : (si1 % si2);
}
static uint8_t(safe_unary_minus_func_uint8_t_u)(uint8_t ui) { return -ui; }
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
static uint8_t(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right) {
  return ((((int)right) < 0) || (((int)right) >= 32) ||
          (left > ((255) >> ((int)right))))
             ? ((left))
             : (left << ((int)right));
}
static uint8_t(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right) {
  return ((((int)right) < 0) || (((int)right) >= 32)) ? ((left))
                                                      : (left >> ((int)right));
}
static uint16_t(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return ui1 - ui2;
}
static uint16_t(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return (ui2 == 0) ? ((ui1)) : (ui1 % ui2);
}
static uint16_t(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right) {
  return ((((int)right) < 0) || (((int)right) >= 32) ||
          (left > ((65535) >> ((int)right))))
             ? ((left))
             : (left << ((int)right));
}
static uint16_t(safe_lshift_func_uint16_t_u_u)(uint16_t left,
                                               unsigned int right) {
  return ((((unsigned int)right) >= 32) ||
          (left > ((65535) >> ((unsigned int)right))))
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
static uint32_t(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2) {
  return ui1 + ui2;
}
static uint32_t(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2) {
  return ui1 - ui2;
}
static uint32_t(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2) {
  return (ui2 == 0) ? ((ui1)) : (ui1 % ui2);
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static long __undefined;
static const int16_t g_4 = (-6L);
static int32_t g_6 = 0L;
static int16_t g_8 = (-1L);
static int16_t g_9 = 6L;
static int32_t g_10 = 0x4C90D297L;
static uint16_t g_11 = 0x471DL;
static uint16_t g_58 = 0x1CEAL;
static uint32_t g_148 = 0xE05CF484L;
static int32_t g_252 = 0xFD24D6F2L;
static int32_t g_485 = 0xFDB362B9L;
static uint32_t g_515 = 0xAA8C972FL;
static int32_t g_592 = (-1L);
static int32_t g_593[3][4][6] = {
    {{0xFCD62227L, 0xFA6E450DL, 0xFA6E450DL, 0xFCD62227L, 0xA970CF09L, (-5L)},
     {0xFCD62227L, 0xFA6E450DL, 0xFA6E450DL, 0xFCD62227L, 0xA970CF09L, (-5L)},
     {0xFCD62227L, 0xFA6E450DL, 0xFA6E450DL, 0xFCD62227L, 0xA970CF09L, (-5L)},
     {0xFCD62227L, 0xFA6E450DL, 0xFA6E450DL, 0xFCD62227L, 0xA970CF09L, (-5L)}},
    {{0xFCD62227L, 0xFA6E450DL, 0xFA6E450DL, 0xFCD62227L, 0xA970CF09L, (-5L)},
     {0xFCD62227L, 0xFA6E450DL, 0xFA6E450DL, 0xFCD62227L, 0xA970CF09L, (-5L)},
     {0xFCD62227L, 0xFA6E450DL, 0xFA6E450DL, 0xFCD62227L, 0xA970CF09L, (-5L)},
     {0xFCD62227L, 0xFA6E450DL, 0xFA6E450DL, 0xFCD62227L, 0xA970CF09L, (-5L)}},
    {{0xFCD62227L, 0xFA6E450DL, 0xFA6E450DL, 0xFCD62227L, 0xA970CF09L, (-5L)},
     {0xFCD62227L, 0xFA6E450DL, 0xFA6E450DL, 0xFCD62227L, 0xA970CF09L, (-5L)},
     {0xFCD62227L, 0xFA6E450DL, 0xFA6E450DL, 0xFCD62227L, 0xA970CF09L, (-5L)},
     {0xFCD62227L, 0xFA6E450DL, 0xFA6E450DL, 0xFCD62227L, 0xA970CF09L, (-5L)}}};
static int32_t g_677 = 9L;
static const int16_t g_806 = 0xD1DDL;
static uint32_t g_878[1][5][7] = {
    {{0xE8095E9CL, 0xFED73685L, 0xE8095E9CL, 0xFED73685L, 0xE8095E9CL,
      0xFED73685L, 0xE8095E9CL},
     {0xE8095E9CL, 0xFED73685L, 0xE8095E9CL, 0xFED73685L, 0xE8095E9CL,
      0xFED73685L, 0xE8095E9CL},
     {0xE8095E9CL, 0xFED73685L, 0xE8095E9CL, 0xFED73685L, 0xE8095E9CL,
      0xFED73685L, 0xE8095E9CL},
     {0xE8095E9CL, 0xFED73685L, 0xE8095E9CL, 0xFED73685L, 0xE8095E9CL,
      0xFED73685L, 0xE8095E9CL},
     {0xE8095E9CL, 0xFED73685L, 0xE8095E9CL, 0xFED73685L, 0xE8095E9CL,
      0xFED73685L, 0xE8095E9CL}}};
static int32_t g_1220 = (-3L);
static uint8_t g_1565 = 0xB8L;
static int16_t func_1(void);
static int32_t func_2(const uint32_t p_3);
static uint32_t func_14(uint8_t p_15, uint32_t p_16, uint16_t p_17);
static int32_t func_20(int16_t p_21);
static uint16_t func_27(int32_t p_28, int8_t p_29);
static uint32_t func_30(uint32_t p_31, uint8_t p_32);
static const uint32_t func_37(uint32_t p_38, int16_t p_39, int16_t p_40,
                              int16_t p_41, int32_t p_42);
static uint16_t func_45(uint16_t p_46, int32_t p_47, const int8_t p_48,
                        const int8_t p_49);
static int8_t func_50(int32_t p_51, uint8_t p_52, uint32_t p_53, int32_t p_54,
                      const uint32_t p_55);
static int16_t func_1(void) {
  uint32_t l_1222[10] = {2UL, 0x3B0DC92AL, 2UL, 0x3B0DC92AL, 2UL, 0x3B0DC92AL,
                         2UL, 0x3B0DC92AL, 2UL, 0x3B0DC92AL};
  l_1222[0] = func_2(g_4);
  return g_1220;
}
static int32_t func_2(const uint32_t p_3) {
  int8_t l_5 = 0x4FL;
  int32_t l_7[1];
  uint8_t l_1221 = 250UL;
  {}
  l_7[0] = ((g_10 != (func_14((g_8 | 0UL), g_10, p_3) <
                      ((-4L) & (((safe_rshift_func_uint16_t_u_u(65535UL, 11)) ^
                                 (safe_sub_func_uint16_t_u_u(
                                     (safe_add_func_uint8_t_u_u(l_5, p_3)),
                                     g_878[0][0][0]))) ||
                                g_878[0][0][1])))) != p_3);
  return l_1221;
}
static uint32_t func_14(uint8_t p_15, uint32_t p_16, uint16_t p_17) {
  int16_t l_22 = 3L;
  int8_t l_1053 = 0L;
  uint32_t l_1146 = 4294967287UL;
  if ((safe_lshift_func_uint16_t_u_u(
          (!p_17), ((((((func_20(l_22), ((!(65535UL && g_11)) < l_22)) >=
                        ((~((safe_add_func_uint32_t_u_u(
                                (safe_rshift_func_int16_t_s_s(p_15, 7)),
                                g_878[0][0][1])) ==
                            (((l_22 > l_1053) <= g_878[0][0][6]) || g_10))) >=
                         g_806)) >= p_15) >= p_15) >= l_1053) ||
                    p_16)))) {
    /* delete */
  } else {
  }
  return l_1146;
}
static int32_t func_20(int16_t p_21) {
  const int8_t l_486 = 0x5EL;
  uint8_t l_995 = 0UL;
  int32_t l_1048 = (-1L);
  l_1048 = (safe_mul_func_int16_t_s_s(
      p_21,
      (safe_sub_func_uint32_t_u_u(
          (func_27(
               p_21,
               (func_30(
                    ((safe_mod_func_uint16_t_u_u(
                         ((safe_add_func_uint32_t_u_u(
                              ((0x4186E145L &&
                                (0xD79339B8L &&
                                 (func_37(
                                      (safe_rshift_func_uint16_t_u_s(
                                          func_45(p_21,
                                                  (((func_50(g_11, p_21, g_4,
                                                             p_21, g_6) < g_9) ^
                                                    p_21),
                                                   p_21),
                                                  l_486, g_4),
                                          l_486)),
                                      l_486, l_486, g_9, g_8) < g_9))) != g_9),
                              4294967287UL)) >= g_9),
                         p_21)) &
                     l_995),
                    p_21),
                0x83L)) ^
           l_486),
          0xC35E2FB1L))));
  return p_21;
}
static uint16_t func_27(int32_t p_28, int8_t p_29) {
  return g_593[0][3][0];
}
static uint32_t func_30(uint32_t p_31, uint8_t p_32) {
  return g_11;
}
static const uint32_t func_37(uint32_t p_38, int16_t p_39, int16_t p_40,
                              int16_t p_41, int32_t p_42) {
  /* delete */
  /* delete */
  return g_806;
}
static uint16_t func_45(uint16_t p_46, int32_t p_47, const int8_t p_48,
                        const int8_t p_49) {
  return g_4;
}
static int8_t func_50(int32_t p_51, uint8_t p_52, uint32_t p_53, int32_t p_54,
                      const uint32_t p_55) {
  int32_t l_56 = (-1L);
  int32_t l_57[4] = {0x309757A8L, 0x681C37F5L, 0x309757A8L, 0x681C37F5L};
  int8_t l_253 = 5L;
  const int32_t l_284 = 0x53ABCEACL;
  for (g_11 = 0; (g_11 <= 3); g_11 += 1) {
    uint8_t l_92 = 0x5DL;
    int32_t l_163 = 8L;
    int32_t l_358 = 0L;
    uint32_t l_407 = 4294967289UL;
    int16_t l_281 = (-1L);
      const int32_t l_303 = 0x22ABE010L;
      uint8_t l_304[4][6] = {{255UL, 0x47L, 255UL, 0x47L, 255UL, 0x47L},
                             {255UL, 0x47L, 255UL, 0x47L, 255UL, 0x47L},
                             {255UL, 0x47L, 255UL, 0x47L, 255UL, 0x47L},
                             {255UL, 0x47L, 255UL, 0x47L, 255UL, 0x47L}};
      uint8_t l_322[6][1] = {{255UL}, {255UL}, {255UL},
                             {255UL}, {255UL}, {255UL}};
      uint32_t l_356 = 7UL;
      for (g_58 = 0; (g_58 <= 3); g_58 += 1) {
        int8_t l_285 = 0L;
        l_57[g_11] =
            ((((((((safe_lshift_func_uint8_t_u_s(255UL, 7)) <
                   (((((safe_sub_func_uint8_t_u_u(
                           (safe_add_func_int8_t_s_s(
                               0x47L,
                               ((safe_mod_func_uint32_t_u_u(
                                    (safe_mod_func_uint32_t_u_u(
                                        ((l_57[g_11] >=
                                          (((0xEEC47D6EL >=
                                             (safe_mod_func_uint32_t_u_u(
                                                 (((((safe_sub_func_uint8_t_u_u(
                                                         l_281, 0L)) &
                                                     (g_148,
                                                      (p_55 !=
                                                       ((safe_rshift_func_int16_t_s_u(
                                                            g_148, 13)) |
                                                        0xEBB6C139L)))) &&
                                                    l_281) &
                                                   0x1AC7L) &
                                                  0L),
                                                 p_51))) <= g_10),
                                           g_252)) &
                                         l_57[g_11]),
                                        l_284)),
                                    p_54)) ||
                                l_253))),
                           (-5L))) &&
                       g_11),
                      g_148) <= l_57[g_11]),
                    0UL)),
                  l_57[g_11]) >= g_6) ||
                l_285) <= p_52) &
              l_285) == l_57[0]);
        for (p_52 = 0; (p_52 == 36);
             p_52 = safe_add_func_uint8_t_u_u(p_52, 2)) {
          /* delete */
        }
        g_6 =
            ((((safe_sub_func_uint32_t_u_u(
                   (((safe_lshift_func_uint16_t_u_s(
                         ((65528UL != (250UL && (g_11 && 1UL))) &&
                          ((((l_281 &&
                              (~((safe_mul_func_uint8_t_u_u(
                                     ((safe_sub_func_int32_t_s_s(
                                          (g_4 ||
                                           ((((((safe_mul_func_int16_t_s_s(
                                                    (safe_lshift_func_uint8_t_u_s(
                                                        (0x1AL <=
                                                         (safe_mod_func_uint32_t_u_u(
                                                             (safe_mul_func_int8_t_s_s(
                                                                 p_53, p_52)),
                                                             p_52))),
                                                        p_54)),
                                                    g_10)) < 0x7AD94609L) &&
                                               l_57[g_11]) ||
                                              g_9) != 4L) <= l_285)),
                                          l_322[5][0])) ^
                                      p_54),
                                     l_163)) == g_10))),
                             6L) ||
                            249UL) == l_253)),
                         11)) >= 0xB193B929L) ||
                    g_148),
                   l_304[3][4])) < g_10) > g_10),
             5L);
      }
      if ((g_11 ==
           ((safe_rshift_func_uint8_t_u_s(
                (p_51,
                 ((safe_sub_func_uint16_t_u_u(
                      ((l_253 ==
                        ((((((safe_sub_func_int32_t_s_s(
                                 (((g_148 &
                                    ((((safe_rshift_func_int16_t_s_s(
                                           (((0xCAL && g_10) ^
                                             (safe_mod_func_int8_t_s_s(
                                                 (safe_mod_func_int8_t_s_s(
                                                     (safe_sub_func_int32_t_s_s(
                                                         (((safe_unary_minus_func_int16_t_s(
                                                               ((g_9 && g_8),
                                                                (safe_mod_func_int32_t_s_s(
                                                                    g_6,
                                                                    1UL))))) <=
                                                           p_55) == 1L),
                                                         g_9)),
                                                     0x83L)),
                                                 l_322[5][0]))) &
                                            l_163),
                                           2)) ^
                                       p_51),
                                      65535UL) != p_52)) <= l_322[5][0]) ||
                                  l_253),
                                 l_284)) &&
                             p_55) > p_54) ||
                           p_51) != 0x385099B4L) != 0x4DL)) > 0x63F3L),
                      0L)) &&
                  p_54)),
                p_55)) |
            0x4B15L))) g_6 =
            (l_322[5][0],
             (((((((g_6,
                    (safe_rshift_func_int16_t_s_s(
                        (l_284 <=
                         ((g_148 <= p_53) >
                          (((((p_51 <
                               ((safe_mul_func_int16_t_s_s(
                                    (safe_sub_func_uint8_t_u_u(
                                        g_58,
                                        ((safe_mul_func_uint16_t_u_u(
                                             g_11,
                                             (safe_mod_func_uint32_t_u_u(
                                                 (safe_lshift_func_uint8_t_u_s(
                                                     ((safe_add_func_int8_t_s_s(
                                                          (g_6 == l_56), 1L)) <
                                                      (-2L)),
                                                     l_92)),
                                                 0x9AFD36CDL)))) |
                                         0x02L))),
                                    p_54)) |
                                0L)) != g_4) > g_8) |
                            l_358) == l_57[3]))),
                        0))) != g_11) ||
                  0x80L) > l_92),
                p_55) <= l_303),
              l_57[g_11])); else {
        int32_t l_394 = (-1L);
        if ((((safe_sub_func_int16_t_s_s(
                  (p_51, 0L),
                  (p_55 ==
                   (p_52 &&
                    (safe_sub_func_uint8_t_u_u(
                        ((((safe_unary_minus_func_uint8_t_u((
                               ((((safe_rshift_func_int8_t_s_u(
                                      (~(safe_mod_func_uint8_t_u_u(
                                          ((((p_51 !=
                                              (((p_52,
                                                 ((safe_mod_func_int16_t_s_s(
                                                      0xC01FL, 0x0E41L)) >=
                                                  (safe_mod_func_uint32_t_u_u(
                                                      (safe_lshift_func_uint8_t_u_s(
                                                          ((safe_add_func_int8_t_s_s(
                                                               (safe_rshift_func_int16_t_s_u(
                                                                   ((((safe_lshift_func_int8_t_s_s(
                                                                          0L,
                                                                          0)) <=
                                                                      l_356) ^
                                                                     g_4),
                                                                    l_358),
                                                                   8)),
                                                               g_4)) > 4UL),
                                                          4)),
                                                      0x1DCE14E5L)))) < 5UL) &&
                                               l_303)) &&
                                             g_6),
                                            l_57[3]) > l_394),
                                          l_92))),
                                      l_163)),
                                  p_54) < g_252),
                                g_11) ||
                               3UL))) >= p_54) >= l_358) ^
                         0x5E03L),
                        0xF4L)))))) != p_52) ||
             g_11)) {
        } else for (; (l_407 != 18); ++l_407) {
            /* delete */
            /* delete */
            /* delete */
          }
      }
  }
  return g_8;
}
int main(void) {
  func_1();
}

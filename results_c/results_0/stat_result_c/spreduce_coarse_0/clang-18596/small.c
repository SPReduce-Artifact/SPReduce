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
static int16_t(safe_unary_minus_func_int16_t_s)(int16_t si) {
  return
      (si == (-32767-1)) ? ((si)) :
                        -si;
}
static int16_t(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2) {
  return
      ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ? ((si1)) :
                                                            (si1 % si2);
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
static uint8_t(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2) {
  return ui1 + ui2;
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
static uint16_t(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return ui1 + ui2;
}
static uint16_t(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2) {
  return ui1 - ui2;
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
static long __undefined;
union U0 {
  int32_t f0;
  uint16_t f1;
  const uint8_t f2;
};
static int8_t g_20 = 0x76L;
static uint8_t g_25[1] = {5UL};
static uint8_t g_28[3] = {255UL, 255UL, 255UL};
static int32_t g_66 = 0L;
static uint16_t g_67 = 65535UL;
static int32_t g_90 = (-9L);
static int16_t g_151[10][3] = {
    {(-3L), (-3L), 0x8666L}, {(-3L), (-3L), 0x8666L}, {(-3L), (-3L), 0x8666L},
    {(-3L), (-3L), 0x8666L}, {(-3L), (-3L), 0x8666L}, {(-3L), (-3L), 0x8666L},
    {(-3L), (-3L), 0x8666L}, {(-3L), (-3L), 0x8666L}, {(-3L), (-3L), 0x8666L},
    {(-3L), (-3L), 0x8666L}};
static uint8_t g_164 = 255UL;
static int16_t g_167[6][8] = {
    {0x2041L, 0x0EE3L, 0x2041L, 0xD350L, 0x4927L, (-1L), 0L, 0L},
    {0x2041L, 0x0EE3L, 0x2041L, 0xD350L, 0x4927L, (-1L), 0L, 0L},
    {0x2041L, 0x0EE3L, 0x2041L, 0xD350L, 0x4927L, (-1L), 0L, 0L},
    {0x2041L, 0x0EE3L, 0x2041L, 0xD350L, 0x4927L, (-1L), 0L, 0L},
    {0x2041L, 0x0EE3L, 0x2041L, 0xD350L, 0x4927L, (-1L), 0L, 0L},
    {0x2041L, 0x0EE3L, 0x2041L, 0xD350L, 0x4927L, (-1L), 0L, 0L}};
static union U0 g_208 = {-1L};
static uint16_t g_218 = 0x3B9CL;
static uint32_t g_233 = 0x72AEE829L;
static int8_t g_251 = 0x26L;
static uint32_t g_264 = 4294967293UL;
static uint32_t g_322[8][3] = {
    {0UL, 0UL, 0UL}, {0UL, 0UL, 0UL}, {0UL, 0UL, 0UL}, {0UL, 0UL, 0UL},
    {0UL, 0UL, 0UL}, {0UL, 0UL, 0UL}, {0UL, 0UL, 0UL}, {0UL, 0UL, 0UL}};
static const int32_t g_372 = 0x098EF1BAL;
static int8_t g_598 = 0x40L;
static uint8_t g_623 = 0x7DL;
static int32_t g_720 = 1L;
static uint16_t g_745 = 0UL;
static int32_t g_976 = 0x05761C0CL;
static uint8_t g_978[8][1] = {{0x0FL}, {0x0FL}, {0x0FL}, {0x0FL},
                              {0x0FL}, {0x0FL}, {0x0FL}, {0x0FL}};
static int16_t g_1279 = (-1L);
static int16_t g_1445 = 3L;
static uint32_t g_1467 = 1UL;
static int32_t g_1550[10][7][3] = {{{0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)}},
                                   {{0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)}},
                                   {{0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)}},
                                   {{0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)}},
                                   {{0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)}},
                                   {{0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)}},
                                   {{0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)}},
                                   {{0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)}},
                                   {{0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)}},
                                   {{0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)},
                                    {0x04495A0DL, 1L, (-1L)}}};
static uint32_t g_1574 = 0x09CC1D35L;
static int8_t g_1705 = 0x1FL;
static uint32_t g_1706 = 0xCA671623L;
static uint32_t g_1781 = 0x9E833115L;
static int16_t g_1916 = 9L;
static union U0 g_1918 = {0xD57133ADL};
static int32_t g_1939[5][3][4] = {{{4L, 4L, 0xD33DB3E6L, 0xB0F494EFL},
                                   {4L, 4L, 0xD33DB3E6L, 0xB0F494EFL},
                                   {4L, 4L, 0xD33DB3E6L, 0xB0F494EFL}},
                                  {{4L, 4L, 0xD33DB3E6L, 0xB0F494EFL},
                                   {4L, 4L, 0xD33DB3E6L, 0xB0F494EFL},
                                   {4L, 4L, 0xD33DB3E6L, 0xB0F494EFL}},
                                  {{4L, 4L, 0xD33DB3E6L, 0xB0F494EFL},
                                   {4L, 4L, 0xD33DB3E6L, 0xB0F494EFL},
                                   {4L, 4L, 0xD33DB3E6L, 0xB0F494EFL}},
                                  {{4L, 4L, 0xD33DB3E6L, 0xB0F494EFL},
                                   {4L, 4L, 0xD33DB3E6L, 0xB0F494EFL},
                                   {4L, 4L, 0xD33DB3E6L, 0xB0F494EFL}},
                                  {{4L, 4L, 0xD33DB3E6L, 0xB0F494EFL},
                                   {4L, 4L, 0xD33DB3E6L, 0xB0F494EFL},
                                   {4L, 4L, 0xD33DB3E6L, 0xB0F494EFL}}};
static int16_t func_1(void);
static uint16_t func_7(const uint8_t p_8, union U0 p_9, uint16_t p_10);
static const uint8_t func_11(uint16_t p_12, uint32_t p_13, int32_t p_14,
                             int8_t p_15);
static uint16_t func_16(int8_t p_17, uint8_t p_18, int16_t p_19);
static uint8_t func_21(int32_t p_22, int32_t p_23);
static int32_t func_31(int8_t p_32, uint32_t p_33, uint16_t p_34, int32_t p_35);
static uint16_t func_36(uint16_t p_37, union U0 p_38, int8_t p_39);
static union U0 func_40(int32_t p_41, uint8_t p_42, int8_t p_43, int16_t p_44);
static int16_t func_1(void) {
  int32_t l_6 = 1L;
  int32_t l_974 = 0x1E67093AL;
  uint16_t l_975 = 8UL;
  int32_t l_977 = 0x844D201FL;
  uint8_t l_1389 = 8UL;
  int32_t l_1951 = 0xAD55A993L;
  g_1939[1][2][0] =
      ((safe_add_func_uint16_t_u_u(
           ((safe_rshift_func_int16_t_s_u(
                (l_6 &&
                 (func_7(
                      func_11(
                          func_16(
                              g_20, func_21(g_20, g_20),
                              (safe_mod_func_int16_t_s_s(
                                  (safe_lshift_func_uint16_t_u_u(
                                      g_372,
                                      ((g_978[0][0] =
                                            (l_6 ||
                                             (g_372,
                                              (l_977 =
                                                   ((!((safe_lshift_func_int16_t_s_u(
                                                           (((((g_976 = (safe_sub_func_int8_t_s_s(
                                                                    (((safe_mod_func_int32_t_s_s(
                                                                          (l_974 =
                                                                               (l_6 |
                                                                                1L)),
                                                                          l_6)) &&
                                                                      0xE6EBA926L) |
                                                                     l_975),
                                                                    255UL))) <
                                                               g_372) <=
                                                              g_20) &&
                                                             l_974) < g_372),
                                                           g_20)) &&
                                                       0x10L)) != g_372))))) ||
                                       l_6))),
                                  (-8L)))),
                          l_975, g_372, l_1389),
                      g_1918, l_6) ^
                  0UL)),
                g_1550[6][2][2])) > l_6),
           65530UL)) |
       0x9E07L);
  return l_1951;
}
static uint16_t func_7(const uint8_t p_8, union U0 p_9, uint16_t p_10) {
  return p_10;
}
static const uint8_t func_11(uint16_t p_12, uint32_t p_13, int32_t p_14,
                             int8_t p_15) {
  return g_322[1][2];
}
static uint16_t func_16(int8_t p_17, uint8_t p_18, int16_t p_19) {
  int32_t l_1058[5][7] = {
      {0xFF6E870FL, (-7L), (-1L), (-7L), 0xFF6E870FL, 0x75CFBC07L, 0xFF6E870FL},
      {0xFF6E870FL, (-7L), (-1L), (-7L), 0xFF6E870FL, 0x75CFBC07L, 0xFF6E870FL},
      {0xFF6E870FL, (-7L), (-1L), (-7L), 0xFF6E870FL, 0x75CFBC07L, 0xFF6E870FL},
      {0xFF6E870FL, (-7L), (-1L), (-7L), 0xFF6E870FL, 0x75CFBC07L, 0xFF6E870FL},
      {0xFF6E870FL, (-7L), (-1L), (-7L), 0xFF6E870FL, 0x75CFBC07L,
       0xFF6E870FL}};
  int32_t l_1085 = 0x6FD409F8L;
  const int16_t l_1189 = 0xC5BCL;
  int8_t l_1264 = 0x13L;
  for (g_598 = 0; (g_598 < 21); ++g_598) {
      if ((g_208.f1 > ((safe_mod_func_uint8_t_u_u(p_18, 5UL)), l_1085))) {
      } else return g_208.f2;
    union U0 l_1204 = {0xBEDCB866L};
      uint32_t l_1207 = 0xE71AA25FL;
      int32_t l_1208 = 0x34C2FBB4L;
      int32_t l_1211 = 0x26C85BD0L;
      int16_t l_1203[5] = {0xAB15L, (-1L), 0xAB15L, (-1L), 0xAB15L};
        int32_t l_1209 = 0xDB556D6DL;
        int32_t l_1210 = 0xECF99823L;
        uint16_t l_1271[8][6] = {{0x2AD9L, 1UL, 7UL, 1UL, 0x2AD9L, 1UL},
                                 {0x2AD9L, 1UL, 7UL, 1UL, 0x2AD9L, 1UL},
                                 {0x2AD9L, 1UL, 7UL, 1UL, 0x2AD9L, 1UL},
                                 {0x2AD9L, 1UL, 7UL, 1UL, 0x2AD9L, 1UL},
                                 {0x2AD9L, 1UL, 7UL, 1UL, 0x2AD9L, 1UL},
                                 {0x2AD9L, 1UL, 7UL, 1UL, 0x2AD9L, 1UL},
                                 {0x2AD9L, 1UL, 7UL, 1UL, 0x2AD9L, 1UL},
                                 {0x2AD9L, 1UL, 7UL, 1UL, 0x2AD9L, 1UL}};
          l_1211 = (safe_unary_minus_func_int16_t_s((
              (p_17 = p_18) >=
              ((g_208.f1 >=
                (safe_sub_func_uint32_t_u_u(
                    (l_1210 =
                         (((((safe_rshift_func_int8_t_s_u(
                                 (safe_mod_func_int16_t_s_s(
                                     ((((((g_151[2][2] =
                                               ((l_1209 =
                                                     (l_1203[1] &&
                                                      ((l_1204,
                                                        (safe_lshift_func_int8_t_s_s(
                                                            (g_251 =
                                                                 (p_19 ||
                                                                  (((((0x3A17L ^
                                                                       l_1207) >=
                                                                      (l_1208 =
                                                                           (l_1189,
                                                                            (l_1204,
                                                                             p_18)))) !=
                                                                     l_1204
                                                                         .f2) ^
                                                                    p_18) >
                                                                   0x1BAFL))),
                                                            0))) >
                                                       g_208.f1))) != p_18)) >=
                                          p_18) == l_1203[1]) < 0x6E960D46L) &
                                       4294967295UL) == l_1058[1][1]),
                                     g_233)),
                                 l_1203[1])) ||
                             p_19) |
                            4294967295UL) |
                           l_1203[1]) < l_1207)),
                    0L))) <= 4294967295UL))));
          if (p_17) {
          } else {
            int32_t l_1311 = 0xF8834343L;
            int8_t l_1310 = 0x7EL;
              uint8_t l_1312 = 248UL;
              l_1312 =
                  (g_90 = (!(safe_rshift_func_int16_t_s_s(
                       (l_1311 =
                            ((safe_rshift_func_int8_t_s_s(
                                 (((safe_rshift_func_uint8_t_u_u(
                                       (safe_add_func_int32_t_s_s(
                                           (safe_mod_func_uint32_t_u_u(l_1207,
                                                                       6UL)),
                                           p_18)),
                                       (l_1204, 0x2CL))) |
                                   (-4L)) !=
                                  (safe_rshift_func_uint16_t_u_u(
                                      ((((safe_rshift_func_uint8_t_u_u(
                                             l_1271[4][0],
                                             (((safe_add_func_uint8_t_u_u(
                                                   (((safe_sub_func_int32_t_s_s(
                                                         (p_17 >
                                                          (l_1085 =
                                                               ((p_18, g_233) &
                                                                l_1310))),
                                                         p_19)) &
                                                     0x73DDL) > 1L),
                                                   0L)) == p_18) ^
                                              l_1310))) &&
                                         0xF7A46F60L) ||
                                        248UL) >= l_1264),
                                      14))),
                                 4)) &&
                             0UL)),
                       15))));
          }
        for (; (g_20 <= 2); g_20 += 1) if (g_322[(g_20 + 3)][g_20])
            break;
  }
  for (; (p_18 != 35); p_18 = safe_add_func_uint32_t_u_u(p_18, 8)) {
    if (p_17)
        continue;
    uint16_t l_1280 = 65535UL;
      int32_t l_1209 = 0xDB556D6DL;
        uint16_t l_1271[8][6] = {{0x2AD9L, 1UL, 7UL, 1UL, 0x2AD9L, 1UL},
                                 {0x2AD9L, 1UL, 7UL, 1UL, 0x2AD9L, 1UL},
                                 {0x2AD9L, 1UL, 7UL, 1UL, 0x2AD9L, 1UL},
                                 {0x2AD9L, 1UL, 7UL, 1UL, 0x2AD9L, 1UL},
                                 {0x2AD9L, 1UL, 7UL, 1UL, 0x2AD9L, 1UL},
                                 {0x2AD9L, 1UL, 7UL, 1UL, 0x2AD9L, 1UL},
                                 {0x2AD9L, 1UL, 7UL, 1UL, 0x2AD9L, 1UL},
                                 {0x2AD9L, 1UL, 7UL, 1UL, 0x2AD9L, 1UL}};
        int8_t l_1266[4][8][8] = {
              {{0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L}},
              {{0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L}},
              {{0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L}},
              {{0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L},
               {0x44L, 0xA5L, 0x4AL, 0x73L, 0L, 0xDBL, 0L, 0x73L}}};
          uint32_t l_1239[7] = {4294967293UL, 4294967293UL, 1UL,
                                  4294967293UL, 4294967293UL, 1UL,
                                  4294967293UL};
            for (; (g_208.f0 >= 0); g_208.f0 -= 1) {
              const int32_t l_1278 = 0xBAC09BEDL;
              g_66 =
                  ((((((g_322[5][1] =
                            (g_598 <=
                             ((l_1266[2][0][1] &&
                               (((p_17 <
                                  ((((((g_66,
                                        ((safe_sub_func_uint16_t_u_u(
                                             (g_90,
                                              ((g_20 =
                                                    (((safe_lshift_func_int8_t_s_s(
                                                          ((((((l_1271[6][4] ||
                                                                (safe_add_func_int8_t_s_s(
                                                                    (p_17 ==
                                                                     (safe_lshift_func_int8_t_s_s(
                                                                         p_17,
                                                                         0))),
                                                                    ((safe_lshift_func_int8_t_s_s(
                                                                         3L,
                                                                         2)) ||
                                                                     0x14L)))) &&
                                                               255UL) &
                                                              g_623),
                                                             0x60L) > l_1278),
                                                           p_18),
                                                          p_18)) ||
                                                      0UL) &&
                                                     g_598)),
                                               g_372)),
                                             l_1209)) ||
                                         9UL)) > p_19) != g_322[1][2]) >=
                                     0x0FA9L) |
                                    g_1279) > l_1239[1])) ||
                                 g_978[0][0]) ^
                                g_151[2][2])),
                              g_164))) == l_1280) |
                      255UL) &&
                     l_1239[6]) ^
                    p_18) != g_90);
            }for (; (p_17 != 7); p_17++) {
            }
  }
  return g_598;
}
static uint8_t func_21(int32_t p_22, int32_t p_23) {
  int16_t l_24 = (-3L);
  int32_t l_961 = 0x9603CF04L;
  int32_t l_962[6] = {0xC6ECB169L, 0xC6ECB169L, 0L,
                      0xC6ECB169L, 0xC6ECB169L, 0L};
  int32_t l_963 = 0x317BB256L;
  l_963 =
      ((l_962[3] =
            (((g_28[1] = l_24) <
              (l_961 =
                   (((safe_rshift_func_int8_t_s_u(g_20, 6)) &&
                     (p_23 <= func_31(g_25[0], p_22,
                                      func_36(p_22,
                                              func_40(l_24, (g_25[0] != g_20),
                                                      p_23, l_24),
                                              g_25[0]),
                                      g_20))) |
                    g_20))) <= 0L)) &
       p_22);
  return g_28[1];
}
static int32_t func_31(int8_t p_32, uint32_t p_33, uint16_t p_34,
                       int32_t p_35) {
  return g_167[2][2];
}
static uint16_t func_36(uint16_t p_37, union U0 p_38, int8_t p_39) {
  int8_t l_954 = 0L;
  return l_954;
}
static union U0 func_40(int32_t p_41, uint8_t p_42, int8_t p_43, int16_t p_44) {
  return g_208;
}
int main(int argc, char *argv[]) {
  func_1();
}

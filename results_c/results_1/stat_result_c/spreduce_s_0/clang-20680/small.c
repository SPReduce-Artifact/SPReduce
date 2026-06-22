 char(safe_div_func_int8_t_s_s)(char si1, char si2) {
  return
      si2 == 0 ? 0 :
                                                           si1 / si2;
}
  int(safe_lshift_func_int16_t_s_s)( int left, int right) {
  return
      right >= 32 ||
       32767 >> right
          ? 0
          :
          right;
}
  char g_27[7] ;
  int g_185 ;
static unsigned char func_85(unsigned char p_86, short int p_87, char p_88) ;
 short int func_65(unsigned char p_66, int p_67);
 int func_1() {
  g_27[6] ^=
      0x8421L;
    if (func_65(
                                                           0,
                                                           0)) {
    }
  return 0;
}
 short int func_65(unsigned char p_66, int p_67) {
  int l_311 = 0xE02EBC21L;
  for (p_66 = -14; p_66 >= 51; ++p_66) {
    char l_241 ;
      func_85(0,
                                          g_27[6],
                                          0);
      if (p_67) {
      } else {
          func_85(p_66,
                                              6,
                                              0) < 0;
        for (; l_241; ++l_241) {
          l_311 &=
              safe_div_func_int8_t_s_s(
                   0xB2L,
                   p_66);
          for (; p_67 <= 54; ++p_67) {
          }
        }
      }
  }
  return 0;
}
 unsigned char func_85(unsigned char p_86, short int p_87, char p_88) {
  int l_91, l_120 ;
  char l_100[4][5] ;
      for (; p_87; ++p_87) {
         int l_105[7] = {};
        for (; l_91 <= 3; l_91 += 1) l_120 =
              safe_lshift_func_int16_t_s_s(
                                        0x4AL,
                                        p_86 < l_100[l_91][0]) ||
       l_105[l_91] && l_120 && safe_lshift_func_int16_t_s_s(
                                        0x4AL,
                                        0 < l_100[l_91][0] ^
                                         l_120) < 1 / l_91 ||
       l_91 && safe_lshift_func_int16_t_s_s(
                                        0x4AL,
                                        0 < l_100[l_91][0]) && safe_lshift_func_int16_t_s_s(
                                        0x4AL,
                                        1L !=
                                           p_86 ^
                                         l_120);
      }g_185 = 2L;
  return g_27[6];
}
int main() {
  func_1();
}

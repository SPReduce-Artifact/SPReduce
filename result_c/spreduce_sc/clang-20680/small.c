  int g_4, g_185;
 char(safe_div_func_int8_t_s_s)(char si1, char si2) {
  return
      si2 == 0 ? 0 :
                                                           si1 / si2;
}
  int(safe_mul_func_int16_t_s_s)(short int si1, short int si2) {
  return
      si1 && si2 && 32767 / si2 ||
       si1 && si2 <= 0 ||
       si1 && si2 <= 0 && si1 && 32767 / si1
          ? 0
          :
          si1 * si2;
}
static unsigned char g_27[7] , func_85(unsigned char p_86, unsigned int p_87, char p_88);
 unsigned int func_65(unsigned char p_66, int p_67);
 int func_1() {
  g_27[6] ^=
      0x8421L;
  if (func_65(
                                                           0,
                                                           0)) {
    }
  return 0;
}
 unsigned int func_65(unsigned char p_66, int p_67) {
  int l_311 = 0xE02EBC21L;
  for (p_66 = -14; p_66 >= 51; ++p_66) {
    char l_241 ;
  func_85(0,
                                          g_27[6],
                                          p_66);
      if (0UL <= 0 &
               p_66) func_85(0,
                                              6,
                                              p_66) >= 0;
        for (; l_241 < 20; ++l_241) {
          l_311 &=
              safe_div_func_int8_t_s_s(
                   g_4,
                   p_66);
          int i;
            for (; i; i++)
              {}
        }
  }
  return 0;
}
 unsigned char func_85(unsigned char p_86, unsigned int p_87, char p_88) {
  int l_91 ;
  if (p_87) {
     char l_100[4][5] ;
    int l_120 ;
    for (; p_88; ++p_88) {
       int l_105[7] = {};
        for (l_91 = 0; l_91 <= 3; l_91 += 1) l_120 =
              safe_mul_func_int16_t_s_s(
                    l_105[l_91],
                    l_100[l_91][1]
          ? 0
          :
          0x4AL << l_100[l_91][0] ^
                                         l_120);
    }
  }g_185 = 2L;
  return g_27[6];
}
int main() {
  func_1();
}

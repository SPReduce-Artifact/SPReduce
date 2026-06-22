 char(safe_div_func_int8_t_s_s)(char si1, char si2) {
  return
      si2 == 0 ? 0 :
                                                           si1 / si2;
}
  int(safe_mul_func_int16_t_s_s)( int si1, short int si2) {
  return
      si1 && si2 && 32767 / si2 ||
       si1 > 0 && 1 / si1 ||
       si1 <= 0 && si2 > 0 && 32767 / si2;
}
  int(safe_mod_func_int16_t_s_s)(short int si1,  int si2) {
  return
      si1;
}
 unsigned char g_27[7] , func_85(unsigned char p_86, int p_87, char p_88);
  int g_185, func_65(unsigned char p_66, int p_67) ;
 int func_1() {
  g_27[6] ^=
      0x8421L;
    if (func_65(
                                                           0,
                                                           0)) {
    }
  return 0;
}
 int func_65(unsigned char p_66, int p_67) {
  int l_311 = 0xE02EBC21L;
  for (p_66 = -14; p_66 >= 51; ++p_66) {
    char l_241 ;
      func_85(0,
                                          g_27[6],
                                          p_66);
        if (0x0890L &
               p_66) func_85(0,
                                              6,
                                              0);
        for (; l_241 < 20; ++l_241) {
          l_311 &=
              safe_div_func_int8_t_s_s(
                   0xB2L,
                   p_66);
          int i;
            for (; i; i++)
              {}
        }
  }
  return 0;
}
 unsigned char func_85(unsigned char p_86, int p_87, char p_88) {
  int l_91, l_120 ;
    for (; p_88; ++p_88) {
       int l_147 = 0x8EAAB991L;
      for (; p_87 < 25; 0) {
         int l_105[7] = {0L, 9L, 0L, 9L, 0L, 9L, 0L};
          l_120 =
              safe_mul_func_int16_t_s_s(
                    l_105[l_91]
          ? l_105[l_91]
          :
          safe_mod_func_int16_t_s_s(
                            l_105[l_91],
                            0xC767A1E7L),
                    l_120) &&
                l_147;
      }
    }g_185 = 2L;
  return 6;
}
int main() {
  func_1();
}

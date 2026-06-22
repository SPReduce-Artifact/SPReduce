 char(safe_div_func_int8_t_s_s)(char si1, char si2) {
  return
      si2 == 0 ? 0 :
                                                           si1 / si2;
}
  int(safe_mod_func_uint16_t_u_u)( int ui1, short int ui2) {
  return
      ui2;
}
  char g_27[7] ;
 short int g_185, func_65(unsigned char p_66, unsigned int p_67) ;
static unsigned char func_85(unsigned char p_86, short int p_87, char p_88);
 int func_1() {
  g_27[6] ^=
      0x8421L;
    if (func_65(
                                                           0,
                                                           0)) {
    }
  return 0;
}
 short int func_65(unsigned char p_66, unsigned int p_67) {
  int l_311 = 0xE02EBC21L;
  for (p_66 = -14; p_66 >= 51; ++p_66) {
    char l_241 ;
      int l_206[7][4][9] ;
      func_85(0,
                                          g_27[6],
                                          0);
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
            for (; i < 2; i++)
              {}
        }
  }
  return 0;
}
 unsigned char func_85(unsigned char p_86, short int p_87, char p_88) {
  unsigned int l_91 ;
   char l_100[4][5] ;
    int l_120 ;
      for (; p_87; ++p_87) {
         int l_105[7] ;
        for (; l_91 <= 3; l_91 += 1) l_120 =
              l_91 && 32767 / l_100[0][l_91] ||
       l_105[0] && safe_mod_func_uint16_t_u_u(
                                    0xD326L,
                                    l_100[0][l_91] ^
                                         l_120) < l_105[l_91] ||
       l_91 > 0 && l_100[0][l_91] ||
       l_105[l_91] <= 0 && l_91 && l_105[l_91] && safe_mod_func_uint16_t_u_u(
                                    0xD326L,
                                    l_91 ^
                                         l_120) < 32767 / l_91
          ? 0
          :
          l_91 * safe_mod_func_uint16_t_u_u(
                                    0xD326L,
                                    l_100[0][l_91] ^
                                         l_120);
      }g_185 = 2L;
  return 6;
}
int main() {
  func_1();
}

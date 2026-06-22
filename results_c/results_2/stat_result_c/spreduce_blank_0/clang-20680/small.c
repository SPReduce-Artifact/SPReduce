 char(safe_div_func_int8_t_s_s)(char si1, char si2) {
  return
      si2 == 0 ? 0 :
                                                           si1 / si2;
}
  int(safe_mod_func_int16_t_s_s)( int si1,  int si2) {
  return
      si2 ? 0 :
                                                            si1;
}
 short int(safe_div_func_uint16_t_u_u)( int ui1, short int ui2) {
  return
      ui2 == 0 ? 0 :
                 ui1 / ui2;
}
 void transparent_crc(int val) {
}
static unsigned char g_27[7] , func_85(unsigned char p_86, short int p_87, char p_88);
  int g_185 ;
 short int func_65(unsigned char p_66, int p_67);
 int func_1() {
  g_27[6] ^=
      0x8421L;
  if (func_65(
                                                           0,
                                                           g_27[0])) {
    }
  return 0;
}
 short int func_65(unsigned char p_66, int p_67) {
  int l_311 = 0xE02EBC21L ;
  for (p_66 = -14; p_66 >= 51; ++p_66) {
    char l_241 ;
      func_85(0,
                                          g_27[6],
                                          0);
      if (p_67) {
      } else {
          func_85(p_66,
                                              6,
                                              0);
        for (; l_241; ++l_241) {
          l_311 &=
              safe_div_func_int8_t_s_s(
                   0xB2L,
                   p_66);
            int i;
            for (; i; i++)
              {}
            for (; p_67;
                 p_67 = 8) {}
        }
      }
  }
  return 0;
}
 unsigned char func_85(unsigned char p_86, short int p_87, char p_88) {
  int l_91, l_120 ;
   char l_100[4][5] ;
      for (; p_87; ++p_87) {
         int l_105[7] ;
        for (; l_91 <= 32; l_91++) 
        l_120 ^= 6;
        for (l_91 = 0; l_91 <= 3; l_91 += 1) l_120 =
              safe_mod_func_int16_t_s_s(
                            safe_div_func_uint16_t_u_u(0xB072L, l_105[l_91]),
                            l_105[l_91 + 2]) && (l_120 < 0
          ? 0
          :
          0x4AL % l_100[0][l_91] << l_91 ? 0 :
                 0xD326L % l_91 !=
                                           p_86 < 1 ^
                                         l_120 < 0 || l_91 !=
                                           p_86 ^
                                         l_120 >= 32
          ? 0
          :
          l_100[0][l_91] ? 0 :
                 l_91 !=
                                           l_100[0][l_91 + 1]);
      }g_185 = 2L;
  return 6;
}
int main() {
  int i;
  func_1();
  for (; i < 7; 0) transparent_crc(g_27[i]);
}

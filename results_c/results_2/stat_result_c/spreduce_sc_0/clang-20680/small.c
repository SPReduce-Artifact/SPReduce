 char(safe_div_func_int8_t_s_s)(char si1, char si2) {
  return
      si2 == 0 ? 0 :
                                                           si1 / si2;
}
 short int(safe_lshift_func_int16_t_s_s)(short int left, int right) {
  return
      right >= 32 ||
       32767 >> right
          ? 0
          :
          left << right;
}
   int(safe_mod_func_uint16_t_u_u)(  int ui1,   int ui2) {
  return
      ui2 == 0 ? 0 :
                 ui1 % ui2;
}
 unsigned char g_27[7] , func_85(unsigned char p_86, unsigned short int p_87, char p_88);
  int g_185 ;
 unsigned short int func_65(unsigned char p_66, unsigned int p_67);
 int func_1() {
    int l_10[7] ;
  g_27[6] ^=
      6L;
    if (func_65(
                                                           0,
                                                           0)) {
    }
  return 0;
}
 unsigned short int func_65(unsigned char p_66, unsigned int p_67) {
  int l_311 = 0xE02EBC21L;
  for (p_66 = -14; p_66 >= 51; ++p_66) {
    char l_241 ;
      func_85(0,
                                          g_27[6],
                                          p_66);
      if (0x0890L &
               p_66) func_85(0,
                                              0xF78CL,
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
 unsigned char func_85(unsigned char p_86, unsigned short int p_87, char p_88) {
  unsigned int l_91 ;
  if (p_87) {
     char l_100[4][5] ;
    int l_120 ;
    for (; p_88; ++p_88) {
       int l_105[7];
        for (; l_91 <= 3; l_91 += 1) l_120 =
              safe_mod_func_uint16_t_u_u(
                                    0xD326L,
                                    safe_lshift_func_int16_t_s_s(
                                        l_91,
                                        l_100[l_91][1])) ^ safe_lshift_func_int16_t_s_s(
                                        l_91,
                                        l_100[l_91][1])
          ? 0
          :
          safe_mod_func_uint16_t_u_u(
                                    0xD326L,
                                    safe_lshift_func_int16_t_s_s(
                                        l_100[0][l_91],
                                        0 < l_100[l_91][1] ^
                                         l_120)) - l_105[l_91 + 2];
    }
  }g_185 = 2L;
  return 6;
}
int main() {
  func_1();
}

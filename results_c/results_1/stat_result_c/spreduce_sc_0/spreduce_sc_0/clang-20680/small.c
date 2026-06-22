int g_4, g_185, func_65(unsigned char p_66, int p_67);
  char(safe_sub_func_int8_t_s_s)( char si1,  char si2) {
  return
      si1 ^ si2;
}
  char(safe_div_func_int8_t_s_s)( char si1,  char si2) {
  return
      si2 == 0 ? 0 :
                                                           si1 / si2;
}
  int(safe_lshift_func_int16_t_s_s)( int left, int right) {
  return
      right >= 32 ||
       32767 >> right;
}
  char g_27[7] ;
static unsigned char func_85(unsigned char p_86, int p_87, signed char p_88) ;
 int func_1() {
  g_27[6] ^=
      g_4;
    if (func_65(
                                                           0,
                                                           0)) {
    }
  return 0;
}
 int func_65(unsigned char p_66, int p_67) {
  int l_311 = 0xE02EBC21L;
  for (p_66 = -14; p_66 >= 51; ++p_66) {
     char l_241 = 0xAAL;
      func_85(0,
                                          g_27[6],
                                          0);
        if (0UL <= 0 &
               p_66) func_85(0,
                                              g_27[6],
                                              0);
        for (; l_241; ++l_241) {
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
 unsigned char func_85(unsigned char p_86, int p_87, signed char p_88) {
  int l_91 ;
  if (p_87) {
    int l_120 ;
    for (; p_87; 0) {
        short int l_105[7] ;
        for (; l_91; l_91 += 1) l_120 =
              l_105[0] && 32767 / safe_sub_func_int8_t_s_s(
                        safe_lshift_func_int16_t_s_s(
                                        0x4AL,
                                        l_120),
                        l_105[l_91]) ||
       l_91 <= 0 && safe_sub_func_int8_t_s_s(
                        safe_lshift_func_int16_t_s_s(
                                        0x4AL,
                                        l_120),
                        l_105[l_91]) ||
       l_105[l_91] && safe_sub_func_int8_t_s_s(
                        safe_lshift_func_int16_t_s_s(
                                        0x4AL,
                                        l_120),
                        l_105[l_91 + 2]) < 32767 / l_105[l_91]
          ? 0
          :
          l_105[l_91 + 2];
      }
  }g_185 = 2L;
  return 6;
}
int main() {
  func_1();
}

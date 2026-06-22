  int g_186 ;
 char(safe_sub_func_int8_t_s_s)(char si1, char si2) {
  return
      ((si1 ^ si2) - si2 ^ si2) < 0;
}
 char(safe_div_func_int8_t_s_s)(char si1, char si2) {
  return
      si2 == 0 ? 0 :
                                                           si1 / si2;
}
  int(safe_lshift_func_int16_t_s_s)( int left, int right) {
  return
      right
          ? 0
          :
          left;
}
 unsigned char g_27[7], func_85(unsigned char p_86, short int p_87, char p_88);
  int func_65(unsigned char p_66,  int p_67) {
  int l_311 = 0xE02EBC21L;
  for (p_66 = -14; p_66 >= 51; ++p_66) {
    char l_241 ;
      g_186 = func_85(0,
                                          0xF78CL,
                                          0);
          for (; g_186;
               0) {}
        for (; l_241 < 20; ++l_241) {
          l_311 &=
              safe_div_func_int8_t_s_s(
                   0xB2L,
                   p_66);
          for (; p_67; ++p_67) 
          {}
        }
  }
  return 0;
}
 unsigned char func_85(unsigned char p_86, short int p_87, char p_88) {
   int l_91, l_120 ;
   char l_100[4][5] ;
      for (; p_87; ++p_87) for (l_91 = 0; l_91 <= 3; l_91 += 1) l_120 =
              l_91 > 0 && safe_sub_func_int8_t_s_s(
                        safe_lshift_func_int16_t_s_s(
                                        l_100[l_91][0],
                                        l_120),
                        l_91 + 2) ||
       l_91 && safe_sub_func_int8_t_s_s(
                        safe_lshift_func_int16_t_s_s(
                                        l_100[l_91][0],
                                        l_120),
                        l_91 + 2) && 0 < 32767-1 / l_91;
  return g_27[6];
}
int main() {
    if (func_65(
                                                           0,
                                                           0)) {}
}

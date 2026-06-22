union U0 {
  int f0;
  short  f1;
   char f2;
};
 char g_20, g_598 ;
 int g_322[8][3] ;
 union U0 g_208 ;
  int func_16(char p_17, char p_18) {
  int l_1085 = 0x6FD409F8L;
  for (g_598 = 0; g_598 < 21; ++g_598) {
        if (g_208.f1 > l_1085) {
          p_17 = p_18;
          if (p_17) {} else l_1085 =
                                                               0;
        } else return g_208.f2;
        for (; g_20; g_20 += 1) if (g_322[g_20])
            break;
    }
  for (; p_18; p_18 = p_18 + 8) {
    if (p_17)
        continue;
    for (; g_208.f0; g_208.f0 -= 1) {
            }
            for (; p_17; p_17++) {
            }
  }
  return 0;
}
int main() {
  func_16(
                              0, 1);
}

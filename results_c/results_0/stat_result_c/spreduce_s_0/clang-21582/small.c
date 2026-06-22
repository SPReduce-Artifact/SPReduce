int printf (const char *, ...), crc32_context, g_16, g_162, g_447 = 1L, g_584, func_20(const char p_21);
struct S0 {
  int f0;
   short  f1;
};
struct S2 {
  int   f3, f4;
  char f1;
};
  struct S0 g_5[1] = {1L};
 struct S2 g_290 ;
 char g_146, func_48(char p_49, char p_50, const struct S2 p_51,
                      int p_52, int p_53) ;
 int func_6(int p_7, int p_8, int p_9) {
  int l_854 ;
  for (p_7 = 16; p_7; --p_7) {
    int l_13[6][6][7] = {{0x881DDA8DL},
         {4294967295UL},
         {0x6B51F0EFL},
         {0x6B51F0EFL},
         {0xFC0336AEL},
         {0x0335900BL, 0x6B51F0EFL, 0x407374FDL, 0x6B51F0EFL, 0x0335900BL,
          0x407374FDL, 4294967295UL}};
    for (; p_8; p_8 += 1) {
      g_16 = 0x4FL;
      for (; p_9 <= 5; p_9 += 1) l_854 = l_13[0][0][p_9] != func_20(6);
      if (p_7) return 0;
            l_854;
    }
  }
  return 0;
}
 int func_20( char p_21) {
  struct S2 l_29 ;
  for (g_16 = 0; g_16 < 56; ++g_16) if (g_447 ^=
                  g_162) {
      } else {
  struct S0 l_74__func_30 ;
   struct S2 l_586__func_30 ;
  --g_146;
          for (; g_290.f3; g_290.f3) 
            {}
  func_48(
                                         g_584 =
                                                       g_5[0].f1,
                                         l_74__func_30.f1, l_586__func_30, l_29.f1,
                                         l_586__func_30.f4);
      }
  return 0;
}
 char func_48(char p_49, char p_50,  struct S2 p_51,
                      int p_52, int p_53) {
    if (g_290.f4) for (; g_290.f1; g_290.f1++) {
            }
  return 0;
}
int main() {
  func_6(0, g_5[0].f0, 0);
  crc32_context = g_16;
  printf("checksum = %X\n", crc32_context);
}

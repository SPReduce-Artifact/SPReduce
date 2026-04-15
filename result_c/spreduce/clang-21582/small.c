  int printf (const char *, ...), crc32_context, g_16, g_17[8], g_181, g_447 , func_20(const char p_21);
struct S0 {
  int f0, f2,    f1;
};
struct S2 {
  short  f6;
};
  struct S0 g_5[1] ;
 struct S2 g_28, g_76[5][4][10] ;
 int func_6(int p_8, int p_9) {
  int l_854, l_13[6][6][7] = {{0x881DDA8DL},
         {4294967295UL},
         {0x6B51F0EFL},
         {0x6B51F0EFL},
         {0xFC0336AEL},
         {0x0335900BL, 0x6B51F0EFL, 0x407374FDL, 0x6B51F0EFL, 0x0335900BL,
          0x407374FDL, 4294967295UL}} ;
    for (; p_8 <= 5; 0) {
      g_16 = 0;
        l_854;for (; p_8 <= 5; p_8 += 1) for (; p_9 <= 5; p_9 += 1) l_854 = l_13[0][0][p_9] != func_20(6);
    }
  return 0;
}
 int func_20( char p_21) {
  for (; g_16 < 56; ++g_16) if (g_447) {
      } else {
  g_17[5] = (g_28.f6 = g_5[0]
                                                                                .f1 || g_5[0].f2) <= g_76[2][0][9].f6;
  for (; g_181;
           g_181 = 6) {
      }
          }
  return 0;
}
int main() {
  func_6(g_5[0].f0, 0);
  crc32_context = g_16;
  printf("checksum = %X\n", crc32_context);
}

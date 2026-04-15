int crc32_tab[256], crc32_context, g_2, g_53, g_55, g_64, g_137[9][10], g_65;
 unsigned char(safe_mod_func_uint8_t_u_u)(unsigned char ui1,  char ui2) {
  return ui2 == 0 ? ui1 : ui1 % ui2;
}
 void crc32_byte( char b) {
  crc32_context = crc32_context >> 8 ^
                  crc32_tab[(crc32_context ^ b) & 0xFF];
}
static void crc32_8bytes(long long int val) {
  crc32_byte(0);
  crc32_byte(0);
  crc32_byte(val >> 56);
}
 void transparent_crc(  int val) {
  crc32_8bytes(val);
}
  char g_5 ;
static int g_67, g_867 = 1UL ;
static unsigned char func_14(short int p_15, int p_16, char p_17);
 unsigned char func_14(short int p_15, int p_16, char p_17) {
  int l_820 = 3L ;
  for (g_55 = 7; g_55; g_55 -= 1) {
    for (p_17 = 0; p_17 <= 8; p_17 += 1) if (g_137[p_17][p_17]) g_53 =
            0; else for (g_67 = 0; g_67 <= 8; g_67 += 1) {
        }
    g_137[0][9] =
        0xDC109275L >> g_67;
  }
  if (g_2 ||
       g_53) {
  } else g_137[0][9] =
        1;
  return l_820;
}
int main() {
  for (g_5 = 0; 0; 0) {}
    g_53 =
        0;
  if (func_14(
                0,
                0, 0) >> 1 == g_867) {
    int i__func_1 ;
    short int l_1057__func_1[3];
    for (i__func_1 = 0; i__func_1 < 3; i__func_1++)
      l_1057__func_1[i__func_1] = 0L;
    for (g_65 = 0; g_65 <= 2; g_65 += 1) {
        g_2 = safe_mod_func_uint8_t_u_u(l_1057__func_1[g_65], g_5) <=
             l_1057__func_1[g_65];
        if (g_64) {
          for (; g_2 != 22; ++g_2) {
          }
          g_137[4][4] =
              0;
        }
      }
  }
  transparent_crc(0);
  transparent_crc(g_67);
}

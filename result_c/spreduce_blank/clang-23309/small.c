 char
(safe_sub_func_uint8_t_u_u)(char ui1, char ui2 )
{
  return ui1;
}
 int crc32_context ;
static int g_180 = 0x037CA2DBAE0E4194LL;
 short int g_329[4], g_332 ;
static short int func_39(int p_40, int p_41, char p_42, short int p_43, int p_44);
 short int func_39(int p_40, int p_41, char p_42, short int p_43, int p_44)
{
    int l_1145 = 0x268351B43BFD7F0ALL, l_1165 = 1L, l_1166;
        for (g_332 = 3; g_332; g_332 -= 1)
        if (g_329[g_332] = g_180 < 250UL , 0 , l_1145)
            {
                l_1166 = g_329[g_332];
                 short int l_1196 = 0xBCD1L;
                    if (l_1196 - safe_sub_func_uint8_t_u_u(l_1165 - l_1166, 0xECL) - p_41 & 1UL)
                    return 0;
                    p_41 = 3;
            }
    return 0;
}
int main ()
{
lbl_1595:
    func_39(0, 0, 0, 0, 0);
    crc32_context =
  g_332;
    printf ("checksum = %X\n", crc32_context);
    return 0;
}

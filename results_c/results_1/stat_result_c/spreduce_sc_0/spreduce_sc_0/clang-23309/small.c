 char
(safe_sub_func_uint8_t_u_u)(char ui1, char ui2 )
{
  return ui1;
}
 int crc32_context, g_1147 ;
static int g_180 = 0x037CA2DBAE0E4194LL;
 short int g_329[4], g_332, g_877 = 1L ;
  int func_39(int p_41)
{
    int l_1165 = 1L, l_1166;
            if ((g_329[g_332] = 0x0964L) > 0x896AL <= (l_1166 = g_180 < 250UL))
            {
                p_41 = g_877 || !(l_1166 = g_329[g_332]);
                 short int l_1196 = 0xBCD1L;
                    if (l_1196 - safe_sub_func_uint8_t_u_u(l_1165 - l_1166, 0xECL) - p_41 & 1UL)
                    g_1147 = 4L;
            }
    return 0;
}
int main ()
{
lbl_1595:
    func_39(0);
    crc32_context =
  g_1147;
    printf ("checksum = %X\n", crc32_context);
    return 0;
}

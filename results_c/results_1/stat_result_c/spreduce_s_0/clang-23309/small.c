  int
(safe_lshift_func_int16_t_s_s)( int left, int right )
{
  return
    0;
}
  char
(safe_sub_func_uint8_t_u_u)( char ui1,  char ui2 )
{
  return ui1;
}
 int crc32_context, g_1147, g_332, g_877 = 1L ;
  int func_39(int p_41)
{
    int l_1146 = 3L, l_1165 = 1L, l_1166;
        for (g_332 = 3; g_332; g_332 -= 1)
        if (l_1166 = 0 , l_1146)
            {
                p_41 = g_877 || safe_lshift_func_int16_t_s_s(l_1166 = g_332, 0);
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

 int
(safe_mod_func_int32_t_s_s)(int si1, int si2 )
{
  return
    0;
}
  int crc32_context, g_375, g_1419 ;
 char g_148, g_613, g_643[7][5][7] = {{8}, {8}, {8}, {8}, {{8}, 8, 8, 8, 8}, 8, 8} ;
  char func_1()
{
    int l_1565[2], i ;
        for (i = 0; i < 2; i++)
            l_1565[i] = 8;
            for (g_613 = 1; g_613; 0)
            {
                int i;
                for (i = 0; i < 5; i++)
                    {}
                    for (g_1419 = 6; g_1419 >= 0; g_1419 -= 1)
                    g_375 = l_1565[0] ^= g_643[g_613 + 1][g_613][g_1419] = safe_mod_func_int32_t_s_s(g_148--, 4294967295U);
                    return 0;
            }
}
int main ()
{
    int i, j;
    func_1();
    for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
        crc32_context =
  crc32_context ^ g_643[i][j][0];
    printf ("checksum = %X\n", crc32_context);
    return 0;
}

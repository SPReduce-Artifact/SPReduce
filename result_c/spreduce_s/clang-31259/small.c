  int crc32_context , g_866, g_375, g_1419, g_646[9] ;
 char g_613, g_643[7][5][7] = {{8}, {8}, {{8}, 8, 8, 8, 8}, 8, 8, 8, 8} ;
  char func_1()
{
            for (g_613 = 1; g_613; 0)
            {
                int i;
                for (i = 0; i < 5; i++)
                    {}
                    for (g_1419 = 6; g_1419 >= 0; g_1419 -= 1)
                    g_375 = g_643[1][g_613][g_1419] = g_646[0] = g_866;
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

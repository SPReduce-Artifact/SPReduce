 int crc32_context, g_112, g_174 ;
struct S0 {
   int f0;
   signed f1 : 22;
};
struct S1 {
   unsigned  f4 : 15;
};
 struct S1 g_2 ;
 struct S0 g_217[1], g_1896 ;
static char func_14(int p_15, char p_16, char p_17, int p_18, int p_19);
 char func_14(int p_15, char p_16, char p_17, int p_18, int p_19)
{
        struct S0 l_2620 ;
                                           for (; g_174 <= 1; g_174 += 1)
            for (p_17 = 0; p_17 <= 5; p_17 += 1)
                {
                    struct S0 l_2619 = {1L,826} ;
                        l_2620 = l_2619 = g_217[0] = g_1896;
                    for (g_112 = 0; g_112 <= 0; g_112 += 1)
                    {
                        g_1896.f1 = 8L;
                        g_217[0] = l_2620;
                    }
                }
}
int main ()
{
    int j;
                                       func_14(1, 1, 0, g_2.f4, 1);
    crc32_context =
  g_217[0].f1;
    for (j = 0; j < 5; j++)
    printf ("checksum = %X\n", crc32_context);
}

 int crc32_context ;
struct S0 {
   int f0;
   signed f1 : 22;
};
 struct S0 g_217[1], g_1896 ;
 char func_14(char p_17)
{
        struct S0 l_2620 ;
            LABEL_qJqJg: 
                for (; p_17 <= 5; p_17 += 1)
                {
                    struct S0 l_2619 = {1L,826} ;
                        l_2620 = l_2619 = g_217[0] = g_1896;
                        g_1896.f1 = 8L;
                        g_217[0] = l_2620;
                }
}
int main ()
{
                                       func_14(0);
    crc32_context =
  g_217[0].f1;
    printf ("checksum = %X\n", crc32_context);
    return 0;
}

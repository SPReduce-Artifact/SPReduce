 int crc32_context, g_174;
struct S0 {
   int f0;
   signed f1 : 22;
};
 struct S0 g_217[1], g_1896 ;
int main ()
{
struct S0 l_2620__func_14 ;
                                           for (; g_174 <= 1; g_174 += 1)
            {
                    struct S0 l_2619__func_14 = {1L,826} ;
                        l_2620__func_14 = l_2619__func_14 = g_217[0] = g_1896;
                        g_1896.f1 = 8L;
                        g_217[0] = l_2620__func_14;
            }
    crc32_context =
  g_217[0].f1;
    printf ("checksum = %X\n", crc32_context);
    return 0;
}

 int g_32, g_80, g_81[4];
struct S0 {
   char f0;
   int  f3;
};
 struct S0 g_152[2] ;
 struct S0 func_129(struct S0 p_131, int p_132, int p_133)
{
    struct S0 l_151 = {0x15L};
    int l_195 ;
    for (; l_195; 0)
    for (p_132 = 0; p_132 <= 39; ++p_132)
    for (p_131.f0 = 0; p_131.f0 <= 2; p_131.f0 += 1)
        {
            g_152[0] = l_151;
            l_151.f3 = g_81[p_131.f0];
            if (l_151.f0 | p_133)
            g_80 = g_152[0].f3 > 2 ?
    g_152[0].f3 :
    g_152[0].f3 << 2;
            else
            for (; g_32; 0)
                    {
                    }
        }
    return p_131;
}
int main ()
{
}

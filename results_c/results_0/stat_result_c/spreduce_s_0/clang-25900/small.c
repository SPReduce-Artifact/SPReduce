 char
(safe_rshift_func_uint8_t_u_s)(char left, int right )
{
  return
    right;
}
struct S1 {
   unsigned f0 : 29, f1 : 26, f3 : 27, f6 : 26;
   signed f2 : 10, f4 : 18, f5 : 1;
};
 int g_37 ;
static char g_66 = -5L;
 char func_5()
{
}
int main ()
{
    int backup_2_8502_22363_g_183__func_44 = g_37;
struct S1 l_59__func_44 = {1957,70,26,2769,287,0,5702};
                    l_59__func_44.f5 = safe_rshift_func_uint8_t_u_s(0, 5);
                               char backup_0_8502_91289_l_59_f5__func_44 = l_59__func_44.f5;
g_37 = l_59__func_44.f2 + backup_2_8502_22363_g_183__func_44 % (~g_66 / backup_0_8502_91289_l_59_f5__func_44);func_5();
}

 char
(safe_mul_func_int8_t_s_s)(char si1, char si2 )
{
  return
    si1 * si2;
}
struct S1 {
   signed f0 : 5;
};
 int g_62 ;
  struct S1 g_80 ;
 int * func_49(int * p_51, char p_52)
{
        for (p_52 = 6; p_52 != -7; p_52--)
        g_80.f0 ^= safe_mul_func_int8_t_s_s(p_52, g_62) && 1L;
    return p_51;
}
int main ()
{
    return 0;
}

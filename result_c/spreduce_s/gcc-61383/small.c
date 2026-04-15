 int
(safe_add_func_int32_t_s_s)(int si1, int si2 )
{
  return
    si1 && si2 && si1 > 2147483647-si2 || si1 && si2<0 && 0 < 2147483647-si2 ?
    0 :
    si1 + si2;
}
  char
  g_176
  ;
 int
func_39
  (char
   p_40
)
{
  for
    (;
     g_176
      <
      12;
     g_176
     =
     safe_add_func_int32_t_s_s
     (g_176,
      3))
  {
    int
      l_220;
    if (l_220 = p_40 == 0 ?
    0 :
    p_40 % p_40)
    {
    }
      if (p_40 <= 0)
      {
      }
      else
      if (l_220)
 break;
  }
  return
    0;
}
int
main
  (
)
{
  if (func_39 (0))
    {
    }
}

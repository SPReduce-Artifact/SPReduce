int printf (const char *, ...), g_3 = 9L, g_208[3], g_3331, g_189;
 short int
(safe_mod_func_int16_t_s_s)(short int si1, short int si2 )
{
  return
    si2 == 0 || si1 && si2 ?
    si1 :
    si1 % si2;
}
 char
(safe_mul_func_uint8_t_u_u)(char ui1, char ui2 )
{
  return ui1;
}
  int
(safe_mod_func_uint16_t_u_u)( int ui1, unsigned int ui2 )
{
  return
    ui1 % ui2;
}
 unsigned int crc32_context, g_75 = 0xDC6F3D13L ;
 long long int g_99[4], g_806 ;
 char g_359 ;
static char g_2945 = 1L, g_4576[3] = {
  0xA0L,
  0xA0L,
  0xA0L
};
 int
func_1 ()
{
  char l_19 = 4UL;
  int l_4837[5][2][10] , l_24 = 1L ;
      for (g_806 = 0; 3; 1)
 {
   for (g_189 = 0; g_189 <= 3; g_189 += 1)
     if (g_75 >=
    ((g_359 =
          safe_mod_func_uint16_t_u_u
    (l_19,
     safe_mod_func_int16_t_s_s
        ((l_4837[4][1][5] =
          ~safe_mul_func_uint8_t_u_u (safe_mod_func_int16_t_s_s (0, l_24) != 5, 0) + g_806 && 0x57L) | 0x5379D1F7L, 0xDA2DL))) > g_4576[2]))
      {
        g_3 = 0;
        g_99[3] =
            l_4837[4][1][5];
      }
    else
      {
        int l_4938[1];
        g_3331
   =
   l_4938[0] < l_4837[4][1][5];
        g_208[2] =
   l_4938[0];
      }
       for (; g_2945; 0)
  return 0;
   if (g_359 =
         safe_mod_func_int16_t_s_s
       (safe_mod_func_int16_t_s_s (0, 0), 0xDA2DL))
     {
     }
 }
}
int
main ()
{
  func_1 ();
  crc32_context =
  g_3;
  printf ("checksum = %X\n", crc32_context);
  return 0;
}

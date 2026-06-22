 char
(safe_lshift_func_int8_t_s_u)(char left,  int right )
{
  return
    left ?
    0 :
    right;
}
 int
(safe_mod_func_int32_t_s_s)(int si1, int si2 )
{
  return
    si2 == 0 || si1 && si2 ?
    0 :
    si1 % si2;
}
 char g_4 , g_173;
 int g_22 = 0x5EE56E31L, g_315, g_540 = 0x03F238A4L, g_813[7][1];
static int func_8(short int p_9);
static char func_35(char p_36, short int p_37, int p_38, int p_39);
 int func_8(short int p_9)
{
    int l_1077 = 0x3CE7L;
    func_35(0, 0, 0, safe_mod_func_int32_t_s_s(g_4, g_4));
    if (g_540)
    {
        int l_1288;
            for (p_9 = 0; 0; 0)
            {
            }
        for (l_1288 = 0; l_1288 <= 49; l_1288 = l_1288 + 8)
        if (4 - safe_mod_func_int32_t_s_s(4, l_1077))
            {
                int l_1423 = 0xE576516EL;
                if (safe_lshift_func_int8_t_s_u(p_9, g_315 = p_9 && safe_mod_func_int32_t_s_s(p_9, 0xBC2AB98CL)))
                {}
                else
                l_1423 = 0;
                    p_9 = !(0x60781BCDL >= safe_mod_func_int32_t_s_s(safe_mod_func_int32_t_s_s(0, p_9), p_9) <= 0) - l_1423;
            }
    }if (g_22)
        {
        }
        else
        {
            char l_1955[3];
            g_813[2][0] = safe_mod_func_int32_t_s_s(safe_mod_func_int32_t_s_s(l_1955[1], p_9), 0x9CFB623FL);
        }
                    return 0;
}
 char func_35(char p_36, short int p_37, int p_38, int p_39)
{
    if (g_315 = safe_mod_func_int32_t_s_s(1L, g_22) + g_4)
    {
    }
g_173 = 4UL;
}
int main ()
{
if (func_8(6))
    {}
}

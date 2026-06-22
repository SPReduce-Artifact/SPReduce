typedef unsigned int size_t;
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
int printf (const char *, ...);
void __assert_fail (const char *__assertion, const char *__file, unsigned int __line, const char *__function);
static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 - si2);
}
static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
}
static uint8_t
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
}
static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
(safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return ui1 - ui2;
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);static long __undefined;
struct S0 {
   uint16_t f0;
};
struct S1 {
   unsigned f0 : 29;
   unsigned f1 : 26;
   signed f2 : 10;
   unsigned f3 : 27;
   signed f4 : 18;
   signed f5 : 1;
   unsigned f6 : 26;
};
static int8_t g_12 = 0xBCL;
static int32_t g_13 = 0x5FEC46BCL;
static struct S0 g_21 = {0xC0B8L};
static int32_t g_30 = (-1L);
static int64_t g_32 = (-1L);
static uint8_t g_33 = 9UL;
static int64_t g_36 = 0xE281B1D0B827BE62LL;
static int32_t g_37 = 0x2EF61160L;
static int32_t g_38 = 6L;
static uint64_t g_39 = 0UL;
static int32_t g_65 = 1L;
static int8_t g_66 = (-5L);
static int8_t g_67 = (-4L);
static uint8_t g_69 = 0x3DL;
static uint32_t g_80 = 7UL;
static uint32_t g_182 = 18446744073709551609UL;
static int32_t g_183 = 0L;
static int16_t g_184 = 0L;
static uint8_t g_188 = 252UL;
static uint8_t g_191 = 1UL;
static struct S0 g_199 = {0x133DL};
static struct S1 g_238 = {8110,1413,13,11418,196,-0,504};
static int8_t g_240 = 0L;
static uint32_t g_241 = 18446744073709551615UL;
static uint32_t g_301 = 0x7F6F722BL;
static uint16_t g_315 = 0x89BEL;
static uint8_t g_322 = 0x36L;
static int32_t g_377 = 0x76F0FC06L;
static uint32_t g_378 = 0x122AFA7AL;
static int8_t g_524 = 0x0FL;
static int64_t g_527 = (-7L);
static uint32_t g_528 = 18446744073709551615UL;
static int32_t g_571 = 0x7B01DCB5L;
static int8_t g_586 = 0xB5L;
static uint16_t g_620 = 0xCC35L;
static int32_t g_756 = 0x66BD1D4CL;
static int32_t g_791 = (-9L);
static int32_t g_792 = 0x3C3CEAB1L;
static uint16_t g_793 = 0UL;
static int32_t g_800 = 0xF1E12B68L;
static uint8_t g_801 = 251UL;
static uint32_t g_873 = 18446744073709551615UL;
static uint16_t g_928 = 1UL;
static int32_t g_967 = 0x80995892L;
static uint32_t g_968 = 0xFF7B2476L;
static int16_t g_993 = 0x54F0L;
static uint32_t g_1249 = 4294967295UL;
static uint8_t g_1276 = 0UL;
static uint16_t g_1285 = 65535UL;
static int64_t func_1(void);
static uint8_t func_5(uint8_t p_6);
static int8_t func_14(int8_t p_15, struct S1 p_16, struct S0 p_17, struct S0 p_18, int32_t p_19);
static int16_t func_44(uint32_t p_45);
static int64_t func_1(void)
{
    struct S1 l_2 = {5257,2494,15,7269,192,0,6867};
    struct S1 l_20 = {8399,1580,12,4707,209,0,910};
    struct S1 l_1295 = {8978,2774,11,1659,145,0,2412};
                                        if ((g_1285 > 65535) )
{}
                    l_2.f2 = ((l_2 , (((((((-8L) && (safe_rshift_func_uint8_t_u_u(func_5(((l_1295 = (l_20 = ((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((!(g_12 || (l_2.f4 = (-1L)))) ^ g_12), 10)) <= (g_13 = g_12)), func_14(g_12, l_20, g_21, g_21, g_21.f0))) , g_238))) , g_571)), g_792))) != g_12) , 0UL) > l_2.f6) | 0xC987502CL) && g_528)) != g_524);
}
static uint8_t func_5(uint8_t p_6)
{
    return g_571;
}
static int8_t func_14(int8_t p_15, struct S1 p_16, struct S0 p_17, struct S0 p_18, int32_t p_19)
{
    int32_t l_29 = 0x78472532L;
    int32_t l_31 = 0x54F90BF5L;
                    uint64_t l_50 = 1UL;
        int32_t l_999 = 0x88B3C715L;
        l_999 &= ((l_29 | (safe_mod_func_int16_t_s_s(((func_44(((safe_rshift_func_int16_t_s_s((l_31 |= p_16.f3), (g_37 <= 6L))) , (safe_sub_func_uint64_t_u_u(p_19, l_50)))) , p_16.f2) | ((safe_sub_func_int8_t_s_s(0xA4L, p_16.f3)) <= g_571)), g_571))) || (-1L));
    return g_993;
}
static int16_t func_44(uint32_t p_45)
{
    struct S1 l_59 = {1957,70,26,2769,-287,0,5702};
                    l_59.f5 = (safe_rshift_func_uint8_t_u_s(g_968, 5));
                                   int32_t backup_0_8492_35125_g_756 = (~(((~((-(g_66)))) || ((((g_968 && g_756) + g_184) ^ ((~((((~(g_967)) | g_792) ^ (g_800 + l_59.f4)))) || (-(g_620)))) || (~((~(g_21.f0))))))));
int32_t backup_1_8492_56405_g_792 = (~(((((~(g_967)) || (g_756 + g_968)) || ((-(g_620)) ^ (~((~(l_59.f4)))))) | (~((((backup_0_8492_35125_g_756 & g_800) - (g_792 >> g_184)) && g_21.f0))))));
int32_t backup_2_8492_82163_g_800 = (~((((~(g_967)) - ((~(g_792)) ^ (((~(backup_0_8492_35125_g_756)) * (g_620 | g_756)) % g_968))) && (~((~((backup_1_8492_56405_g_792 & (g_21.f0 - (g_800 ^ l_59.f4))))))))));
uint32_t backup_3_8492_59236_g_968 = (~(((((-((~(g_21.f0)))) ^ (g_620 | backup_0_8492_35125_g_756)) || ((l_59.f4 | g_66) && (~((-(g_792)))))) - ((~((backup_1_8492_56405_g_792 & (backup_2_8492_82163_g_800 ^ g_756)))) + (-(g_968))))));
                               int8_t backup_0_8502_91289_l_59_f5 = (~(((~(((l_59.f5 && (((~(l_59.f0)) / g_37) || g_32)) / g_66))) - ((-(g_38)) * (~((((~(g_183)) % (~(g_377))) || (~((~((g_80 && l_59.f2))))))))))));
int32_t backup_1_8502_78635_g_37 = (-(((-(((~((-(backup_0_8502_91289_l_59_f5)))) ^ (-(l_59.f0))))) ^ (((-(((-(g_38)) + (~((~(g_377))))))) % (~(((-(((l_59.f2 + g_80) ^ l_59.f5))) - g_37)))) + ((~(g_183)) & (~((~(g_66)))))))));
int32_t backup_2_8502_22363_g_183 = (-((((((g_377 && backup_1_8502_78635_g_37) * g_37) | l_59.f5) & (g_80 ^ g_32)) - (~(((~((l_59.f2 * l_59.f0))) / (g_66 & g_38)))))));
uint32_t backup_3_8502_6189_l_59_f0 = (~(((~((((-(g_183)) | (g_38 / g_37)) && (~(backup_0_8502_91289_l_59_f5))))) % ((~(((g_32 ^ g_80) + (~((g_66 || (~(g_377)))))))) >> (-((l_59.f0 % (-(l_59.f5)))))))));
backup_0_8502_91289_l_59_f5 = l_59.f5;
l_59.f5 = (-(((~((~((~((~(l_59.f2)))))))) / (~(((-(((g_183 + backup_2_8502_22363_g_183) + ((~(l_59.f0)) | (-(((backup_0_8502_91289_l_59_f5 + g_80) / backup_1_8502_78635_g_37))))))) & (g_377 | (-((g_37 % g_66))))))))));
g_37 = (-((((((~(l_59.f2)) + backup_2_8502_22363_g_183) % (l_59.f5 + ((~(g_80)) & ((~(g_66)) / backup_0_8502_91289_l_59_f5)))) - (-(g_377))) % ((g_38 || l_59.f0) | g_183))));
g_183 = (-(((~((((~(l_59.f5)) ^ g_377) * (-((backup_1_8502_78635_g_37 * g_183)))))) / (((g_37 || l_59.f0) % (backup_2_8502_22363_g_183 - backup_3_8502_6189_l_59_f0)) & (~((g_66 + backup_0_8502_91289_l_59_f5)))))));
g_968 = backup_3_8492_59236_g_968;
}
int main (int argc, char* argv[])
{
    func_1();
    return 0;
}

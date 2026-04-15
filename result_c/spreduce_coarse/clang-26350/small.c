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
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 + si2);
}
static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 - si2);
}
static int8_t
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (si1 + si2);
}
static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
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
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807LL))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
(safe_div_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807LL -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 + ui2;
}
static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
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
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 + ui2;
}
static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 - ui2;
}
static uint16_t
(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
(safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
(safe_div_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);static long __undefined;
static volatile int8_t g_14 = 0x83L;
static int32_t g_59 = 2L;
static uint64_t g_71 = 18446744073709551608UL;
static int32_t g_72 = 6L;
static uint32_t g_81 = 1UL;
static volatile uint32_t g_100 = 0x3342DF67L;
static uint8_t g_156 = 246UL;
static uint64_t g_926 = 0UL;
static int64_t g_992 = (-6L);
static uint64_t g_1052 = 0xBFDAA821B431EB5BLL;
static int8_t g_1861 = 0xFEL;
static int16_t g_1973 = 1L;
static int16_t g_2223 = (-3L);
static int8_t g_2685 = 1L;
static uint16_t g_2725 = 0xF940L;
static int32_t g_2822 = 1L;
static volatile uint64_t g_2850 = 0xCF0A3F6CB511BC83LL;
static volatile int32_t g_3034 = 0x3D33D12DL;
static int16_t g_3288 = 0x68B9L;
static int8_t g_3420 = (-3L);
static int32_t g_3814 = 0x4D469CA0L;
inline static uint16_t func_1(void);
static int32_t func_2(int32_t p_3);
static int16_t func_7(int32_t p_8, uint32_t p_9, int8_t p_10, int64_t p_11);
static int16_t func_12(int64_t p_13);
static int16_t func_18(int32_t p_19, uint32_t p_20, uint32_t p_21, int32_t p_22, uint32_t p_23);
static int8_t func_28(int32_t p_29, uint64_t p_30, uint32_t p_31, uint8_t p_32, uint8_t p_33);
inline static uint8_t func_34(uint32_t p_35, int8_t p_36, int8_t p_37);
static int64_t func_38(uint8_t p_39, int16_t p_40);
inline static int16_t func_44(int16_t p_45);
inline static int32_t func_46(uint32_t p_47, uint64_t p_48);
inline static uint16_t func_1(void)
{
    uint16_t l_15 = 0xFD94L;
    int32_t l_2951 = 0x33C988FBL;
    l_2951 = func_2((+(((safe_sub_func_int16_t_s_s(func_7((func_12((g_14 <= l_15)) < (safe_div_func_int8_t_s_s((!((((safe_sub_func_int32_t_s_s((l_15 > g_1052), ((((g_1052 , 0xA8L) , ((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_15, ((((251UL != 249UL) || 0L) > l_15) > 0x5FC200A4L))), l_15)) > g_81)) || g_81) , 0x8E4701D5L))) | 4294967290UL) < l_15) && l_15)), g_2685))), l_15, g_1052, g_81), l_15)) < 4294967289UL) == l_15)));
}
static int32_t func_2(int32_t p_3)
{
    int64_t l_2937 = (-1L);
    for (; (g_81 < 37); ++g_81)
    {}
                    return l_2937;
}
static int16_t func_7(int32_t p_8, uint32_t p_9, int8_t p_10, int64_t p_11)
{
    int32_t l_2754 = 0xF5FE97D0L;
    int32_t l_2802 = 0L;
    int32_t l_2866 = 1L;
                    int32_t l_2758 = (-1L);
                    g_72 = ((g_81 & ((safe_lshift_func_uint8_t_u_u((p_11 <= l_2754), ((((!4294967295UL) & ((g_100 == (safe_mod_func_uint64_t_u_u((g_2725 || (4294967286UL > g_1973)), (g_71 & 0x72BDACC9L)))) , g_100)) ^ l_2758) | 0L))) <= l_2758)) == 0xDCB4CAF6L);
                                                                   int32_t backup_12_60576_41837_g_72 = (-((((~(((l_2802 / l_2866) ^ (g_72 % (~(g_992)))))) * (g_14 - g_926)) % (~((~((g_1052 / ((g_2685 | g_156) * g_2725)))))))));
uint16_t backup_13_60576_352_g_2725 = (~(((((-(g_14)) & backup_12_60576_41837_g_72) && ((g_2685 & (-(l_2802))) % ((g_926 * (g_2725 | (~(g_1052)))) ^ l_2866))) || (g_992 & (g_72 >> g_156)))));
int64_t backup_14_60576_88386_g_992 = (~(((~((-(((backup_13_60576_352_g_2725 || g_1052) / (~((~(g_156))))))))) * (~(((l_2866 & (((g_2685 & g_2725) % g_992) & (-((~(((l_2802 || g_14) + g_72))))))) & ((-(backup_12_60576_41837_g_72)) | (-(g_926)))))))));
int32_t backup_15_60576_73706_l_2866 = (~(((~((~(((~((~(backup_14_60576_88386_g_992)))) * (-((-(((backup_13_60576_352_g_2725 || (g_992 && (~(backup_12_60576_41837_g_72)))) / (~(((~((g_14 || (g_2725 + g_72)))) - ((~(g_1052)) || (l_2866 && g_926))))))))))))))) | (~((((~(g_2685)) & g_156) % (-((~((~((~(l_2802))))))))))))));
uint64_t backup_16_60576_6012_g_1052 = (~(((-(((~(((~((~(l_2866)))) | (~((backup_15_60576_73706_l_2866 & (~(backup_14_60576_88386_g_992)))))))) & (~(g_1052))))) * (~(((~((~((g_926 | g_992))))) % ((~((~((g_2725 + g_72))))) / (((backup_13_60576_352_g_2725 | g_2685) % (-(g_14))) ^ (~((((~(backup_12_60576_41837_g_72)) - g_156) || l_2802)))))))))));
int8_t backup_17_60576_2276_g_14 = (~(((~((-(((~((((backup_15_60576_73706_l_2866 - ((-(((l_2802 - g_1052) % g_926))) | g_72)) || ((~((~(g_992)))) * (~(backup_16_60576_6012_g_1052)))) ^ (backup_13_60576_352_g_2725 - g_2725)))) + ((-(g_2685)) - (-(((backup_14_60576_88386_g_992 & g_156) - (l_2866 / backup_12_60576_41837_g_72)))))))))) + (-((~(g_14)))))));
g_992 = (~((((~((~((-((~(l_2866)))))))) & (~(((~((g_1052 + backup_12_60576_41837_g_72))) ^ (-(((~((((g_926 / (~((backup_15_60576_73706_l_2866 || (g_156 || l_2802))))) ^ g_72) | (backup_16_60576_6012_g_1052 && g_14)))) + ((backup_14_60576_88386_g_992 | g_2685) - (~(backup_17_60576_2276_g_14)))))))))) && (~((~(((~(g_992)) | (g_2725 + (~((-(backup_13_60576_352_g_2725)))))))))))));
g_1052 = (~((((((~((~(g_14)))) || backup_15_60576_73706_l_2866) && backup_14_60576_88386_g_992) - ((~((~(g_926)))) & ((~((g_72 && backup_16_60576_6012_g_1052))) % ((((~(g_2685)) / (g_2725 || (backup_17_60576_2276_g_14 | (~(g_156))))) && g_1052) || ((backup_12_60576_41837_g_72 >> l_2802) || g_992))))) | (-((~((l_2866 || (~(backup_13_60576_352_g_2725))))))))));
    return l_2866;
}
static int16_t func_12(int64_t p_13)
{
    uint8_t l_17 = 253UL;
    int32_t l_16 = 0x790E8648L;
        uint16_t l_1860 = 0x8F5EL;
        l_16 = (func_18((safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((func_28(p_13, p_13, p_13, func_34(p_13, ((((l_16 <= func_38((((+(safe_mod_func_int16_t_s_s(func_44(l_16), ((0xE568C3B083FFB38BLL & ((((l_17 , l_16) == g_59) | g_59) , l_17)) , 1UL)))) > p_13) || g_81), l_16)) == p_13) , g_14) ^ l_17), p_13), p_13) < 0x52L) >= 65535UL), 0)), p_13)), g_81, p_13, l_1860, g_1861) != l_1860);
                    for (g_1973 = (-1); (g_1973 < (-5)); g_1973--)
        {}
    return p_13;
}
static int16_t func_18(int32_t p_19, uint32_t p_20, uint32_t p_21, int32_t p_22, uint32_t p_23)
{
                    return p_22;
}
static int8_t func_28(int32_t p_29, uint64_t p_30, uint32_t p_31, uint8_t p_32, uint8_t p_33)
{
    uint8_t l_664 = 249UL;
    uint32_t l_721 = 0x6FB6BC49L;
    int32_t l_725 = (-1L);
    uint16_t l_871 = 65535UL;
    uint64_t l_894 = 0x79FDE5A4C0ACDB96LL;
    int64_t l_947 = 0x2E89F63837035CFALL;
    uint32_t l_1133 = 0x572B1976L;
    int64_t l_1355 = 0L;
    int32_t l_1768 = 1L;
    uint8_t l_1845 = 0x93L;
    int64_t l_705 = (-1L);
        uint16_t l_720 = 0UL;
        int32_t l_722 = 0x90DEB2BAL;
        int32_t l_815 = 0xF7EF7079L;
        uint32_t l_883 = 18446744073709551607UL;
                               uint32_t backup_36_60549_14755_l_883 = (~(((~((g_71 % g_81))) - (-((l_1133 + (~((((l_720 - (~(l_883))) ^ (~((l_705 && l_721)))) && (~(((l_725 % (~((~(l_722))))) % g_14))))))))))));
uint32_t backup_37_60549_10239_l_1133 = (~((((g_81 * l_721) + (l_722 || ((~((l_1133 & g_71))) - (-(l_720))))) >> ((((l_883 - backup_36_60549_14755_l_883) % g_14) / l_725) && (~((~(l_705))))))));
uint64_t backup_38_60549_78259_g_71 = (~(((~((l_883 >> ((((l_722 & g_71) | (l_705 * g_14)) && (l_1133 && backup_36_60549_14755_l_883)) << (~((-((g_81 || l_725))))))))) % (~((backup_37_60549_10239_l_1133 / (l_720 ^ (~(l_721)))))))));
int32_t backup_39_60549_46518_l_722 = (-(((-((~((~((backup_36_60549_14755_l_883 - ((~((-((l_705 || (-(l_721))))))) || ((~((~(((~((l_883 && l_722))) & g_81))))) ^ (g_14 ^ l_725)))))))))) | (((~(g_71)) ^ (l_1133 && (~(backup_38_60549_78259_g_71)))) | (backup_37_60549_10239_l_1133 + l_720)))));
uint32_t backup_40_60549_39715_g_81 = (~(((~((~((-((-(l_1133)))))))) || (((~(l_883)) - (~(((~((~((g_14 & g_81))))) >> (~(l_705)))))) | ((((backup_38_60549_78259_g_71 || backup_37_60549_10239_l_1133) % (~(g_71))) / ((l_725 - (l_722 && backup_36_60549_14755_l_883)) || (~(l_721)))) || ((-(l_720)) & backup_39_60549_46518_l_722))))));
int64_t backup_41_60549_66065_l_705 = (~(((((~((l_883 & g_14))) & (backup_37_60549_10239_l_1133 & (backup_36_60549_14755_l_883 - (l_1133 | backup_40_60549_39715_g_81)))) ^ ((-((~(l_721)))) << (g_71 / l_705))) || ((~(((-(l_725)) || ((backup_38_60549_78259_g_71 * l_720) | (~((backup_39_60549_46518_l_722 ^ (-(l_722))))))))) - (~((~(g_81))))))));
l_1133 = (~(((~(g_71)) + ((-((((~((backup_40_60549_39715_g_81 * l_720))) % ((backup_38_60549_78259_g_71 ^ l_721) & l_705)) - (-(g_81))))) * (~(((~(l_883)) || ((-((backup_37_60549_10239_l_1133 & (backup_39_60549_46518_l_722 / backup_41_60549_66065_l_705)))) | ((~(l_725)) - ((~(l_722)) + ((l_1133 ^ backup_36_60549_14755_l_883) & g_14)))))))))));
g_71 = (~(((-((~(((-(l_705)) ^ (l_721 | g_81)))))) * (~(((~((-((l_725 ^ l_883))))) || ((~((l_720 ^ (g_14 ^ g_71)))) - (backup_41_60549_66065_l_705 + ((~((-((backup_39_60549_46518_l_722 ^ (l_1133 + backup_40_60549_39715_g_81)))))) & ((-((backup_37_60549_10239_l_1133 & backup_38_60549_78259_g_71))) % (l_722 ^ backup_36_60549_14755_l_883)))))))))));
                               uint8_t backup_48_60577_88812_g_156 = (~(((l_721 / ((~(l_720)) ^ l_1133)) - ((~((((g_100 - l_1355) / g_1052) - (l_894 ^ g_992)))) * ((~(g_156)) % l_664)))));
uint8_t backup_49_60577_64997_l_664 = (~(((((backup_48_60577_88812_g_156 ^ l_1133) || (((-(g_156)) + ((-(g_1052)) & (~(g_992)))) * (~(l_894)))) ^ (~((l_1355 ^ l_720)))) - (-((((~(g_100)) ^ l_664) - l_721))))));
int64_t backup_50_60577_68215_l_1355 = (~((((l_1355 ^ (~(backup_48_60577_88812_g_156))) + (((~(((l_721 % g_1052) * g_100))) - backup_49_60577_64997_l_664) & l_664)) - (l_720 || ((~(g_992)) ^ (~(((l_1133 - (-(l_894))) % (~((~(g_156))))))))))));
uint32_t backup_51_60577_11968_g_100 = (~(((-((g_100 || l_664))) && (-((((~(((-(g_992)) | (l_1133 >> l_1355)))) * (-(((l_721 && backup_48_60577_88812_g_156) + (backup_49_60577_64997_l_664 - (l_720 * l_894)))))) + (~((backup_50_60577_68215_l_1355 ^ (~((g_1052 - g_156))))))))))));
int64_t backup_52_60577_4049_g_992 = (~((((~((~(g_1052)))) || ((~((-(l_894)))) + ((~((~(((-(l_720)) ^ l_664))))) >> (((~(backup_48_60577_88812_g_156)) && (l_1133 / backup_51_60577_11968_g_100)) * g_156)))) || (-((~((((backup_50_60577_68215_l_1355 * g_100) || l_721) && ((backup_49_60577_64997_l_664 - g_992) && l_1355)))))))));
uint64_t backup_53_60577_55168_g_1052 = (~(((-(((-((((backup_51_60577_11968_g_100 - l_721) * (~((~(backup_52_60577_4049_g_992))))) | g_156))) | (-((((-((g_992 && l_1355))) - (-(g_1052))) + ((~(backup_49_60577_64997_l_664)) % ((~(l_894)) ^ (backup_50_60577_68215_l_1355 ^ (g_100 - (l_664 - (l_1133 * l_720)))))))))))) ^ (-((~(backup_48_60577_88812_g_156)))))));
backup_52_60577_4049_g_992 = g_992;
backup_53_60577_55168_g_1052 = g_1052;
g_100 = (-(((~((~((g_156 + g_992))))) || ((~((~(((~((((-((backup_48_60577_88812_g_156 & (~((((~(l_720)) | (-(g_100))) % (l_1355 | backup_53_60577_55168_g_1052))))))) | l_894) && ((backup_50_60577_68215_l_1355 - l_1133) % backup_52_60577_4049_g_992)))) * ((~((backup_51_60577_11968_g_100 & backup_49_60577_64997_l_664))) && ((-(l_721)) & g_1052))))))) + (~(l_664))))));
g_100 = backup_51_60577_11968_g_100;
                               int64_t backup_54_60577_42289_l_947 = (~((((~(((~(l_1133)) ^ (~(l_1845))))) * (l_721 / g_71)) / (((l_815 ^ l_664) & (l_947 & l_871)) / ((~(l_1768)) / (~(g_72)))))));
uint32_t backup_55_60577_114_l_1133 = (~((((~((((l_1768 & l_1133) & ((~(l_721)) * l_664)) ^ g_72))) & (~((~((g_71 / l_947)))))) ^ ((~((-(backup_54_60577_42289_l_947)))) | (l_871 | ((~(l_815)) & l_1845))))));
uint8_t backup_56_60577_33816_l_1845 = (~((((~((-((~((g_71 % (l_664 * (~(backup_55_60577_114_l_1133)))))))))) - ((~((((g_72 || l_1133) && (~(l_1768))) % (l_721 & (~(l_871)))))) | (backup_54_60577_42289_l_947 || (~((~((l_947 || l_815)))))))) && l_1845)));
int32_t backup_57_60577_81623_g_72 = (-((l_664 - (-((((l_1768 || l_1845) % (((-((backup_55_60577_114_l_1133 && l_815))) | ((-(g_72)) + backup_54_60577_42289_l_947)) * (~((g_71 % l_871))))) - (~((~(((~(backup_56_60577_33816_l_1845)) & (l_721 || (-((l_1133 % l_947)))))))))))))));
uint64_t backup_58_60577_65832_g_71 = (~(((~((((((((~(l_871)) & g_71) & (~(backup_56_60577_33816_l_1845))) && l_1133) && (~((-((~((~(backup_55_60577_114_l_1133))))))))) || (~((g_72 & (~(l_1845)))))) << (l_947 || ((-((~((~(l_721)))))) || backup_57_60577_81623_g_72))))) % (~((-(((l_664 ^ backup_54_60577_42289_l_947) & (l_815 & l_1768)))))))));
int32_t backup_59_60577_43683_l_1768 = (~((((l_664 * (~(((~((backup_54_60577_42289_l_947 & backup_55_60577_114_l_1133))) / l_871)))) && (~((((-(backup_58_60577_65832_g_71)) && (~((l_721 % backup_57_60577_81623_g_72)))) / backup_56_60577_33816_l_1845)))) + ((~((~(l_947)))) | ((l_1133 / (-((-(l_815))))) % (~(((g_71 & (l_1845 & g_72)) & l_1768))))))));
backup_55_60577_114_l_1133 = l_1133;
backup_57_60577_81623_g_72 = g_72;
backup_58_60577_65832_g_71 = g_71;
g_72 = (~((((((~((~(backup_56_60577_33816_l_1845)))) & ((~((l_721 & backup_58_60577_65832_g_71))) >> l_1768)) * ((~(l_947)) % l_1133)) + (backup_59_60577_43683_l_1768 >> (backup_55_60577_114_l_1133 || l_664))) / (((g_72 * l_871) | (backup_54_60577_42289_l_947 - (l_1845 | g_71))) << (-((~((l_815 & backup_57_60577_81623_g_72)))))))));
if(((!(((backup_59_60577_43683_l_1768<=1) && (l_1133 > backup_58_60577_65832_g_71))) && (((g_72 < backup_59_60577_43683_l_1768) || backup_56_60577_33816_l_1845) && g_72)) || (((l_1845 > l_721) && ((!backup_54_60577_42289_l_947) || (l_947<=-1LL))) || (l_947 && ((!l_815) || (!l_871))))))printf("l_1845=%llu\n", (unsigned long long)l_1845);
        for (g_156 = (-26); (g_156 >= 52); g_156 = safe_add_func_int16_t_s_s(g_156, 9))
            {}
    for (g_926 = 29; (g_926 < 56); ++g_926)
    {
    }
    for (g_59 = (-24); (g_59 >= (-14)); ++g_59)
    {
    }
                    return g_72;
}
inline static uint8_t func_34(uint32_t p_35, int8_t p_36, int8_t p_37)
{
            g_72 = (!p_36);
                    return g_72;
}
static int64_t func_38(uint8_t p_39, int16_t p_40)
{
    int8_t l_85 = 0L;
    return l_85;
}
inline static int16_t func_44(int16_t p_45)
{
    int8_t l_60 = 1L;
    int32_t l_65 = (-5L);
    uint16_t l_70 = 65533UL;
                g_72 = func_46((+((p_45 ^ ((~(((((safe_div_func_int8_t_s_s(3L, (g_14 && 1L))) <= (safe_sub_func_int8_t_s_s((((g_59 & (l_60 > (safe_lshift_func_uint16_t_u_s((g_59 | (safe_div_func_uint64_t_u_u(l_65, (safe_sub_func_int64_t_s_s((((((((((safe_mod_func_int32_t_s_s(p_45, g_59)) , l_60) && l_65) && g_59) & g_59) >= l_60) & 0xB3E2L) < p_45) != 5UL), l_70))))), 11)))) >= 0xF16CE65C5BCCBF78LL) , 0x25L), l_60))) <= g_59) || l_65) , p_45)) >= 1L)) , p_45)), p_45);
    return g_71;
}
inline static int32_t func_46(uint32_t p_47, uint64_t p_48)
{
    g_71 = p_47;
    return g_71;
}
int main (void)
{
    func_1();
    return 0;
}

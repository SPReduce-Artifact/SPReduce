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
(safe_unary_minus_func_int8_t_s)(int8_t si )
{
  return
    -si;
}
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
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{
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
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
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
static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 + ui2;
}
static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 - ui2;
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
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
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
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{
  return -ui;
}
static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 + ui2;
}
static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 - ui2;
}
static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);static long __undefined;
static int8_t g_4 = (-1L);
static uint8_t g_12 = 0UL;
static int32_t g_22 = 0x5EE56E31L;
static uint16_t g_63 = 65532UL;
static int8_t g_83 = (-1L);
static uint32_t g_103 = 1UL;
static int32_t g_115 = 0xDA9491B2L;
static uint32_t g_161 = 8UL;
static uint16_t g_172[9] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
static uint8_t g_173 = 1UL;
static int16_t g_188 = 0x3C2DL;
static uint8_t g_217 = 0x25L;
static int32_t g_247 = 7L;
static uint16_t g_315 = 0x66F1L;
static uint32_t g_359[10][7] = {{0x3FA7BD63L,0x3FA7BD63L,4294967295UL,1UL,2UL,4294967286UL,0x86D169E2L},{4294967286UL,4294967295UL,2UL,0xEBBF1EA3L,4294967295UL,0UL,0xD3F18FECL},{4294967295UL,0xB191E2DDL,0x894467B8L,4294967295UL,2UL,0xD3F18FECL,0x3FA7BD63L},{1UL,0xC4126F55L,0xC6494F46L,0x70286BD2L,0xEF9FE435L,0xEF9FE435L,0x70286BD2L},{4294967291UL,0xC4126F55L,4294967291UL,0x3FA7BD63L,0xD3F18FECL,2UL,4294967295UL},{0UL,0xB191E2DDL,0xB191E2DDL,4294967291UL,0xD4A24541L,0xB2788A97L,0UL},{1UL,0xC6494F46L,0xD3F18FECL,1UL,2UL,1UL,4294967295UL},{0x86D169E2L,4294967295UL,2UL,0xD4A24541L,1UL,0xD3F18FECL,1UL},{0xB191E2DDL,2UL,2UL,0xB191E2DDL,4294967286UL,4294967291UL,0xD3F18FECL},{1UL,4294967295UL,0xD3F18FECL,2UL,0xC4126F55L,0xD4A24541L,0xAF15F833L}};
static int8_t g_361 = 0xE8L;
static uint16_t g_538 = 0x2A52L;
static uint32_t g_540 = 0x03F238A4L;
static int32_t g_541 = 2L;
static int16_t g_543[3] = {0xA684L,0xA684L,0xA684L};
static uint16_t g_813[7][1] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
static int16_t g_866[8][10] = {{0xE09DL,0L,0x2212L,0x2212L,0L,0xE09DL,(-1L),0x4458L,0L,0x4458L},{0xF029L,0x2212L,0L,0x98E1L,0L,0x2212L,0xF029L,(-1L),0x1ED0L,0x1ED0L},{0xF029L,0x1ED0L,0xE09DL,0L,0L,0xE09DL,0x1ED0L,0xF029L,0L,(-1L)},{0xE09DL,0x1ED0L,0xF029L,0L,(-1L),0L,0xF029L,0x1ED0L,0xE09DL,0L},{0L,0x2212L,0xF029L,(-1L),0x1ED0L,0x1ED0L,(-1L),0xF029L,0x2212L,0L},{0x2212L,0L,0xE09DL,(-1L),0x4458L,0L,0x4458L,(-1L),0xE09DL,0L},{0L,0xF029L,0L,0L,0x4458L,0x98E1L,0x98E1L,0x4458L,0L,0L},{0x4458L,0x4458L,0x2212L,0L,0x1ED0L,0x98E1L,0xE09DL,0x98E1L,0x1ED0L,0L}};
static int32_t g_949[3][9][9] = {{{0x19FE0FA4L,0x004CDDF9L,0xA2352584L,1L,4L,(-1L),(-1L),(-4L),0xB51D2F47L},{0x02FF677CL,0xFB20F18DL,0x3FD00C3BL,4L,4L,0x3FD00C3BL,0xFB20F18DL,0x02FF677CL,0xA2352584L},{0L,0L,0x3C1CCF04L,0L,4L,0L,4L,0x80CBB97EL,1L},{0x94A69707L,(-4L),0x2773E334L,0x80CBB97EL,0x004CDDF9L,0x5E55A83DL,(-1L),(-7L),0xA2352584L},{(-1L),0xB7AAB78DL,2L,(-1L),0x7E126A91L,(-5L),1L,0L,0xB51D2F47L},{0x19FE0FA4L,0x94A69707L,0xC2B10BA8L,(-1L),(-1L),0L,0x19FE0FA4L,(-4L),(-1L)},{0xA537F120L,3L,0x0F8F2D30L,0x80CBB97EL,0L,0x3FD00C3BL,6L,0xA537F120L,0x1374F73BL},{0x04754667L,(-1L),0xA2352584L,0L,1L,0L,0xDE5814CDL,5L,0xF3A357CCL},{4L,5L,1L,1L,8L,4L,5L,0x765C689EL,0xA537F120L}},{{0L,0x62F880C4L,1L,0x514180D2L,0x62F880C4L,0x04754667L,0x004628F1L,1L,6L},{0x622710D1L,0x0710E789L,0xA537F120L,1L,0x1FC49A14L,1L,4L,0L,4L},{5L,(-5L),0L,0xA5559F9FL,0x3772736DL,1L,0x004628F1L,5L,3L},{0x9C3268C6L,0L,3L,0L,(-5L),0L,5L,5L,0L},{0x87EFAE68L,0L,0xB7AAB78DL,0L,0x87EFAE68L,4L,0xDE5814CDL,0x0B2B9C01L,0x04754667L},{5L,(-5L),4L,0x514180D2L,0x004628F1L,0x02FF677CL,1L,0L,0x7E126A91L},{4L,0x0710E789L,0x62D64424L,(-3L),1L,4L,0x0710E789L,0x1FC49A14L,4L},{0x11A29F7FL,0x62F880C4L,(-2L),0xDE5814CDL,0xA5559F9FL,0L,0x004628F1L,0x11A29F7FL,0L},{0x11A29F7FL,5L,0xA537F120L,0x11A29F7FL,(-5L),1L,0x1FC49A14L,0L,(-1L)}},{{4L,0x1FC49A14L,0xB7AAB78DL,0xA5559F9FL,0x52EAD88AL,1L,1L,0x765C689EL,3L},{5L,0xB2702615L,0x7E126A91L,0x0B2B9C01L,(-5L),0x04754667L,0x61EF5EBCL,0L,0xFB20F18DL},{0x87EFAE68L,0x622710D1L,0x02FF677CL,1L,0xA5559F9FL,4L,6L,0xA5559F9FL,0xFB20F18DL},{0x9C3268C6L,(-5L),(-1L),0xDE5814CDL,1L,0L,1L,0x9C3268C6L,3L},{5L,5L,0x62D64424L,(-3L),0x004628F1L,(-2L),5L,0x1FC49A14L,(-1L)},{0x622710D1L,0xA5559F9FL,1L,0xDE5814CDL,0x87EFAE68L,(-4L),1L,1L,0L},{0L,0x61EF5EBCL,4L,1L,(-5L),0L,(-5L),1L,4L},{4L,4L,0x02FF677CL,0x0B2B9C01L,0x3772736DL,1L,8L,0x1FC49A14L,0x7E126A91L},{0x9C3268C6L,0xB2702615L,0xF3A357CCL,0xA5559F9FL,0x1FC49A14L,0L,0x61EF5EBCL,0x9C3268C6L,0x04754667L}}};
static int16_t g_974 = (-1L);
static uint8_t g_1129 = 252UL;
static int32_t g_1215[6] = {0x2F236E6CL,0x2F236E6CL,1L,0x2F236E6CL,0x2F236E6CL,1L};
static uint8_t g_1460 = 0x4FL;
static int16_t g_1524 = (-9L);
static uint8_t g_2177[6][4][10] = {{{0xFBL,247UL,0xB9L,255UL,255UL,0xFBL,251UL,0xB9L,255UL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L},{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L}},{{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L},{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L}},{{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L},{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L}},{{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L},{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L}},{{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L},{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L}},{{247UL,255UL,251UL,0xDBL,4UL,247UL,255UL,251UL,4UL,4UL},{247UL,255UL,251UL,4UL,4UL,251UL,255UL,247UL,4UL,0xDBL},{247UL,255UL,251UL,0xDBL,4UL,247UL,255UL,251UL,4UL,4UL},{247UL,255UL,251UL,4UL,4UL,251UL,255UL,247UL,4UL,0xDBL}}};
static int32_t g_2352[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int8_t g_2420 = (-2L);
static int32_t g_2476 = 0x7B48C0CFL;
static int32_t g_2576 = 6L;
static uint32_t g_2598 = 0xF45B1DEAL;
static uint8_t g_2710 = 0x47L;
static int32_t g_3152 = (-1L);
static int32_t g_3258 = 5L;
static uint16_t g_3261 = 0x2ECEL;
static int8_t g_3409 = 8L;
static uint8_t g_3421 = 0UL;
static int32_t g_3484 = 1L;
static int8_t g_3781 = 1L;
static int32_t g_3956[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static uint32_t g_3957 = 0UL;
static int32_t func_1(void);
static uint8_t func_6(uint32_t p_7);
static uint16_t func_8(int16_t p_9);
static int32_t func_15(uint32_t p_16, int8_t p_17, uint32_t p_18, uint32_t p_19, uint32_t p_20);
static int32_t func_29(uint8_t p_30, uint8_t p_31, uint16_t p_32, uint32_t p_33, int32_t p_34);
static int8_t func_35(int8_t p_36, int16_t p_37, int32_t p_38, int32_t p_39);
static int32_t func_42(int16_t p_43, int32_t p_44, uint32_t p_45);
static int32_t func_46(int8_t p_47);
static int32_t func_48(uint32_t p_49, int16_t p_50);
static int8_t func_57(int16_t p_58, uint32_t p_59, uint32_t p_60, int32_t p_61);
static int32_t func_1(void)
{
    uint32_t l_5[6][7] = {{0x327439CBL,0xB03629AAL,0UL,0UL,0xB03629AAL,0x327439CBL,2UL},{1UL,0UL,0x91F782A1L,2UL,1UL,1UL,2UL},{0xFE4B2830L,0x1D2250DBL,0xFE4B2830L,7UL,2UL,1UL,0x327439CBL},{0x91F782A1L,0UL,1UL,7UL,1UL,0UL,0x91F782A1L},{0UL,0xB03629AAL,0x327439CBL,2UL,0UL,1UL,0UL},{0UL,0UL,0UL,0UL,0xFE4B2830L,1UL,7UL}};
    int32_t l_2266[5];
    if ((((safe_lshift_func_uint16_t_u_s(g_4, 8)) | l_5[1][6]) != func_6((l_2266[3] = ((g_813[3][0] = func_8(l_5[1][6])) || (!(l_5[1][6] <= 1UL)))))))
    {}
    else
    {
    }
}
static uint8_t func_6(uint32_t p_7)
{
    int16_t l_2267 = 0x1B23L;
  return l_2267;
}
static uint16_t func_8(int16_t p_9)
{
    uint16_t l_21 = 0xEB38L;
    int32_t l_26 = 0xD437F1BDL;
    int32_t l_27 = 1L;
    int8_t l_28 = 0x24L;
    int32_t l_975[3][1];
    uint16_t l_1001 = 0x0784L;
    uint16_t l_1077 = 0x3CE7L;
    int8_t l_1359[7] = {0L,0xD9L,0L,0L,0xD9L,0L,0L};
    uint16_t l_1377 = 1UL;
    int8_t l_1434 = 2L;
    int16_t l_1631 = 0xB5F5L;
    uint16_t l_1956 = 8UL;
    l_975[0][0] = (((safe_add_func_uint8_t_u_u((g_974 = ((g_12 = (-5L)) & (safe_mod_func_uint8_t_u_u((0x68L ^ (func_15(l_21, (((g_22 = g_4) >= ((l_27 = (g_4 == (l_26 = ((p_9 != (p_9 ^ (-1L))) == (safe_mod_func_int32_t_s_s(((~g_4) < p_9), g_4)))))) < g_4)) > p_9), l_21, g_4, l_28) | 4294967295UL)), l_28)))), 3L)) == g_4) <= 0L);
    if (g_540)
    {
        int32_t l_982 = (-1L);
        int32_t l_987 = 0xB0431CEDL;
        int32_t l_1000[3][7] = {{0x510B92E6L,0x510B92E6L,3L,0x510B92E6L,0x510B92E6L,3L,0x510B92E6L},{0x510B92E6L,0x285A33BBL,0x285A33BBL,0x510B92E6L,0x285A33BBL,0x285A33BBL,0x510B92E6L},{0x285A33BBL,0x510B92E6L,0x285A33BBL,0x285A33BBL,0x510B92E6L,0x285A33BBL,0x285A33BBL}};
        uint16_t l_1153 = 0x1594L;
        int32_t l_1179 = 0xF7BD02E2L;
        int16_t l_1271 = 0x809CL;
        uint32_t l_1288 = 0x20D07CB7L;
        int16_t l_1736 = 0xB9D6L;
        if ((safe_sub_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((l_1001 = (safe_add_func_uint32_t_u_u(((((g_217 = (l_982 == (g_315 = (0x1527L != ((((((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(p_9, (l_987 = 0x122DL))), 0xAF5DB42CL)) < (7L < g_949[2][8][7])) <= p_9) > ((((((safe_mod_func_int8_t_s_s(((((l_1000[1][6] = ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s(((l_975[0][0] <= p_9) && 0x7284A069L), 6)) >= l_982), g_217)) <= p_9), p_9)), l_982)), 3)) <= l_982)) < g_188) != g_172[4]) < p_9), 0xE7L)) || g_103) <= 0x4BB63EC3L) ^ l_28) & 0x178DB0B5L) & l_982)) <= l_21) == g_949[1][4][1]))))) != 0x11L) && p_9) >= g_103), p_9))), 4294967295UL)) && l_982), (-7L))))
        {
            int i;
            for (p_9 = 0; (p_9 <= (-19)); --p_9)
            {
            }
        }
        else
        {
        }
        for (l_1288 = 0; (l_1288 <= 49); l_1288 = safe_add_func_uint32_t_u_u(l_1288, 8))
        {
            int32_t l_1386[8][6][5] = {{{1L,0x13047496L,0x24F15A40L,0x76EFD044L,(-1L)},{0xC87EA5D2L,1L,6L,1L,1L},{0xEAC19E7DL,0x0785FA11L,0x3A6D85AFL,0x76EFD044L,1L},{(-1L),0xA2352078L,0xF0E7E3B8L,0L,0x01E0BE68L},{(-1L),0L,(-1L),0xA2352078L,7L},{0xEAC19E7DL,(-1L),(-2L),0x13047496L,(-9L)}},{{0xC87EA5D2L,0x76EFD044L,(-1L),0xE426A69DL,0x45517AFBL},{1L,0L,0xF0E7E3B8L,0L,0x45517AFBL},{(-1L),(-1L),0x3A6D85AFL,(-2L),(-9L)},{0x80DF98E5L,(-2L),6L,(-10L),7L},{1L,(-1L),0x24F15A40L,0x711F5BC4L,0x01E0BE68L},{(-9L),0L,0x14DE518BL,0x711F5BC4L,1L}},{{0x3AC73DA6L,0x76EFD044L,0x16D10BE2L,(-10L),1L},{(-6L),(-1L),0L,(-2L),(-1L)},{0x3AC73DA6L,0L,0x5927EACFL,0L,0x3AC73DA6L},{(-9L),0xA2352078L,0x5927EACFL,0xE426A69DL,1L},{1L,0x0785FA11L,0L,0x13047496L,0x80DF98E5L},{0x80DF98E5L,1L,0x16D10BE2L,0xA2352078L,1L}},{{(-1L),0x13047496L,0x14DE518BL,0L,0x3AC73DA6L},{1L,0x13047496L,0x24F15A40L,0x76EFD044L,(-1L)},{0xC87EA5D2L,1L,6L,1L,1L},{0xEAC19E7DL,0x0785FA11L,0x3A6D85AFL,0x76EFD044L,1L},{(-1L),0xA2352078L,0xF0E7E3B8L,0L,0x01E0BE68L},{(-1L),0L,(-1L),0x4CDAA604L,0x711F5BC4L}},{{0L,(-9L),0xA35F3599L,0x98FFAF84L,0x76EFD044L},{(-1L),(-3L),0x2666F0A9L,0x60350416L,1L},{(-9L),0L,0xBFC10485L,0L,1L},{0x0785FA11L,(-5L),0L,(-7L),0x76EFD044L},{0xD3F429C3L,(-7L),(-1L),0xB8E2DB93L,0x711F5BC4L},{0xE426A69DL,(-5L),0L,1L,(-2L)}},{{0x76EFD044L,0L,0x588ED3D3L,1L,1L},{0L,(-3L),0xA114170AL,0xB8E2DB93L,0xFB7B8D50L},{0x13047496L,(-9L),1L,(-7L),0x0785FA11L},{0L,0L,1L,0L,0L},{0x76EFD044L,0x4CDAA604L,1L,0x60350416L,(-9L)},{0xE426A69DL,0xF67F32CFL,1L,0x98FFAF84L,0xD3F429C3L}},{{0xD3F429C3L,(-4L),0xA114170AL,0x4CDAA604L,(-9L)},{0x0785FA11L,0x98FFAF84L,0x588ED3D3L,0x48E7C1F4L,0L},{(-9L),0x98FFAF84L,0L,(-3L),0x0785FA11L},{(-1L),(-4L),(-1L),(-1L),0xFB7B8D50L},{0L,0xF67F32CFL,0L,(-3L),1L},{0x115294F3L,0x4CDAA604L,0xBFC10485L,0x48E7C1F4L,(-2L)}},{{0x115294F3L,0L,0x2666F0A9L,0x4CDAA604L,0x711F5BC4L},{0L,(-9L),0xA35F3599L,0x98FFAF84L,0x76EFD044L},{(-1L),(-3L),0x2666F0A9L,0x60350416L,1L},{(-9L),0L,0xBFC10485L,0L,1L},{0x0785FA11L,(-5L),0L,(-7L),0x76EFD044L},{0xD3F429C3L,(-7L),(-1L),0xB8E2DB93L,0x711F5BC4L}}};
            uint16_t l_1401 = 2UL;
            int32_t l_1426 = (-10L);
            int16_t l_1467 = 0x2779L;
            if (((safe_sub_func_int16_t_s_s(l_1386[7][1][4], (safe_unary_minus_func_uint32_t_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((+(l_1386[7][1][4] <= (1L < (p_9 == (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u(g_949[2][4][6], ((((((safe_rshift_func_uint16_t_u_u((g_813[3][0] | (safe_lshift_func_uint8_t_u_u((7L != (p_9 || (p_9 != l_1000[2][6]))), l_1000[0][6]))), 14)) <= 1L) > 6UL) <= l_1401) > l_1288) <= 0L))) ^ p_9), 9L)))))), l_1077)), 6)))))) ^ p_9))
            {
                uint32_t l_1423 = 0xE576516EL;
                int32_t l_1424 = 0x76D7F62DL;
                int32_t l_1431 = 0x4C9012BCL;
                if ((safe_lshift_func_int8_t_s_u((p_9 && 0xDCE4L), (safe_lshift_func_int8_t_s_u(((l_1424 = (safe_sub_func_uint16_t_u_u((g_315 = (l_27 < (((((((g_63 = (!(safe_lshift_func_int8_t_s_s((!((safe_add_func_int8_t_s_s((l_1386[6][5][0] > 0xB5EEL), p_9)) || (p_9 && (0xDC53108EL > (safe_unary_minus_func_int16_t_s((((safe_rshift_func_uint16_t_u_s((l_1179 = (safe_mod_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((0x6B50CB0AL | p_9), g_4)) < 0x1DL), 0xBC2AB98CL))), 9)) == 0x0979578BL) == g_543[0]))))))), l_1359[3])))) == l_1001) == 0UL) && (-10L)) || l_1423) ^ 1UL) < 0xE469L))), g_103))) ^ 0xAFL), 2)))))
                {}
                else
                {
                               uint32_t BGgGgl_1423 = (~(((((~((g_173 << l_1434))) && g_1129) || ((g_974 | l_26) - (l_1401 & (l_1631 ^ l_1467)))) || (~((l_1423 << l_1424))))));
l_1423 = BGgGgl_1423;
                               uint16_t BGgGggl_1956 = (~(((~(((~((g_217 << g_103))) + (~((l_1956 ^ l_1179)))))) + ((((~(g_161)) % (g_538 & g_83)) % (~(l_1377))) || (l_1736 / l_1401)))));
int8_t BGgGghg_83 = (~(((~((~((g_217 % l_1956))))) | (((~(l_1401)) ^ ((((g_83 - (l_1377 % l_1736)) + g_161) % (~(l_1179))) + BGgGggl_1956)) | (g_538 & g_103)))));
uint32_t BGgGgig_103 = (~(((((~((~(l_1401)))) % ((BGgGghg_83 | (~((BGgGggl_1956 && (~((~(g_161)))))))) | ((l_1179 / g_83) && (~((~(g_103))))))) ^ (~(l_1377))) / (((~((l_1956 ^ l_1736))) - g_538) >> g_217))));
                }
                    int32_t l_1493[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1493[i] = 0x26DA5657L;
                    l_1426 = (g_247 = ((((((((l_987 = ((g_247 <= ((safe_mod_func_uint32_t_u_u(((g_83 = (((((0L ^ ((safe_lshift_func_int16_t_s_s((((safe_add_func_int16_t_s_s(1L, (p_9 = (safe_sub_func_uint32_t_u_u((((l_1493[0] & (!(p_9 < ((((0x60781BCDL >= (safe_mod_func_int32_t_s_s((((safe_mod_func_int32_t_s_s((l_1271 || (((l_975[0][0] = (((safe_mod_func_int16_t_s_s(l_1493[1], (~0x8BL))) ^ l_1153) ^ l_1493[0])) < l_1423) & 0xCC6EBE87L)), p_9)) > 0xB5L) | 0UL), p_9))) != p_9) ^ 4294967287UL) <= p_9)))) > l_27) && g_540), l_1423))))) || g_172[4]) ^ l_26), l_1401)) || p_9)) && 0x6EL) != l_1493[0]) >= l_1493[4]) < 0x0103082AL)) & 1L), l_1431)) >= g_63)) != g_540)) | l_1493[3]) == l_1434) ^ 0xF2A5F255L) <= 0xB1BFL) != (-1L)) & l_1493[0]) ^ (-1L)));
            }
            else
            {
            }
        }
    }
    else
    {
        uint16_t l_1806 = 0xCFCDL;
        int32_t l_1813 = 0xA2F6670EL;
        uint32_t l_1954[5][7][5] = {{{18446744073709551615UL,0x2D7E9CF2L,0x99BF8AD8L,0xDE233414L,18446744073709551615UL},{18446744073709551612UL,1UL,8UL,0UL,0xBB8041F1L},{0x214A9EA3L,0xDA497574L,0UL,0x2D7E9CF2L,18446744073709551615UL},{0xA197DEFCL,0UL,0UL,0xA197DEFCL,0xFDB24C69L},{18446744073709551615UL,0x70947AEBL,0xAB58004CL,0x177B7774L,0UL},{18446744073709551613UL,4UL,0xBB8041F1L,0xFDB24C69L,0x5483EC4DL},{0x99BF8AD8L,1UL,18446744073709551609UL,18446744073709551615UL,0x8EDD1C86L}},{{1UL,18446744073709551613UL,1UL,1UL,0x4BE9CFC3L},{18446744073709551615UL,0x70947AEBL,0x107B98D8L,0x5A88219EL,0xAB58004CL},{0xA197DEFCL,18446744073709551612UL,4UL,0UL,18446744073709551615UL},{0x7DF9D7B6L,18446744073709551615UL,0x107B98D8L,18446744073709551612UL,0x107B98D8L},{0xBB8041F1L,0xBB8041F1L,1UL,0UL,0xFDB24C69L},{0UL,0x0E457A2DL,18446744073709551609UL,1UL,0x6F310635L},{18446744073709551609UL,0x5483EC4DL,0xBB8041F1L,8UL,18446744073709551608UL}},{{1UL,0x0E457A2DL,0x99BF8AD8L,0x099BD9B8L,1UL},{18446744073709551615UL,0xBB8041F1L,0UL,0xA197DEFCL,0x1231ACB6L},{2UL,18446744073709551615UL,0UL,0xDE233414L,0UL},{0UL,18446744073709551612UL,18446744073709551608UL,0x5483EC4DL,1UL},{2UL,0x70947AEBL,0UL,0x70947AEBL,2UL},{18446744073709551615UL,18446744073709551613UL,1UL,18446744073709551608UL,0xBB8041F1L},{1UL,1UL,0xAB58004CL,18446744073709551607UL,0x862F632DL}},{{18446744073709551609UL,4UL,0x86D70A80L,18446744073709551613UL,0xBB8041F1L},{0UL,18446744073709551607UL,18446744073709551615UL,0x38C0BC05L,2UL},{0xBB8041F1L,0UL,0xA197DEFCL,0x1231ACB6L,1UL},{0x7DF9D7B6L,0x756BE40BL,0x214A9EA3L,0xDA497574L,0UL},{0xA197DEFCL,1UL,18446744073709551612UL,0x1231ACB6L,0x1231ACB6L},{18446744073709551615UL,0x5A88219EL,18446744073709551615UL,0x38C0BC05L,1UL},{1UL,0UL,0xFDB24C69L,18446744073709551613UL,18446744073709551608UL}},{{0x99BF8AD8L,0xE90C99D2L,2UL,18446744073709551607UL,0x6F310635L},{18446744073709551613UL,0x1231ACB6L,0xFDB24C69L,18446744073709551608UL,0xFDB24C69L},{0x214A9EA3L,0x5478B9A4L,18446744073709551615UL,0x70947AEBL,0x107B98D8L},{1UL,0x4BE9CFC3L,18446744073709551612UL,0x5483EC4DL,18446744073709551615UL},{0x862F632DL,1UL,0x214A9EA3L,0xDE233414L,0xAB58004CL},{8UL,0x4BE9CFC3L,0xA197DEFCL,0xA197DEFCL,0x4BE9CFC3L},{0x6F310635L,0x5478B9A4L,18446744073709551615UL,0x099BD9B8L,0x8EDD1C86L}}};
        uint16_t l_2179 = 0UL;
        uint16_t l_2239[9][7][4] = {{{8UL,0x260EL,0xC0A7L,65526UL},{0xE758L,4UL,65526UL,0UL},{65526UL,0UL,65532UL,0UL},{0x9015L,4UL,1UL,65526UL},{9UL,0x260EL,0UL,0x3A76L},{1UL,0x9015L,8UL,8UL},{1UL,1UL,0UL,8UL}},{{9UL,8UL,1UL,0x260EL},{0x9015L,0xE758L,65532UL,1UL},{65526UL,0xE758L,65526UL,0x260EL},{0xE758L,8UL,0xC0A7L,8UL},{8UL,1UL,0x9015L,8UL},{0x3A76L,0x9015L,0x9015L,0x3A76L},{8UL,0x260EL,0xC0A7L,65526UL}},{{0xE758L,4UL,65526UL,0UL},{65526UL,0UL,65532UL,0UL},{0x9015L,4UL,1UL,65526UL},{9UL,0x260EL,0UL,0x3A76L},{1UL,0x9015L,8UL,8UL},{1UL,1UL,0UL,8UL},{9UL,8UL,1UL,0x260EL}},{{0x9015L,0xE758L,65532UL,1UL},{65526UL,0xE758L,65526UL,0x260EL},{0xE758L,8UL,0xC0A7L,8UL},{8UL,1UL,0x9015L,8UL},{0x3A76L,0x9015L,0x9015L,0x3A76L},{8UL,0x260EL,0xC0A7L,65526UL},{0xE758L,4UL,65526UL,0UL}},{{65526UL,0UL,65532UL,0UL},{0x9015L,4UL,1UL,65526UL},{9UL,0x260EL,0UL,0x3A76L},{1UL,0x9015L,8UL,8UL},{1UL,1UL,0UL,8UL},{9UL,8UL,1UL,0x260EL},{0x9015L,0xE758L,65532UL,1UL}},{{65526UL,0xE758L,65526UL,0x260EL},{0xE758L,8UL,0xC0A7L,8UL},{8UL,1UL,0x9015L,8UL},{0x3A76L,0x9015L,0x9015L,0x3A76L},{8UL,0x260EL,0xC0A7L,65526UL},{0xE758L,4UL,65526UL,0UL},{65526UL,0UL,65532UL,0UL}},{{0x9015L,4UL,1UL,65526UL},{9UL,0x260EL,0UL,0x3A76L},{1UL,0x9015L,8UL,8UL},{1UL,1UL,0UL,0x260EL},{65526UL,0x9015L,0UL,4UL},{0x3A76L,8UL,9UL,0UL},{8UL,8UL,8UL,4UL}},{{8UL,0x9015L,65532UL,0x260EL},{0x260EL,0UL,0x3A76L,0x9015L},{1UL,0x3A76L,0x3A76L,1UL},{0x260EL,4UL,65532UL,8UL},{8UL,0xC0A7L,8UL,0xE758L},{8UL,0xE758L,9UL,0xE758L},{0x3A76L,0xC0A7L,0UL,8UL}},{{65526UL,4UL,0xE758L,1UL},{0UL,0x3A76L,0x9015L,0x9015L},{0UL,0UL,0xE758L,0x260EL},{65526UL,0x9015L,0UL,4UL},{0x3A76L,8UL,9UL,0UL},{8UL,8UL,8UL,4UL},{8UL,0x9015L,65532UL,0x260EL}}};
        int32_t l_1848 = 1L;
            uint8_t l_1955[3];
            uint16_t l_2240 = 0UL;
            uint32_t l_2247[3][1][10] = {{{0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L}},{{0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L}},{{0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L}}};
            l_26 = (l_1848 = ((safe_mod_func_uint16_t_u_u(l_1954[3][0][1], (safe_add_func_int8_t_s_s((((g_813[2][0] = (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((((((safe_rshift_func_uint16_t_u_u(p_9, l_1848)) > (l_975[2][0] = (l_2239[3][2][0] < (g_359[1][6] ^ l_2240)))) & ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((g_247 = ((safe_add_func_uint16_t_u_u((l_2247[1][0][8] <= (g_83 = (safe_mod_func_int32_t_s_s(l_1955[1], p_9)))), p_9)) < 1UL)), 0x9CFB623FL)), l_2179)) <= l_1631)) >= 0x2C3CBB80L) > p_9))), 0xBFL))) <= l_2239[5][4][1]) ^ 0xF637093EL), g_315)))) < p_9));
    }
                    return p_9;
}
static int32_t func_15(uint32_t p_16, int8_t p_17, uint32_t p_18, uint32_t p_19, uint32_t p_20)
{
    uint32_t l_899[7][3] = {{0x87F01EA7L,0x87F01EA7L,0x87F01EA7L},{1UL,6UL,1UL},{0x87F01EA7L,0x87F01EA7L,0x87F01EA7L},{1UL,6UL,1UL},{0x87F01EA7L,0x87F01EA7L,0x87F01EA7L},{1UL,6UL,1UL},{0x87F01EA7L,0x87F01EA7L,0x87F01EA7L}};
    int32_t l_951[9][1] = {{0x65F0C153L},{(-1L)},{0x65F0C153L},{(-1L)},{0x65F0C153L},{(-1L)},{0x65F0C153L},{(-1L)},{0x65F0C153L}};
    uint32_t l_973 = 0xD1EA04B1L;
    l_951[4][0] = ((func_29((0x29L >= (func_35(p_16, g_22, p_19, p_17) <= ((+((0xFFE5L <= (((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((p_16 && p_17) == g_4), p_20)), l_899[6][1])) >= 8L) <= l_899[6][1])) | 8L)) | g_4))), g_4, g_4, g_4, l_899[0][2]) ^ g_4) || 3UL);
    return l_973;
}
static int32_t func_29(uint8_t p_30, uint8_t p_31, uint16_t p_32, uint32_t p_33, int32_t p_34)
{
    return p_31;
}
static int8_t func_35(int8_t p_36, int16_t p_37, int32_t p_38, int32_t p_39)
{
    int32_t l_521 = 0xBC8555D8L;
    int32_t l_522 = 0x4F3B9912L;
    int32_t l_539 = 0x4D9E0D6BL;
    int32_t l_542 = 1L;
    p_39 = func_42(p_36, func_46(g_4), ((l_521 == (((l_522 = 0x88L) && (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(((g_543[1] = (((0xFA1EL || (l_542 = (((safe_sub_func_int8_t_s_s((g_541 = ((g_4 == (((((((safe_unary_minus_func_int8_t_s((g_540 = (safe_sub_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((l_539 = ((safe_mod_func_int8_t_s_s((l_522 = p_37), ((((g_538 = g_4) >= l_521) == p_37) || p_38))) ^ p_39)), 4294967294UL)) ^ 1L), g_4))))) > l_521) & 0x37L) && l_522) && 65535UL) & 1UL) & p_37)) ^ p_38)), l_521)) <= (-9L)) != p_37))) & 4294967295UL) < g_4)) || 0x1DL), p_37)), 5)), g_4))) > g_4)) ^ l_521));
                    return g_359[9][0];
}
static int32_t func_42(int16_t p_43, int32_t p_44, uint32_t p_45)
{
    return p_45;
}
static int32_t func_46(int8_t p_47)
{
    uint32_t l_62 = 4294967295UL;
    int32_t l_309 = 0x5E625162L;
    int8_t l_310 = 0xDEL;
    l_309 = func_48((safe_lshift_func_int8_t_s_u((((((((p_47 | p_47) <= ((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(0L, func_57(l_62, p_47, l_62, ((g_63 = (p_47 & g_4)) | (safe_rshift_func_uint8_t_u_s(g_4, 7)))))), 2)) >= 0x40L)) >= p_47) > (-1L)) | g_4) && l_62) <= g_4), g_4)), p_47);
    if ((safe_rshift_func_uint8_t_u_u(((g_315 = (safe_add_func_uint8_t_u_u(p_47, g_83))) >= (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(l_309, (safe_mod_func_uint16_t_u_u((l_309 <= 0xE3L), l_309)))), (safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((-1L), (safe_add_func_uint8_t_u_u((0xD127F73BL > (l_310 <= 5UL)), g_22)))), p_47))))), l_309)))
    {
            return g_83;
    }
    else
    {
    }
}
static int32_t func_48(uint32_t p_49, int16_t p_50)
{
    uint8_t l_79[5][2][1] = {{{0xCDL},{0x09L}},{{0xCDL},{0x09L}},{{0xCDL},{0x09L}},{{0xCDL},{0x09L}},{{0xCDL},{0x09L}}};
    int32_t l_80 = 0x7FAA682DL;
    int32_t l_88 = 0x3CEB4B62L;
    int32_t l_117 = 0x9AA43C15L;
    int32_t l_268 = (-9L);
    for (; (g_63 <= 0); g_63 += 1)
    {
        uint8_t l_87 = 1UL;
        int32_t l_104[6][9] = {{0xAA260870L,(-1L),(-1L),0xAA260870L,(-1L),(-1L),0xAA260870L,0x21B11E67L,0x21B11E67L},{0xB10BEF9BL,0L,0x691EA77CL,0xB10BEF9BL,0x691EA77CL,0L,0xB10BEF9BL,0L,0L},{0xAA260870L,(-1L),(-1L),0xAA260870L,(-1L),(-1L),0xAA260870L,0x21B11E67L,0x21B11E67L},{0xB10BEF9BL,0L,0x691EA77CL,0xB10BEF9BL,0x691EA77CL,(-6L),0L,(-9L),(-9L)},{0x21B11E67L,0x1F4E5A65L,8L,0x21B11E67L,8L,0x1F4E5A65L,0x21B11E67L,0x37DDF4F0L,0x37DDF4F0L},{0L,(-6L),(-1L),0L,(-1L),(-6L),0L,(-9L),(-9L)}};
        int32_t l_262 = 0xC8414168L;
        int32_t l_263[3][2];
        int16_t l_306 = 1L;
        int i, j;
        for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
                {}
        for (; (l_80 >= 0); l_80 -= 1)
        {
            int32_t l_136 = 0x05D4F871L;
            if (p_50)
                    {}
                                                   int32_t BJgJgIg_115 = (~((((~((((g_103 & (l_268 || (((~(g_247)) || g_83) ^ l_87))) && (~((~(g_22))))) | (~((~(g_115))))))) ^ (~(l_88))) + (g_217 ^ l_136))));
int32_t BJgJgJl_136 = (~((((g_103 | ((~(l_136)) | g_217)) + ((BJgJgIg_115 & (l_268 / l_87)) >> ((~(l_88)) || (g_22 & g_247)))) | ((~(g_115)) | g_83))));
int32_t BJgJgKg_247 = (~((((~((l_136 ^ (g_22 << l_88)))) / ((~(g_115)) - g_217)) && (~((~(((BJgJgIg_115 / (~(BJgJgJl_136))) | (~((~(((l_268 + (~(((~(g_103)) & l_87)))) + (g_247 | g_83))))))))))))));
uint32_t BJgJgLg_103 = (~((g_22 % (((~((~(((~(g_247)) - BJgJgIg_115))))) + (~((~(l_136))))) | (((((l_87 >> l_88) || ((~(g_83)) / g_217)) | (~(l_268))) >> (~(BJgJgKg_247))) | ((~((~(g_115)))) && ((~(BJgJgJl_136)) | g_103)))))));
if((l_88<=1)){}
g_103 = BJgJgLg_103;
        }
        if (((g_188 <= 0L) ^ 0xA2L))
        {
        }
        else
        {
        }
    }
    return l_80;
}
static int8_t func_57(int16_t p_58, uint32_t p_59, uint32_t p_60, int32_t p_61)
{
    int32_t l_75[2][3][6] = {{{(-2L),(-2L),0L,0xA11B98B5L,3L,(-1L)},{1L,0xD8A5C089L,0L,0L,0x473F1902L,0L},{0L,1L,0L,4L,(-2L),(-1L)}},{{0x2A83C5EEL,4L,0L,0xAF0CFC20L,7L,7L},{0xAF0CFC20L,7L,7L,0xAF0CFC20L,0L,4L},{0x2A83C5EEL,(-1L),(-2L),0xD8A5C089L,(-1L),0xA11B98B5L}}};
    for (g_22 = 1; (g_22 >= 0); g_22 -= 1)
    return l_75[0][0][0];
}
int main (int argc, char* argv[])
{
    func_1();
}

struct S0 {
   int      f6;
};
 struct S0 g_20 ;
  char func_65()
{
if (g_20.f6)
        goto lbl_93;
func_65();
    return 0;
lbl_93:
g_20.f6 += 1;
func_65();
    return 0;
}
int main ()
{
}

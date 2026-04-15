
public class Test {

    public static final int N = 400;

    public static volatile float fFld=2.1022F;
    public static int iFld6;
    public static int iFld18;
    public static int iFld21=1;
    public static int iArrFld1[]=new int[N];
    public static void vMeth5(int i174, int i175, int i176, int i177, int i178) {

        long l16;
        int i179=7553, i180=2, i181, i182=200, i183, i184=37553, i185, i186;
        for (l16 = 5; l16 < 171;) {
            i179 = System.identityHashCode(i175);
			i175 *= i179;
            Test.fFld *= i175;
			break;
        }
    }

    public static void main(String[] strArr) {

        int i795, i796 = 44720, i797 = 7, i798, i799 = 140, i800 = 12, i801 = 170, i802,
				i803 = 8890, i804 = 11, i805, i806 = 83;
		i795 = 1;
		int i676, i677 = 2, i678 = 254, i679, i680, i681 = 226, i682 = 11351, i683;
		long meth_res_iMeth29 = i678;
		vMeth5(i799,
				Test.iFld21 -= Test.iFld6, Test.iFld18,
				Test.iArrFld1[i795],
				(int) meth_res_iMeth29);
		FuzzerUtils.out.println(Test.fFld);
    }
}


























































































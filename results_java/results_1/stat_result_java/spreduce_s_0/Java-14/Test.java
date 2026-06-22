
public class Test {

    public static byte byFld1;
    public static int iFld6;
    public static float fFld1=1.220F;
    public static boolean bFld3=false;
    public static long vMeth2_check_sum = 0;
    public static void vMeth(int i3, float f) {

        int i790=162, i791, i792=12, i793=50045, i795=38328, i796=7, i797, i798, i799;
        for (; 252 > i792; ++i792) {
            int i7 = 46699, i8 = 72, i9, i775 = 9, i776, i777 = 3, i778 = 74, i779 = 8600, i780 = 31313,
					i781 = 1, i782 = 80, i783 = 7, i784;
			i9 = 1;
			int i764 = 12, i765, i766 = 52333, i767, i768, i769, i770 = 1636,
					i771 = 46164, i772, i773, i774;
			long meth_res_iMeth = System.identityHashCode(i764);
			Test.iFld6 = (int) meth_res_iMeth;
			if (false)
				break;
			if (false)
				break;
			long meth_res = Test.iFld6;
			if (Test.bFld3 = Test.fFld1 <= meth_res)
				break;
			vMeth2_check_sum += i9;
        }
    }

    public static void main(String[] strArr) {

        vMeth(Test.byFld1, 32713);
		FuzzerUtils.out.println(vMeth2_check_sum);
    }
}
























































































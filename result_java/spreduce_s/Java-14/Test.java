
public class Test {

    public static int iFld6;
    public static float fFld1=1.220F;
    public static boolean bFld3=false;
    public static long vMeth2_check_sum = 0;
    public static void vMeth2() {

        int i7, i8=72, i9=126, i775, i776, i777=3, i778=74, i779=8600, i780=31313, i781=1, i782=80,
            i783=7, i784;
        for (i7 = 121; i7 > 4; i7--) {
            int i764 = 12, i765 = 13, i766, i767 = 47065, i768 = 8789, i769, i770,
					i771, i772, i773, i774;
			long meth_res_iMeth = System.identityHashCode(i764);
			Test.iFld6 = (int) meth_res_iMeth;
			long meth_res = Test.iFld6;
			if (Test.bFld3 = Test.fFld1 <= meth_res)
				break;
			vMeth2_check_sum += i7;
        }
    }

    public void mainTest(String[] strArr1) {

        vMeth2();
		FuzzerUtils.out.println(vMeth2_check_sum);
    }
    public static void main(String[] strArr) {

        Test _instance = new Test();
		_instance.mainTest(strArr);
    }
}
























































































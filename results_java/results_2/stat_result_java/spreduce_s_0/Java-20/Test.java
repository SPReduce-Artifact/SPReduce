
public class Test {

    public static double dFld;
    public static int iFld5;
    public static volatile int iFld6;
    public static long lFld6;
    public static long bMeth3_check_sum = 0;
    public static boolean bMeth3(long l31, int i236, int i237, int i238) {

        int i239=54, i240=13, i241=4, i242, i243=204, i244, i245=10, i246=42979, i247=3, i248, i249,
            i250=37157, i251=59908;
        for (; i239 < 238; i239++) {
            if (false)
				break;
			if (false)
				break;
			if (false)
				break;
			if (false)
				break;
			if (false)
				break;
			l31 += Test.dFld;
        }
        long meth_res = l31;
        bMeth3_check_sum += meth_res;
        return false;
    }

    public static int iMeth(int i) {

        float f, f1=83.326F;
        for (f = 16; f < 346; ++f) {
            if (false) break;
            int i446 = 10, i447, i448, i449 = 4, i450 = 37216, iArr9[];
			if (false)
				break;
			Test.iFld6 += System.identityHashCode(i449);
			long meth_res_iMeth15 = i450;
			int i517 = 23, i518 = 9, i519 = 10, i520, i521, i522 = 90, i523 = 3, i524 = 15416;
			if (false)
				break;
			if (false)
				break;
			Test.dFld += Test.iFld6;
			long meth_res_iMeth18 = i523;
			if (bMeth3(Test.lFld6, (int)Test.lFld6, (int) meth_res_iMeth15,
                (int) meth_res_iMeth18))
                continue;
        }
        return 0;
    }

    public static void main(String[] strArr) {

        iMeth(Test.iFld5);
		FuzzerUtils.out.println(bMeth3_check_sum);
    }
}

























































































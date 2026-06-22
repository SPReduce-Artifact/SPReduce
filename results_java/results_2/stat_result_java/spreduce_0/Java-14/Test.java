
public class Test {

    public static long lFld4=7151091063736346982L;
    public static long vMeth2_check_sum = 0;
    public static int iMeth(long l) {

        int i764=12, i765=13, i766, i767, i768=8789, i769, i770, i771, i772,
            i773=63628, i774;
        long meth_res = System.identityHashCode(i764);
        return (int)meth_res;
    }

    public static void vMeth2() {

        int i7, i8, i9, i775=9, i776, i777=3, i778=74, i779=8600, i780=31313, i781=1, i782=80,
            i783=7, i784;
        i8 = iMeth(Test.lFld4);
		vMeth2_check_sum += i8;
    }

    public static void vMeth(int i3, float f) {

        int i790=162, i791, i792, i793=50045, i795=38328, i796=7, i797, i798, i799;
        for (i792 = 11; 252 > i792;) {
            vMeth2();
            break;
        }
    }

    public static void main(String[] strArr) {

        int i = 9, i1, i2 = 32282;
		vMeth(i, 32713);
		FuzzerUtils.out.println(vMeth2_check_sum);
    }
}
























































































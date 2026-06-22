
public class Test {

    public static long iMeth_check_sum = 0;
    public static void main(String[] strArr) {

        int i764 = 12, i765 = 13, i766, i767 = 47065, i768, i769, i770 = 1636, i771,
				i772, i773, i774 = 30806;
		long meth_res = System.identityHashCode(i764);
		iMeth_check_sum += meth_res;
		FuzzerUtils.out.println(iMeth_check_sum);
    }
}
























































































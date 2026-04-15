
public class Test {

    public static final int N = 400;

    public static int iArrFld3[]=new int[N];
    public static void main(String[] strArr) {

        long l56;
		for (l56 = 1; l56 < 301; ++l56) {
			if (false)
				break;
			Test.iArrFld3[(int) l56] += Test.iArrFld3.hashCode();
		}
		FuzzerUtils.out.println(FuzzerUtils.checkSum(Test.iArrFld3));
    }
}
























































































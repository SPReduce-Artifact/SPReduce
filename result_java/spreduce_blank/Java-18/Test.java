
public class Test {

    public static long vMeth20_check_sum = 0;
    public void mainTest(String[] strArr1) {

        int i735 = 9, i736 = 8, i737 = 12, i738 = 178;
		i738 += hashCode();
		vMeth20_check_sum += i738;
		FuzzerUtils.out.println(vMeth20_check_sum);
    }
    public static void main(String[] strArr) {

        Test _instance = new Test();
		_instance.mainTest(strArr);
    }
}
























































































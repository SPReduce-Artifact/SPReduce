import checksum.check_sum;





public class TestByteArrays
{
    public static long SEED = 0;
    public static int my_check_sum = 0;
    
    static {
        TestByteArrays.SEED = System.nanoTime();
    }
    
    public static void main(final String[] array) throws Exception {
        final long seed2 = TestByteArrays.SEED;
        TestByteArrays.my_check_sum = check_sum.run(TestByteArrays.my_check_sum, seed2);
        System.out.println(TestByteArrays.my_check_sum);
    }
}

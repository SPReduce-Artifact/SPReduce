import checksum.check_sum;





public class TestElasticTLAB
{
    public static long SEED;
    public static int my_check_sum;
    
    static {
        TestElasticTLAB.SEED = System.nanoTime();
    }
    
    public static void main(final String[] array) throws Exception {
        final long seed2 = TestElasticTLAB.SEED;
        TestElasticTLAB.my_check_sum = check_sum.run(TestElasticTLAB.my_check_sum, seed2);
        System.out.println(TestElasticTLAB.my_check_sum);
    }
}

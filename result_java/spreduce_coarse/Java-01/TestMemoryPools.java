import java.util.Iterator;
import java.util.List;
import java.lang.management.MemoryManagerMXBean;
import compiler.codegen.TestByteDoubleVect;
import compiler.c2.cr6340864.TestByteVect;
import compiler.codegen.TestShortVect;
import java.lang.management.ManagementFactory;
import checksum.check_sum;

// 
// Decompiled by Procyon v0.6.0
// 

public class TestMemoryPools
{
    public static int my_check_sum = 0;
    
    public static void main(final String[] array) throws Exception {
        final List<MemoryManagerMXBean> memoryManagerMXBeans = ManagementFactory.getMemoryManagerMXBeans();
        final Iterator<MemoryManagerMXBean> iterator = memoryManagerMXBeans.iterator();
        final String[] memoryPoolNames = iterator.next().getMemoryPoolNames();
		for (int length = memoryPoolNames.length,
				i = 0; i < length; ++i, TestMemoryPools.my_check_sum = check_sum.run(TestMemoryPools.my_check_sum, i)) {
		}
		System.out.println(TestMemoryPools.my_check_sum);
    }
}

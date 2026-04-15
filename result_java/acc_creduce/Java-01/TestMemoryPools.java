import java.util.Iterator;
import java.util.List;
import java.lang.management.MemoryManagerMXBean;
import java.lang.management.ManagementFactory;
class TestMemoryPools {
  public static void main(String[] a) {
    List b = ManagementFactory.getMemoryManagerMXBeans();
    Iterator<MemoryManagerMXBean> iterator = b.iterator();
    String[] c = iterator.next().getMemoryPoolNames();
    for (int length = c.length, d = 0; d < length; ++d)
      System.out.println();
  }
}

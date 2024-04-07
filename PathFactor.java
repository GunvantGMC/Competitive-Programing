import java.util.ArrayList;
import java.util.Scanner;

class PathFactor {

    public static long pthFactor(long n, long p) {
        long i = 1;
        ArrayList<Long> arr = new ArrayList<Long>();
        while (true) {
            if (i > n)
                return 0;
            if (n % i == 0)
                arr.add(i);
            if (arr.size() == p)
                return arr.get((int) p - 1);
            i += 1;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println(pthFactor(sc.nextLong(), sc.nextLong()));
        sc.close();
    }
}
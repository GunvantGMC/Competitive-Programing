import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class ClosertLargestNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();

        StringBuilder str = new StringBuilder(String.valueOf(N));
        int l = str.length();
        List<Integer> arr = new ArrayList<Integer>();
        // Scanner scanner = new Scanner(System.in);
        // int N = scanner.nextInt();
        // String S = scanner.next();
        int count = 1;
        System.out.println(str.substring(0, 1));
        for (int j = 0; j < l - count; j++) {
            for (int i = 0; i < l; i++) {
                String substring = str.substring(i, i + count);
                arr.add(Integer.parseInt(substring));
            }
            count++;
        }
        for (Integer integer : arr) {
            System.out.println(integer);
        }
        sc.close();
    }
}

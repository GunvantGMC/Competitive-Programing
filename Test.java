import java.util.Arrays;
import java.util.Scanner;

public class Test {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();
        int y = sc.nextInt();

        int[] A = new int[x];
        for (int i = 0; i < x; i++) {
            A[i] = sc.nextInt();
        }
        sc.close();
        Arrays.sort(A);
        int t = 0;
        int max = 0;
        for (int i = 0; i < x; i++) {
            int tempV = A[i];
            t = 0;
            for (int j = i; j < x; j++) {
                if (tempV - A[j] >= y || A[j] - tempV >= y) {
                    t++;
                    tempV = A[j];
                }
            }
            max = Math.max(max, t);
        }
        System.out.println(max + 1);
    }
}

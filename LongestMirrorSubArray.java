import java.util.Scanner;

public class LongestMirrorSubArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] arr = new int[N];
        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
        }

        if (arr[0] != arr[1]) {
            System.out.println(2);

        } else {

            int max = longSubArr(arr, N);
            System.out.println(max);
        }
        sc.close();
    }

    public static int longSubArr(int[] arr, int N) {
        int maxL = 0;

        for (int i = 0; i < N; i++) {
            int count0 = 0;
            int count1 = 0;
            for (int j = i; j < N; j++) {
                if (arr[j] == 0) {
                    count0++;
                } else if (arr[j] == 1) {
                    count1++;
                }
                if (count0 == count1 && (arr[i] == 0 || arr[i] == 1)) {
                    maxL = Math.max(maxL, j - i + 1);
                }
            }
        }
        return maxL;
    }
}

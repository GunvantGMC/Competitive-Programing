import java.util.Scanner;

public class NegativeTempCounter {

    static int temperatureCount(int intArr[]) {
        int cnt = 0;
        for (int t : intArr) {
            if (t < 0)
                cnt++;
        }
        return cnt;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int tempArr[] = new int[n];
        for (int i = 0; i < n; i++)
            tempArr[i] = sc.nextInt();

        System.out.println(temperatureCount(tempArr));
        sc.close();

    }
}

import java.util.Scanner;

public class StringRepetition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        char strArr[] = str.toCharArray();
        StringBuilder ts = new StringBuilder(strArr[0] + "");
        int cnt = 1;
        for (int i = 1; i < strArr.length; i++) {
            if (ts.charAt(ts.length() - 1) == strArr[i]) {
                if (cnt >= 2)
                    continue;
                cnt++;
                ts.append(strArr[i]);
            } else {
                cnt = 1;
                ts.append(strArr[i]);
            }
        }
        System.out.println(ts);
        sc.close();
    }
}


import java.util.Scanner;

public class MerrySubStrOfString {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        String S = scanner.next();
        int count = 0;
        for (int i = 0; i < N - 3; i++) {
            String substring = S.substring(i, i + 4);
            if (isMerry(substring)) {
                count++;
            }
        }

        System.out.println(count);
        scanner.close();
    }

    private static boolean isMerry(String substring) {
        int[] freq = new int[26];
        for (char c : substring.toCharArray()) {
            freq[c - 'a']++;
            if (freq[c - 'a'] > 1) {
                return false;
            }
        }
        return true;
    }
}
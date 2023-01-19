import java.util.Scanner;

public class string_permutation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next();
        String s2 = sc.next();
        System.out.println(isPermutation(s1, s2));
    }

    private static String isPermutation(String string1, String string2) {
        int arr1[] = new int[26];
        int arr2[] = new int[26];
        for (char i : string1.toCharArray()) {
            char v = Character.toUpperCase(i);
            arr1[v - 65]++;
        }
        for (char i : string2.toCharArray()) {
            char v = Character.toUpperCase(i);
            arr2[v - 65]++;
        }
        int flag = 0;
        for (int i = 0; i < arr1.length; i++) {
            if (arr1[i] != arr2[i]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            return "yes";
        else
            return "no";
    }

}
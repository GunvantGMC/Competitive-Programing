import java.util.*;

public class LongestSubString {

    public StringBuilder findLongestSubString(StringBuilder input) {
        String stng = input.toString();
        int l = stng.length();
        String f_str = "";
        String tmp = "";
        for (int i = 0; i < l; i++) {
            tmp += stng.charAt(i);
            int t_len = tmp.length();
            if (i < l / 2 && tmp.equals(stng.substring(l - t_len, l)))
                f_str = tmp;
        }

        return new StringBuilder(f_str);
    }

    public static void main(String[] args) {
        LongestSubString m = new LongestSubString();
        Scanner sc = new Scanner(System.in);
        String str1 = "";
        try {
            str1 = sc.nextLine();
            if (str1 == null || str1.isEmpty()) {
                System.out.println("Give proper input");
            }

            StringBuilder sBuilder = m.findLongestSubString(new StringBuilder(str1));

            String res = sBuilder.toString();
            if (res == null || res.isEmpty() || res.length() == 1) {
                System.out.println("Longest substring is not present in the given StringBuilder");
            } else {
                System.out.println(res);
            }

            sc.close();
        } catch (Exception e) {
            System.out.println("Give proper input");
        }

    }
}

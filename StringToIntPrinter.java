import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

class StringToIntPrinter {

    // static int getInt(String s) {
    // int n = 0;
    // switch (s) {
    // case "one":
    // n = 1;
    // break;
    // case "two":
    // n = 2;
    // break;
    // case "three":
    // n = 3;
    // break;
    // case "four":
    // n = 4;
    // break;
    // case "five":
    // n = 5;
    // break;
    // case "six":
    // n = 6;
    // break;
    // case "seven":
    // n = 7;
    // break;
    // case "eight":
    // n = 8;
    // break;
    // case "nine":
    // n = 9;
    // break;
    // case "zero":
    // n = 0;
    // break;

    // }
    // return n;
    // }

    static int getInt(String s) {
        String str = "zero one two three four five six seven eight nine";
        ArrayList<String> strList = new ArrayList<String>(
                Arrays.asList(str.split(" ")));
        return strList.indexOf(s);
    }

    public static String getPhoneNumber(String str) {
        String arr[] = str.split(" ");
        String finRes = "";
        for (int i = 0; i < arr.length; i++) {
            if (arr[i].equals("double")) {
                finRes += getInt(arr[++i]) * 11;
            } else if (arr[i].equals("triple")) {
                finRes += getInt(arr[++i]) * 111;
            } else {
                finRes += getInt(arr[i]);
            }
        }
        return finRes;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        System.out.println(getPhoneNumber(str));
    }
}
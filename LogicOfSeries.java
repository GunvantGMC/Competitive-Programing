import java.util.ArrayList;
import java.util.Scanner;

class LogicOfSeries {

    public static void getSeries(int no) {
        ArrayList<Integer> arr = new ArrayList<>();
        arr.add(1);
        for (int i = 1; i < no; i++) {
            if (i % 2 == 1) {
                arr.add(arr.get(i - 1) + 1);
            } else {
                arr.add(arr.get(i - 1) * arr.get(i - 1));
            }
        }

        for (Integer integer : arr) {
            System.out.print(integer + " ");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int no = sc.nextInt();
        getSeries(no);
        sc.close();
    }
}
import java.util.Scanner;

class PossibleSquareCount {

    public static int getNoOfSquares(int n) {
        int count = 0;
        for (int i = 1; i <= n; i++) {
            count += i * i;
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int no = sc.nextInt();
        sc.close();
        System.out.println(getNoOfSquares(no));
    }
}
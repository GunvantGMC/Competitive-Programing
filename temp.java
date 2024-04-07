import java.util.*;
import java.lang.Math;

public class temp {
    public static void main(String[] args) {
        // int x = 12;
        // int y = 3;
        // int[] A = { 1, 5, 6, 1, 8, 3, 12, 2, 13, 7, 9, 11 };

        int x = 10;
        int y = 4;
        int[] A = { 1, 5, 6, 1, 8, 3, 12, 2, 13, 7 };
        ArrayList<Integer> tmp2 = new ArrayList<Integer>();
        int p = 0;
        for (int i = 0; i < x; i++) {

            p = 0;
            for (int j = 0; j < x; j++) {
                if (Math.abs(A[i] - A[j]) <= y) {
                    // tmp.add(Math.abs(A[i] - A[j]));
                    if (j != i)
                        p++;
                }

            }
            tmp2.add(p);
        }
        System.out.println(Collections.max(tmp2));

    }
}

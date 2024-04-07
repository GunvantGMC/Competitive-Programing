import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

//  l = []
//     for i in range(0,n):
//         val = A[i]
//         for j in range(i,n):
//             if(val < A[j]):
//                 val = A[j]
//         if(val not in l):
//             l.append(val)
//     return l

public class MVPInArray {

    public static List<Integer> findMVP(int n, List<Integer> A) {
        List<Integer> l = new ArrayList<Integer>();

        for (int i = 0; i < n; i++) {
            Integer val = A.get(i);
            for (int j = i; j < n; j++) {
                if (val < A.get(j)) {
                    val = A.get(j);
                }
            }
            if (!l.contains(val)) {
                l.add(val);
            }
        }
        return l;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Integer> l = new ArrayList<Integer>();
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            l.add(sc.nextInt());
        }
        List<Integer> k = findMVP(n, l);
        for (Integer integer : k) {
            System.out.println(integer);
        }
        sc.close();
    }
}

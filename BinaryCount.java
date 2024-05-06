import java.util.*;

class BinaryCount {
    static void buildSubSeq(String str, int n, int index,
            String curr, Set<String> visited) {
        // base case
        if (index == n) {
            return;
        }

        for (int i = index + 1; i < n; i++) {
            curr += str.charAt(i);
            String prefixedCurr = prefixWithZero(curr, n - curr.length());
            if (visited.add(prefixedCurr)) {
                buildSubSeq(str, n, i, curr, visited);
            }

            // backtracking
            curr = curr.substring(0, curr.length() - 1);
        }
    }

    static Set<String> buildSubSeq(String str) {
        int index = -1;
        String curr = "";
        Set<String> visited = new HashSet<>();

        buildSubSeq(str, str.length(), index, curr, visited);
        return visited;
    }

    static String prefixWithZero(String str, int n) {
        StringBuilder sb = new StringBuilder(str);
        for (int i = 0; i < n; i++) {
            sb.insert(0, 0);
        }
        return sb.toString();
    }

    // Driver code
    public static void main(String[] args) {
        String str = "010011";
        System.out.println(buildSubSeq(str).size());
    }
}

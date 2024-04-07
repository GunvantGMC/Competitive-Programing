import java.util.*;

public class FavouriteTicket {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();

        Queue<Integer> queue = new LinkedList<>();
        Queue<Integer> queueBackup = new LinkedList<>();

        for (int i = 0; i < N; i++) {
            int favouriteSeat = scanner.nextInt();
            queue.offer(favouriteSeat);
        }
        // int[] allottedSeats = new int[N];
        List<Integer> allottedSeats = new ArrayList<Integer>();

        for (int i = 0; i < N; i++) {
            System.out.println("I : " + i);
            int seat = queue.poll();

            if (allottedSeats.contains(seat)) {
                System.out.println("----");
                queue.offer(seat);
                N++;
            } else {
                allottedSeats.add(seat);
                System.out.println("++++");
            }
            System.out.println(seat + " = " + queue.size());
        }

        System.out.println("END");
        // for (int seat : queueBackup) {
        // System.out.println(seat);
        // }
    }
}
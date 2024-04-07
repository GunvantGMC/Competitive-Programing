import java.util.Arrays;
import java.util.List;

public class AshTemp<E> {

public static <E> void append(List<E> list) {

if (list instance of ArrayList<String>) { for (E arr: list) {

System.out.println(arr); }}}

    public static void main(String[] args) {

        AshTemp.append(Arrays.asList("one", "two"));
    }
}
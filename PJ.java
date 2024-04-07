/**
 * Test
 */
class Test {

    protected int x, y;
}

public class PJ {
    public static void main(String[] args) {
        Test t = new Test();
        int k = 10;
        System.out.println(k & k);
        System.out.println(t.x + "==" + t.y);

    }

    static int f() {
        int x = 3;
        int y = 5;
        int z = 10;
        ;
        return (++z + y - y + z + x++);
    }
}

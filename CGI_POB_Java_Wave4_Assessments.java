import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

class CarWala {

    Map<String, Integer> carList = new HashMap<String, Integer>();

    CarWala() {
        carList.put("Abc", 100000);
        carList.put("Xyz", 200000);
        carList.put("Pqr", 300000);
        carList.put("Qwe", 1000000);
        carList.put("Lmn", 100000);
        carList.put("Rst", 100000);
        carList.put("Jkl", 100000);
        carList.put("Ghi", 600000);
        carList.put("Def", 2000000);
        carList.put("Vwx", 800000);

    }

    public void listNames(Character ch) {
        List<String> carNames = new ArrayList<String>();
        if (ch == null || ch.toString().isEmpty()) {
            System.out.print("\nGiven Character Is Empty");
            return;
        }
        for (String key : carList.keySet()) {
            if (key.charAt(0) == ch) {
                carNames.add(key);
            }
        }
        if (!carNames.isEmpty()) {
            System.out.print("\nCar Names Starting With " + ch + " : ");
            for (String name : carNames) {
                System.out.print(name + " ");
            }
        } else {
            System.out.print("\nCar Names Not Found Starting With " + ch);
        }
    }

    public void listPrice(Integer recPrice) {
        List<String> carNames = new ArrayList<String>();
        if (recPrice == null) {
            System.out.print("\nGiven Price Is Null");
            return;
        }
        for (String key : carList.keySet()) {
            Integer price = carList.get(key);

            if (price > recPrice) {
                carNames.add(key);
            }
        }
        if (!carNames.isEmpty()) {
            System.out.print("\nCar Names Where Price Is Above Than " + recPrice + " : ");
            for (String name : carNames) {
                System.out.print(name + " ");
            }
        } else {
            System.out.print("\nNo Car Found Where Price Is Above Than " + recPrice);
        }
    }

    public void applyDiscount() {
        Map<String, Integer> tempCarListMap = new HashMap<String, Integer>();

        for (String key : carList.keySet()) {
            Integer price = carList.get(key);

            if (price > 500000) {
                tempCarListMap.put(key, (int) (price * 0.8));
            }

        }
        if (!tempCarListMap.isEmpty()) {
            System.out.println("\nCar Names Where Price Is Above Than 500000 : ");
            for (String name : tempCarListMap.keySet()) {
                System.out.println(name + " " + tempCarListMap.get(name).toString());
            }
        } else {
            System.out.print("\nNo Car Found Where Price Is Above Than 500000");
        }
    }
}

public class CGI_POB_Java_Wave4_Assessments {

    public static void main(String[] args) {
        CarWala carWala = new CarWala();

        carWala.listNames('L');
        carWala.listNames('M');
        carWala.listPrice(600000);
        carWala.listPrice(4000000);
        carWala.applyDiscount();

    }
}

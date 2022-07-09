import java.io.IOException;
import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        int inputs = Integer.valueOf(sc.nextLine());
        for (int i = 0; i < inputs; i++) {
            String player = sc.nextLine();
            String multiply = sc.nextLine();
            List<Double> array = getArray(sc.nextLine());
            Double total = array.stream().reduce(0.0,Double::sum) * Double.parseDouble(multiply);
            BigDecimal totalBd = BigDecimal.valueOf(total).setScale(2,RoundingMode.HALF_DOWN);
            System.out.println(player + " " + totalBd.toString());

        }

        sc.close();

    }

    private static List<Double> getArray(String line) {
        List<Double> list = new ArrayList<>();
        String[] splited = line.split(" ");
        for (int i = 0; i < splited.length; i++) {
            list.add(Double.valueOf(splited[i]));
        }
        Collections.sort(list);
        List<Double> subList = list.subList(1, 6);

        return subList;
    }
}
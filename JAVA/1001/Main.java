import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Integer> list = new ArrayList<>();

        Integer a,b;
        a = sc.nextInt();
        b = sc.nextInt();

        list.add(a, b);

        Integer sum = list.stream().reduce(a, Integer::sum);

        
        System.out.println("X = "+ sum);
    }

}
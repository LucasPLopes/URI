import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import static java.lang.System.out;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Double r;
        r = sc.nextDouble();
        
        out.printf("A=%.4f\n", area(r));
    }
    

    public static double area(double r) {
        final double PI = 3.14150;
        return PI * r * r;
    }

}
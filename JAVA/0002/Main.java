import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double r, a;
        r = sc.nextDouble();
        a = area(r);

        System.out.printf("A=%.4f\n", a);
    }

    public static double area(double r) {
        final double PI = 3.14150;
        return PI * r * r;
    }

}
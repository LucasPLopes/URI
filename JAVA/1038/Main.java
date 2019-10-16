import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        double A, B, C, R1, R2;
        Scanner sc = new Scanner(System.in);
        A = sc.nextDouble();
        B = sc.nextDouble();
        C = sc.nextDouble();

        if ((A == 0) || (((B * B) - (4 * A * C)) < 0)) {
            System.out.print("Impossivel calcular\n");
        } else {
            R1 = r1(A, B, C);
            R2 = r2(A, B, C);

            System.out.printf("R1 = %.5f\n", R1);
            System.out.printf("R2 = %.5f\n", R2);
        }

    }

    public static double r2(double A, double B, double C) {
        return ((-B - Math.sqrt(((B * B) - (4 * A * C)))) / (2 * A));
    }

    public static double r1(double A, double B, double C) {
        return ((-B + Math.sqrt(((B * B) - (4 * A * C)))) / (2 * A));
    }
}

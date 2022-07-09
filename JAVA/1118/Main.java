import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner lt = new Scanner(System.in);
        double N1, N2, condicaoParada = 1;

        while (condicaoParada ==1) {
            N1 = lt.nextDouble();
            while (N1 > 10 || N1 < 0) {
                System.out.println("nota invalida");
                N1 = lt.nextDouble();
            }

            N2 = lt.nextDouble();
            while (N2 > 10 || N2 < 0) {
                System.out.println("nota invalida");
                N2 = lt.nextDouble();
            }

            double media = (N1 + N2) / 2;
            System.out.println(String.format("media = %.2f", media));

            System.out.println("novo calculo (1-sim 2-nao)");
            condicaoParada = lt.nextInt();
            while (condicaoParada != 1 && condicaoParada != 2) {
                System.out.println("novo calculo (1-sim 2-nao)");
                condicaoParada = lt.nextInt();
            }
        }
    }

}
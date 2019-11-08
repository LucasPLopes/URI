import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

        float N1, N2, N3, N4, media, recalmedia;
        Scanner in = new Scanner(System.in);
        N1 = in.nextFloat();
        N2 = in.nextFloat();
        N3 = in.nextFloat();
        N4 = in.nextFloat();

        media = mediaCalc(N1, N2, N3, N4);

        validarMedia(media, in);

    }

    private static void validarMedia(float media, Scanner in) {
        float N5;
        float recalmedia;
        if (media >= 7.0) {

            System.out.printf("Media: %.1f\n", media);
            System.out.print("Aluno aprovado.\n");

        }

        else if (media >= 5.0 && media <= 6.9) {

            System.out.printf("Media: %.1f\n", media);
            System.out.print("Aluno em exame.\n");
            N5 = in.nextFloat();
            System.out.printf("Nota do exame: %.1f\n", N5);
            recalmedia = (media + N5) / 2;

            if (recalmedia >= 5.0) {
                System.out.print("Aluno aprovado.\n");

            } else {
                System.out.print("Aluno reprovado.\n");

            }

            System.out.printf("Media final: %.1f\n", recalmedia);

        }

        else if (media < 5.0) {

            System.out.printf("Media: %.1f\n", media);
            System.out.print("Aluno reprovado.\n");

        }
    }

    private static float mediaCalc(float N1, float N2, float N3, float N4) {
        return ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10;
    }

}
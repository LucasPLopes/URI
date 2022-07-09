import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Integer p = 0, i = 0, pos = 0, neg = 0;

        Scanner leitor = new Scanner(System.in);
        // declare suas variaveis corretamente
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        int e = 0;

        a = leitor.nextInt();
        b = leitor.nextInt();
        c = leitor.nextInt();
        d = leitor.nextInt();
        e = leitor.nextInt();

        List<Integer> list = Arrays.asList(a, b, c, d, e);

        // continue a solução
        for (Integer num : list) {

            if (num == 0) {
                p++;

            } else if (num > 0 && num % 2 == 0) {
                p++;
                pos++;
            } else if (num > 0 && num % 2 != 0) {
                i++;
                pos++;
            }

            if (num < 0 && num % 2 == 0) {
                p++;
                neg++;
            } else if (num < 0 && num % 2 != 0) {
                i++;
                neg++;
            }

        }

        // insira suas variaveis corretamente
        System.out.println(p + " valor(es) par(es)");
        System.out.println(i + " valor(es) impar(es)");
        System.out.println(pos + " valor(es) positivo(s)");
        System.out.println(neg + " valor(es) negativo(s)");
    }

}
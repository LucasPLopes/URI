import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        for (int i = 1; i <= 9; i += 2) {
            for (int j = 0; j <= 2; j++) {
                System.out.printf("I=%d J=%d\n", i, 6 + i - j);
            }

        }
    }
}
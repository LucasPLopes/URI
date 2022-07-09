import java.util.Scanner;

public class Main {
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        while (scan.hasNext()) {
            int times = Integer.parseInt(scan.nextLine());
            if (times == 0)
                break;
            else {
                String[] split = scan.nextLine().split(" ");
                int x0 = 0, x1 = 0;
                for (String in : split) {
                    int value = Integer.parseInt(in);
                    if (value == 0)
                        ++x0;
                    else
                        ++x1;
                }
                System.out.printf("Mary won %d times and John won %d times\n", x0, x1);

            }
        }

    }
}
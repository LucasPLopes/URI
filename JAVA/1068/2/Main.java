import java.io.IOException;
import java.util.Scanner;
import static java.lang.System.out;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int opens;
        boolean wrong;
        String input;

        while (sc.hasNext()) {
            input = sc.nextLine();
            opens = 0;
            wrong = false;

            for (int i = 0; i < input.length(); i++) {
                char ch = input.charAt(i);
                if (ch == ')') {
                    if (opens == 0) {
                        wrong = true;
                        break;
                    }
                    opens--;
                } else if (ch == '(')
                    opens++;
            }
            boolean b = wrong || opens > 0;
            if (b)
                out.println("incorrect");
            else
                out.println("correct");
        }
        sc.close();
    }
}
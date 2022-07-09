import java.util.*;
import java.io.IOException;
public class Main{
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int a = leitor.nextInt();
        int b = leitor.nextInt();
        int c = leitor.nextInt();
        if (podeViajar(a, b, c)) 
            System.out.println("S");
        else
            System.out.println("N");
        leitor.close();
    }

    public static boolean podeViajar(int a, int b, int c) {

        if (a - b == 0 || a - c == 0 || b - c == 0)
            return true;
        if (a + b - c == 0 || b - a + c == 0 || c - a + b == 0)
            return true;
        if (a - b - c == 0 || b - a - c == 0 || c - a - b == 0)
            return true;

        return false;
    }

}
import java.util.Scanner;

// solução  adaptada de https://github.com/gmendonca/uri-problem-solutions/blob/master/1068.cpp
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Integer esq = 0;
        Integer dir = 0;

        while (sc.hasNext()) {
            esq = 0;
            dir = 0;
            char[] charArray = sc.nextLine().toCharArray();
            for (char c : charArray) {
                if (c == '(')
                    esq++;
                else if (c == ')') {
                    dir++;
                    if (esq > 0) {
                        dir--;
                        esq--;
                    }
                }
            }
            if (esq == dir && esq == 0)
                System.out.println("correct");
            else
                System.out.println("incorrect");
        }
        sc.close();
    }

}
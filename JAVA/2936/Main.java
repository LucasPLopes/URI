import java.util.Scanner;

// Template
public class Main {
    private static class Porcoes {
        private static int Curupira = 300;
        private static int Boitata = 1500;
        private static int Boto = 600;
        private static int Mapinguari = 1000;
        private static int Iara = 150;
        private static int Chica = 225;

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, c, d, e, mandioca = 0;
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        d = sc.nextInt();
        e = sc.nextInt();
        mandioca = calcMandioca(a, b, c, d, e);
        System.out.println(mandioca);

    }

    public static int calcMandioca(int a, int b, int c, int d, int e) {
        int mandioca = 0;
        mandioca += Porcoes.Curupira * a;
        mandioca += Porcoes.Boitata * b;
        mandioca += Porcoes.Boto * c;
        mandioca += Porcoes.Mapinguari * d;
        mandioca += Porcoes.Iara * e;
        mandioca += Porcoes.Chica;
        return mandioca;
    }
}
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        divisores(n);
    }
    public static void divisores(int N){
        for (int i = 1; i <= N; i++) {
            if( N%i == 0)
            System.out.println(i);
        }
    }
}
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N, resultado;
        N = sc.nextInt();
        resultado = x2(N);
        resultado = x2(resultado);
        
        System.out.println(resultado);
    }
    public static int x2(int x){
        return x *2;
    }
}
import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
		Scanner sc = new Scanner(System.in);
		Usuario user = new Usuario("Lucas", 2002L);
		long senha = sc.nextLong();
		
		while (senha != user.getSenha()) {
			System.out.println("Senha Invalida");
			senha = sc.nextInt();
		}
		
		System.out.println("Acesso Permitido");
		
		sc.close();
 
    }
 
}

class Usuario{
    private Long senha;
    private String nome;
    public Usuario(String n, Long s){
        senha = s;
        nome = n;
    }

    Long getSenha(){
        return senha;
    }
}
import java.io.IOException;
import java.util.Scanner;



public class Main{
public static void main (String ...args){
	Scanner sc = new Scanner(System.in);
	Integer a = sc.nextInt();
	Integer b = sc.nextInt();

        System.out.println("PROD  = " + prod(a, b));
	sc.close();

	}

	public static Integer prod(Integer a, Integer b){
		return a * b;
	}

}

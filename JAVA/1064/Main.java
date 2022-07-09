import java.util.Scanner;

public class Main{// uri1064
	
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		double positivos=0.0, entrada,media = 0.0; 
		int quantidade, count=0,i =0 ;
		
		for(i =0; i<6;i++)
		{
				entrada= sc.nextFloat(); 
			
			if( entrada > 0.0)
			{
				positivos += entrada;	
				count++;
			}			
		}
		media = positivos/count;	
		
		System.out.println(count+" valores positivos");
		System.out.printf("%.1f\n",media);
				
	}
	
}
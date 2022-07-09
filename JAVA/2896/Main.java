import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int times = 0;
    int sum = 0;

    times = Integer.parseInt(sc.nextLine());

    for (int i = 0; i < times; ++i) {
      String[] split = sc.nextLine().split(" ");
      int x, y;
      x = Integer.parseInt(split[0]);
      y = Integer.parseInt(split[1]);
      if (x >= y) {
        sum += x / y;
        sum += x % y;
      } else {
        sum += x;
      }
      System.out.println(sum);
      sum = 0;

    }
    sc.close();

  }

}

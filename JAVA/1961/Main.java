import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        List<Integer> jumps = new ArrayList<>();
        int p, n;
        boolean winner = true;

        String[] split = sc.nextLine().split(" ");
        p = Integer.parseInt(split[0]);
        n = Integer.parseInt(split[1]);

        String[] split2 = sc.nextLine().split(" ");
        for (int i = 0; i < split2.length; i++)
            jumps.add(Integer.parseInt(split2[i]));

        for (int i = 0; i < (n - 1); i++)
            if ((jumps.get(i) - jumps.get(i + 1)) < -p)
                winner = false;
            else if ((jumps.get(i) - jumps.get(i + 1)) > p)
                winner = false;

        if (winner)
            System.out.println("YOU WIN");
        else
            System.out.println("GAME OVER");
    }
}
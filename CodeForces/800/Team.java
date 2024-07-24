

import java.util.Scanner;

public class Team {
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int n = input.nextInt();
        int cnt = 0;
        while (n-- > 0) {
            int a = input.nextInt();
            int b = input.nextInt();
            int c = input.nextInt();
            int sum = a + b + c;
            if (sum >= 2)
                cnt++;
        }
        System.out.println(cnt);
    }

}
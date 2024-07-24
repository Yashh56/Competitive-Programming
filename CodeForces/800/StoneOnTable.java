import java.util.Scanner;

public class StoneOnTable {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int n = sc.nextInt();
        String input = sc.next();
        int cnt = 0;
        char last = input.charAt(0);
        for (int i = 1; i < n; i++) {
            if (input.charAt(i) == last)
                cnt++;
            else
                last = input.charAt(i);
                System.out.println(last);
        }
        System.out.println(cnt);
    }
}

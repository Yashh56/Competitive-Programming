import java.util.Scanner;

public class NearlyLuckyNumber {
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        String n = sc.next();
        int cnt = 0;
        for (int i = 0; i < n.length(); i++) {
            if (n.charAt(i) == '4' || n.charAt(i) == '7') {
                cnt++;
            }
        }
        // System.out.println(cnt);
        if (cnt == 7 || cnt == 4) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}

import java.util.Scanner;

public class Word {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        String s = sc.next();
        int n = s.length();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (Character.isUpperCase(s.charAt(i))) {
                cnt++;
            }
        }
        // System.out.println(cnt);
        if (cnt > n / 2) {
            System.out.println(s.toUpperCase());
        } else {
            System.out.println(s.toLowerCase());
        }
    }
}

import java.util.Scanner;

/**
 * TrickyTemplate
 */
public class TrickyTemplate {

    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            String a = sc.next();
            String b = sc.next();
            String c = sc.next();
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (a.charAt(i) != c.charAt(i) && b.charAt(i) != c.charAt(i)) {
                    cnt = 1;
                    break;
                }
            }
            if (cnt == 1) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
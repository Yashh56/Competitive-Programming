import java.util.*;

/**
 * DontCount
 */
public class DontCount {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int t = sc.nextInt();
        while (t-- > 0) {
            solve();
        }
    }

    private static void solve() {
        int n = sc.nextInt();
        int m = sc.nextInt();
        String x = sc.next();
        String s = sc.next();

        for (int i = 0; i < 6; i++) {
            if (x.contains(s)) {
                System.out.println(i);
                return;
            }
            x += x;
        }
        System.out.println(-1);
    }
}
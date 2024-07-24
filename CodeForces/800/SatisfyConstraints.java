import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class SatisfyConstraints {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        while (tc-- > 0) {
            int n = sc.nextInt();
            double r = 1e9;
            int l = 1;
            Set<Integer> s = new HashSet<>();
            for (int i = 0; i < n; i++) {
                int t = sc.nextInt();
                int x = sc.nextInt();
                if (t == 1)
                    l = Math.max(l, x);
                if (t == 2)
                    r = Math.min(r, x);
                if (t == 3)
                    s.add(x);
            }
            if (r < l) {
                System.out.println(0);
                continue;
            }
            double ans = r - l + 1;
            for (int i : s) {
                if (i >= l && i <= r) {
                    ans--;
                }
            }
            System.out.println(Math.round(ans));
        }
    }
}
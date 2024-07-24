
import java.util.*;

public class ArrangingCats {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            String s = sc.next();
            String f = sc.next();
            long ans1 = 0;
            long ans2 = 0;
            for (int i = 0; i < n; i++) {
                if (s.charAt(i) == '0' && f.charAt(i) == '1') {
                    ans1 += 1;
                } else if (s.charAt(i) == '1' && f.charAt(i) == '0') {
                    ans2++;
                }
            }
            System.out.println(Math.max(ans1, ans1 + ans2 - ans1));
        }
    }
}
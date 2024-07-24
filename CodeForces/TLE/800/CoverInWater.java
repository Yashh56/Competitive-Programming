

import java.util.Scanner;


public class CoverInWater {

    static Scanner sc = new Scanner(System.in);

    static void solve() {
        int n = sc.nextInt();
        String str = sc.next();
        int cnt = 0;
        int ct = 0;
        int mx = 0;
        for (char c : str.toCharArray()) {
            if (c == '.') {
                cnt++;
                ct++;
            }
            if (c == '#') {
                mx = Math.max(mx, ct);
                ct = 0;
            }
        }
        mx = Math.max(ct, mx);
        System.out.println(mx);
        System.out.println(cnt);
        if (cnt == 0) {
            System.out.println(0);
        } else if(mx>2){
            System.out.println(2);
        }
         else {
            System.out.println(cnt);
        }
    }

    public static void main(String[] args) {
        int t = sc.nextInt();

        while (t-- > 0) {
            solve();
        }
    }
}
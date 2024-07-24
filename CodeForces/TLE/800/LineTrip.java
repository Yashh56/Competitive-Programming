

import java.util.*;

public class LineTrip {
    static Scanner sc = new Scanner(System.in);

    public static void solve() {
        int n = sc.nextInt(), x = sc.nextInt();
        int arr[] = new int[x];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int ans = 0, last = 0;

        for (int i = 0; i < n; i++) {
            ans = Math.max(ans, arr[i] - last);
            last = arr[i];
        }
        ans = Math.max(ans, 2 * (x - arr[n - 1]));

        System.out.println(ans);
    }

    public static void main(String[] args) {
        int t = sc.nextInt();
        while (t-- > 0) {
            solve();
        }
    }
}



import java.util.*;

public class JaggedSwaps {
    static Scanner sc = new Scanner(System.in);

    private static void solve() {
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }

        if (arr[0] == 1)
            System.out.println("YES");
        else
            System.out.println("NO");
    }

    public static void main(String[] args) {
        int t = sc.nextInt();

        while (t-- > 0) {
            solve();
        }
    }
}

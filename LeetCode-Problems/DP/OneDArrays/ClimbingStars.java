package DP.OneDArrays;

public class ClimbingStars {

    private static int solve(int n) {
        int prev = 1;
        int prev2 = 1;

        if (n == 1)
            return 1;
        if (n == 0)
            return 1;

        for (int i = 2; i <= n; i++) {
            int curr = prev2 + prev;
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }

    public static void main(String[] args) {
        System.out.println(solve(2));
    }
}

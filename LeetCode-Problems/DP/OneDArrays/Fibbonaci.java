package DP.OneDArrays;

public class Fibbonaci {
    private static int fibb(int n) {
        int prev = 1;
        int prev2 = 0;
        if (n == 0)
            return 0;
        for (int i = 2; i <= n; i++) {
            int curr = prev2 + prev;
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }

    public static void main(String[] args) {
        System.out.println(fibb(3));
        // System.out.println("yash");
    }
}

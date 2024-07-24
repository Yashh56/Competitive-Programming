import java.util.Scanner;

public class GoalsofVictory {

    static Scanner sc = new Scanner(System.in);

    private static void solve() {
        int n = sc.nextInt();
        int sum = 0;

        for (int i = 0; i < n - 1; i++) {
            int temp = sc.nextInt();

            sum += temp;
        }
        System.out.println(-sum);
    }

    public static void main(String[] args) {
        int t = sc.nextInt();
        while (t-- > 0) {
            solve();
        }
    }
}
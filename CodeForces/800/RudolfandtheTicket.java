import java.util.Scanner;

public class RudolfandtheTicket {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();

        for (int r = 0; r < t; r++) {
            int n = scanner.nextInt();
            int m = scanner.nextInt();
            int k = scanner.nextInt();

            int[] leftCoins = new int[n];
            int[] rightCoins = new int[m];

            for (int i = 0; i < n; i++) {
                leftCoins[i] = scanner.nextInt();
            }

            for (int j = 0; j < m; j++) {
                rightCoins[j] = scanner.nextInt();
            }

            int count = 0;

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (leftCoins[i] + rightCoins[j] <= k) {
                        count++;
                    }
                }
            }

            System.out.println(count);
        }

        scanner.close();
    }
}
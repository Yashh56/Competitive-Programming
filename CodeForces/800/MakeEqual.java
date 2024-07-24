
import java.util.Scanner;

public class MakeEqual {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); // Number of test cases

        while (t-- > 0) {
            int n = scanner.nextInt(); // Number of containers
            long[] a = new long[n];
            long sum = 0;

            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextLong();
                sum += a[i];
            }

            long average = sum / n;
            long currentExcess = 0;
            boolean possible = true;

            for (int i = 0; i < n; i++) {
                currentExcess += a[i] - average;

                // If at any point the current excess is negative, it's not possible
                if (currentExcess < 0) {
                    possible = false;
                    break;
                }
            }

            System.out.println(possible ? "YES" : "NO");
        }

        scanner.close();
    }
}

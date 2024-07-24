import java.util.Scanner;

public class SashaAndDrawing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int x = sc.nextInt();

            if (2 * n >= x) {
                System.out.println(x / 2 + (x % 2));
            } else if (2 * n + 2 * (n - 2) >= x) {
                System.out.println(x / 2 + (x % 2));
            } else if (x == 4 * n - 3) {
                System.out.println(n * 2 - 1);
            } else {
                System.out.println(n * 2);
            }
        }
    }
}

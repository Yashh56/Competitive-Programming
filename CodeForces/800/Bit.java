import java.util.Scanner;

public class Bit {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int n = sc.nextInt();
        int count = 0;

        for (int i = 0; i < n; i++) {
            String x = sc.next();
            if (x.charAt(1) == '+') {
                count++;
            } else {
                count--;
            }
        }
        System.out.println(count);
    }
}

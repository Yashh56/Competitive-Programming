import java.util.Scanner;

/**
 * WrongSubtraction
 */
public class WrongSubtraction {
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        int n = sc.nextInt();
        int k = sc.nextInt();
        while (k-- > 0) {
            if (n % 10 != 0) {
                n--;
            } else {
                n /= 10;
            }
        }
        System.out.println(n);
    }
}
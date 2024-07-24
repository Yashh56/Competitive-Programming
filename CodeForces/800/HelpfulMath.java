import java.util.Arrays;
import java.util.Scanner;

public class HelpfulMath {
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        String sum = sc.next();
        sum = sum.replace("+", "");
        char[] c = sum.toCharArray();
        int n = c.length;
        Arrays.sort(c);
        for (int i = 0; i <n; i++) {
            System.out.print(c[i]);
            if (i == n-1) {
                // char tmp = c[i + 1];
                // c[i + 1] = c[i];
                // c[i] = tmp;
                continue;
            }
            System.out.print("+");
        }
    }
}
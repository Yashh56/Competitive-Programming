import java.util.Scanner;

public class DominoPiling {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int m = sc.nextInt();
        int n = sc.nextInt();
        int ans = ((m * n) / 2);
        System.out.println(ans);
    }
}

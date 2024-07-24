import java.util.Scanner;

/**
 * BrickWall
 */
public class BrickWall {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int h = sc.nextInt();
            int w = sc.nextInt();
            int ans = h*(w/2);
            System.out.println(ans);
        }
    }
}
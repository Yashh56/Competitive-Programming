import java.util.Scanner;

/**
 * RectangleCutting
 */
public class RectangleCutting {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();

            // if (a == 0 || a == 1 || b == 0 || b == 1 || a % 2 != 0 && b % 2 != 0 || a % 2 != 0 || b % 2 != 0) {
            //     System.out.println("NO");
            // } else {
            //     System.out.println("YES");
            // }

            if(a%2==1 && b%2==1){
                System.out.println("NO");
            }
            else if(b%2!=0 && a/2==b){
                System.out.println("NO");
            } else if(a%2!=0 && b/2==a){
                System.out.println("NO");
            } else{
                System.out.println("YES");
            }
        }
    }
}
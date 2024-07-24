import java.util.Scanner;

/**
 * WalletExchange
 */
public class WalletExchange {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-->0) {
            int a = sc.nextInt();
            int b =sc.nextInt();
            int ans = (a+b);
            if(ans%2==0){
                System.out.println("Bob");
            } else{
                System.out.println("Alice");
            }
        }
    }
}
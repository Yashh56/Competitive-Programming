import java.util.Scanner;

public class SolidierAndBanana {

    // int k=3; //Initial Price of banana
    // int n = 17; //no.of dollars solidier have
    // int w = 4 ; //no.of banana solidier want to buy

    // output 13
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        // int n = 17;
        // int k = 3;
        // int w = 0;
        // int j = 4;
        int cost = sc.nextInt();
        int initialMoney = sc.nextInt();
        int noBananas = sc.nextInt();

        int sum = cost;

        for (int i = 2; i <= noBananas; i++) {
            sum += i * cost;
        }
        if (sum <= initialMoney) {
            System.out.println(0);
            System.exit(0);
        }
        System.out.println(sum - initialMoney);
    }
}
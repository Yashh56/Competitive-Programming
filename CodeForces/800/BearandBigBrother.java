import java.util.Scanner;

public class BearandBigBrother {

    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int small = sc.nextInt();
        int big = sc.nextInt();
        int year = 0;
        while (big >= small) {
            small = small * 3;
            big = big * 2;
            year++;
        }
        System.out.println(year);
    }
}
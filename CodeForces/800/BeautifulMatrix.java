import java.util.Scanner;

public class BeautifulMatrix {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        // int matrix[][] = new int[5][5];
        int j = 1;
        int i = 1;
        for (i = 1; i <= 5; i++) {

            if (sc.nextInt() == 1) {
                break;
            }
            if (i == 5) {
                j++;
                i = 0;
            }
        }
        System.out.println(Math.abs(i - 3) + Math.abs(j - 3));
    }
}
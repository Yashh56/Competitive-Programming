import java.util.Scanner;

public class PetyaAndStrings {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        String str1 = sc.nextLine();
        String str2 = sc.nextLine();

        String f = str1.toLowerCase();
        String s = str2.toLowerCase();

        if (f.compareTo(s) == 0) {
            System.out.println("0");
        } else if (f.compareTo(s) > 0) {
            System.out.println("1");
        } else {
            System.out.println("-1");
        }
    }
}
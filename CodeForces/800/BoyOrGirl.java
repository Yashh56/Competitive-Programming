import java.util.Arrays;
import java.util.Scanner;

public class BoyOrGirl {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        String word = sc.next();
        int cnt = 1;
        String res = "";
        char[] ch = word.toCharArray();
        Arrays.sort(ch);
        for (int i = 1; i < ch.length; i++) {
            if (ch[i - 1] != ch[i]) {
                cnt++;
            }
        }
        if (cnt % 2 == 0) {
            res = "CHAT WITH HER!";
        } else {
            res = "IGNORE HIM!";
        }
        System.out.println(res);
    }
}
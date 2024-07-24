package Beginner900;

import java.util.Scanner;


public class UnNaturalLanguageProcessing {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            String s = sc.next();
            String ans = "";
            int len = s.length();
            char lastChar = s.charAt(len - 1);
            while (!s.isEmpty()) {
                int x;
                if (lastChar == 'a' || lastChar == 'e') {
                    x = 2;
                } else {
                    x = 3;
                }
                while (x-- > 0) {
                    ans += lastChar;
                    s.substring(0, lastChar);
                }
                ans += ".";
            }
            ans.substring(0, lastChar);
            s = s.substring(0, lastChar);
            StringBuilder sb = new StringBuilder(s);
            sb.reverse();
            s = sb.toString();
            System.out.println(s);
        }
    }
}
package Beginner900;

import java.util.Scanner;
import java.util.Vector;


public class SendingMessage {
    static Scanner sc = new Scanner(System.in);

    public static void solve() {
        int n = sc.nextInt();
        int f = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();

        Vector<Integer> v = new Vector<>(n);
        for (int i = 0; i < n; i++) {
            v.add(sc.nextInt());
        }
        int last = 0;
        for (int i = 0; i < n; i++) {
            long keepOn = 1L * a * (v.get(i) - last);
            long turnOffAndOn = 0;
            long required = Math.min(keepOn, turnOffAndOn);

            f -= required;
            last = v.get(i);
            if (f <= 0) {
                System.out.println("NO");
            }
        }
        System.out.println("YES");
    }

    public static void main(String[] args) {
        int t = sc.nextInt();
        while (t-- > 0) {
            solve();
        }
    }
}
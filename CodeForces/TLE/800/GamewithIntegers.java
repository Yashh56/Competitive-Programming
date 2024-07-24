

import java.util.*;

public class GamewithIntegers {
    static Scanner sc = new Scanner(System.in);

    private static void solve() {
        int n = sc.nextInt();

        if(n%3!=0) System.out.println("First");
        else System.out.println("Second"); 
    }

    public static void main(String[] args) {
        int t = sc.nextInt();

        while (t-- > 0) {
            solve();
        }
    }

}

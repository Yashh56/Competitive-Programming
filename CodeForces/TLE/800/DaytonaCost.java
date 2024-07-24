import java.util.*;

public class DaytonaCost {

    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int t = sc.nextInt();
        while (t-- > 0) {
            solve();
        }
    }

    public static int[] inputArr(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        return arr;
    }

    private static void solve() {
        int n = sc.nextInt();
        int k = sc.nextInt();
        int arr[] = new int[n];
        boolean ans = false;
        inputArr(arr, n);
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == k) {
                ans = true;
                break;
            } else {
                ans = false;
            }
        }
        if (ans) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}

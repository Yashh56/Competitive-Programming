import java.util.Arrays;
import java.util.Scanner;

public class SashaBeautifulArray {
    static Scanner sc = new Scanner(System.in);

    public static int[] insert(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        return arr;
    }

    public static void main(String[] args) {
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] arr = new int[n];
            insert(arr, n);
            // System.out.println(Arrays.toString(arr));
            int ans = arr[0] - arr[n - 1];
            System.out.println(Math.abs(ans));
        }
    }
}
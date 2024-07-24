import java.util.Scanner;

public class NextRound {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {

        int n = sc.nextInt();
        int k = sc.nextInt();
        int arr[] = new int[n];
        int count = 0;

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] >= arr[k - 1] && arr[i] != 0) {
                // System.out.println(arr[k-1]);
                count++;
            }
        }
        System.out.println(count);
    }

}
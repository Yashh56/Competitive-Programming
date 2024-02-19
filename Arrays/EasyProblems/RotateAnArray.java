// Time Complexity : O(n)
// Space Complexity : O(1)

package EasyProblems;

public class RotateAnArray {
    static void Reverse(int[] arr, int start, int end) {
        while (start <= end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    // Function to rotate k elements to left
    static void RotateLeft(int[] arr, int n, int k) {
        // Reverse first k element
        Reverse(arr, 0, k - 1);
        // Reverse last n-k element
        Reverse(arr, k, n - 1);
        // Reverse whole array
        Reverse(arr, 0, n - 1);
    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 5, 6, 7 };
        int n = arr.length;
        int k = 2;
        RotateLeft(arr, n, k);
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}

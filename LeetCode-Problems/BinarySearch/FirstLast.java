package BinarySearch;

public class FirstLast {
    static int[] BS(int[] arr, int target) {
        int n = arr.length;
        int[] ans = new int[2];
        int low = 0;
        int high = n - 1;
        while (low <= high) {
            if (arr[low] < target) {
                low++;
            } else if (arr[high] > target) {
                high--;
            } else if (arr[low] == target && arr[high] == target) {
                ans[0] = low;
                ans[1] = high;
                return ans;
            }
        }
        ans[0] = -1;
        ans[1] = -1;
        return ans;

    }
}
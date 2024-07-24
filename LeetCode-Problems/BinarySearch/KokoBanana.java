package BinarySearch;

public class KokoBanana {
    public static int findMax(int[] arr) {
        int maxi = Integer.MIN_VALUE;
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            maxi = Math.max(maxi, arr[i]);
        }
        return maxi;
    }

    public static int TotalHours(int[] arr, int hourly) {
        int totalH = 0;
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            totalH += Math.ceil((double) (arr[i]) / (double) (hourly));
        }
        return totalH;
    }

    public int minEatingSpeed(int[] arr, int h) {
        int n = arr.length;
        int low = 1;
        int high = findMax(arr);
        while (low <= high) {
            int mid = (low + high) / 2;
            int totalH = TotalHours(arr, mid);
            if (totalH <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
}

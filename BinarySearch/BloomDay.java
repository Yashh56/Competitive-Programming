package BinarySearch;

/**
 * BloomDay
 */
public class BloomDay {

    public int possible(int[] arr, int day, int m, int k) {
        int cnt = 0;
        int bday = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] <= day) {
                cnt++;
            } else {
                bday = bday + (cnt / k);
                cnt = 0;
            }
        }
        bday = bday + (cnt / k);
        return bday;
    }

    public int minDays(int[] bloomDay, int m, int k) {
        int n = bloomDay.length;
        long var = (long) m * k;
        if (var > n)
            return -1;
        int ans = -1;
        int low = Integer.MAX_VALUE;
        int high = Integer.MIN_VALUE;
        for (int ele : bloomDay) {
            low = Math.min(low, ele);
            high = Math.max(high, ele);
        }
        while (low <= high) {
            int mid = (low + high) / 2;
            int bday = possible(bloomDay, mid, m, k);
            if (bday >= m) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
}
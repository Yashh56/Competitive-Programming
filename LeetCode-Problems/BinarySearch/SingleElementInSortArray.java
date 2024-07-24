package BinarySearch;

/**
 * SingleElementInSortArray
 */
public class SingleElementInSortArray {
    public int singleNonDuplicate(int[] nums) {
        int n = nums.length;
        int low = 0;
        int high = n - 1;
        while (low < high) {
            int mid = (low + high) / 2;
            if (mid % 2 == 1) {
                mid--;
            }
            if (nums[mid] != nums[mid + 1]) {
                high = mid;
            } else {
                low = mid + 2;
            }
        }
        return nums[low];
    }

}
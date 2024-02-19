package EasyProblems;

public class ArraySort {
    // arr =[1,2,3,4,5];
    // arr=[2,3,5,4,1];

    public static boolean SortOrNot(int[] nums) {
        int j = 0;
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                j++;
            }
            if (j > 1) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        // int arr[] = { 2, 3, 5, 4, 1 };
        int arr[] = { 1, 2, 3, 4, 5 };
        System.out.println(SortOrNot(arr));
    }
}

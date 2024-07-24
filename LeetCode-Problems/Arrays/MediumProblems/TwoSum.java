package MediumProblems;

public class TwoSum {
    public static int[] sum(int[] arr, int target) {
        int n = arr.length;
        int left = 0;
        int right = left + 1;
        int[] newArr = new int[2];

        while (right < n) {
            if ((arr[left] + arr[right]) == target) {
                newArr[0] = left;
                newArr[1] = right;
                break;
            }
            right++;
            if (right == n) {
                left++;
                right = left + 1;
            }
        }
        return newArr;
    }
}

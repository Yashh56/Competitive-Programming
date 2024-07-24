package MediumProblems;

/**
 * RearrangeArray
 */
public class RearrangeArray {
    static int[] rearrange(int[] arr) {
        int n = arr.length;
        int[] ans = new int[n];
        int pos = 0, neg = 1;
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                ans[neg] = arr[i];
                neg += 2;
            } else {
                ans[pos] = arr[i];
                pos += 2;
            }
        }
        return ans;
    }

}
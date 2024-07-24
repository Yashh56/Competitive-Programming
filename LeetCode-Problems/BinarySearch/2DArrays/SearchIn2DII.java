/**
 * SearchIn2DII
 */
public class SearchIn2DII {

    public boolean searchMatrix(int[][] matrix, int target) {
        int n = matrix.length;
        int m = matrix[0].length;
        int low = 0;
        int high = m - 1;
        while (low < n && high >= 0) {
            int mid = (low + high) / 2;
            if (matrix[low][high] == target)
                return true;
            else if (matrix[low][high] < target)
                low++;
            else
                high--;
        }
        return false;
    }
}
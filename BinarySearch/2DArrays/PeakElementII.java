public class PeakElementII {
    public int maxElementInRow(int[][] mat, int mid) {
        int maxi = 0;
        int rowNum = 0;
        for (int i = 0; i < mat.length; i++) {
            if (maxi < mat[i][mid]) {
                maxi = mat[i][mid];
                rowNum = i;
            }
        }
        return rowNum;
    }

    public int[] findPeakGrid(int[][] mat) {
        int low = 0;
        int high = mat[0].length - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            int row = maxElementInRow(mat, mid);

            int left = mid - 1 >= 0 ? mat[row][mid - 1] : -1;
            int right = mid + 1 < mat[0].length ? mat[row][mid + 1] : -1;

            if (mat[row][mid] > left && mat[row][mid] > right) {
                return (new int[] { row, mid });
            } else if (mat[row][mid] < left) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return (new int[] { 0, 0 });
    }
}

class Solution
{
public:
    int minFallingPathSum(vector<vector<int>> &mat)
    {
        int n = mat.size();
        if (n == 0)
            return 0;
        int m = mat[0].size();

        vector<vector<int>> dp(n, vector<int>(m, INT_MAX));

        int minSum = INT_MAX;

        for (int i = 0; i < m; i++)
        {
            minSum = min(minSum, solve(mat, dp, n, m, 0, i));
        }
        return minSum;
    }

    int solve(vector<vector<int>> &mat, vector<vector<int>> &dp, int n, int m, int row, int col)
    {
        if (row == n - 1)
            return mat[row][col];

        if (dp[row][col] != INT_MAX)
            return dp[row][col];

        int left = (col > 0) ? solve(mat, dp, n, m, row + 1, col - 1) : INT_MAX;
        int down = solve(mat, dp, n, m, row + 1, col);
        int right = (col < m - 1) ? solve(mat, dp, n, m, row + 1, col + 1) : INT_MAX;

        dp[row][col] = mat[row][col] + min(left, min(down, right));

        return dp[row][col];
    }
};
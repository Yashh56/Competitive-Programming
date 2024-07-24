class Solution
{
public:
    int recur(int i, int j, int n, vector<vector<int>> &tri, vector<vector<int>> &dp)
    {
        if (i == n - 1)
            return tri[n - 1][j];
        if (dp[i][j] != -1)
            return dp[i][j];
        int down = recur(i + 1, j, n, tri, dp);
        int diag = recur(i + 1, j + 1, n, tri, dp);
        return dp[i][j] = min(down, diag) + tri[i][j];
    }

    int minimumTotal(vector<vector<int>> &triangle)
    {
        vector<vector<int>> dp(triangle.size(), vector<int>(triangle.size(), -1));
        if (triangle.size() == 1)
            return triangle[0][0];
        return recur(0, 0, triangle.size(), triangle, dp);
    }
};
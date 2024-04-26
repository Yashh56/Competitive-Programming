class Solution
{
public:
    vector<vector<int>> combinationSum2(vector<int> &c, int x)
    {
        sort(c.begin(), c.end());
        vector<set<vector<int>>> dp(x + 1);
        dp[0] = {{}};
        for (int num : c)
        {
            for (int i = x; i >= num; i--)
            {
                for (vector<int> arr : dp[i - num])
                {
                    arr.push_back(num);
                    dp[i].insert(arr);
                }
            }
        }
        return vector<vector<int>>(dp[x].begin(), dp[x].end());
    }
};
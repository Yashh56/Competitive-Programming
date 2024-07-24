class Solution
{
public:
    int bottomUp(vector<int> &coins, int amount)
    {
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;
        for (int target = 1; target <= amount; target++)
        {
            int mini = INT_MAX;
            for (int i = 0; i < coins.size(); i++)
            {
                if (target - coins[i] >= 0)
                {
                    int ans = dp[target - coins[i]];
                    if (ans != INT_MAX)
                        mini = min(mini, 1 + ans);
                }
            }
            dp[target] = mini;
        }
        return dp[amount];
    }
    int coinChange(vector<int> &coins, int amount)
    {
        int ans = bottomUp(coins, amount);
        if (ans != INT_MAX)
            return ans;
        return -1;
    }
};
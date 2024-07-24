class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n, 0);
        dp[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            int reach = i + nums[i];
            for (int j = i + 1; j <= reach; j++)
            {
                if (j < n and dp[j])
                {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[0];
    }
};
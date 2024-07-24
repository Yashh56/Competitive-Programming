class Solution
{
public:
    bool canPartition(vector<int> &nums)
    {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        vector<bool> dp(sum + 1, 0);
        if (sum % 2)
            return false;
        dp[sum / 2] = true;
        for (int i = 1; i < nums.size(); i++)
        {
            for (int j = sum; j >= sum / 2; j--)
            {
                bool notTake = dp[j];
                bool take = false;
                if (j >= nums[i])
                    take = dp[j - nums[i]];
                dp[j] = notTake || take;
            }
        }
        return dp[sum];
    }
};
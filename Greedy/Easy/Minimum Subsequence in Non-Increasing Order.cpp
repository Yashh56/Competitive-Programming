class Solution
{
public:
    vector<int> minSubsequence(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> res;
        sort(nums.begin(), nums.end());
        int sum = 0, prev = 0;
        for (int i = 0; i < n; i++)
            sum += nums[i];

        int i = n - 1;
        while (prev <= sum)
        {
            res.push_back(nums[i]);
            prev += nums[i];
            sum -= nums[i];
            i--;
        }
        return res;
    }
};
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int ans = INT_MAX;
        int n = nums.size();
        int left = 0;
        int right = 0;
        int sum = 0;
        while (left < n)
        {
            if (sum < target and right < n)
            {
                sum += nums[right];
                right++;
            }
            else if (sum >= target and left < n)
            {
                ans = min(ans, right - left);
                sum -= nums[left];
                left++;
            }
            else
            {
                break;
            }
        }
        if (ans == INT_MAX)
        {
            return 0;
        }
        return ans;
    }
};
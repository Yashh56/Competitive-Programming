class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int n = nums.size();
        int maxi = INT_MIN;
        int maxIndex = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > maxi)
            {
                maxi = nums[i];
                maxIndex = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i == maxIndex)
            {
                continue;
            }
            if (2 * nums[i] > maxi)
            {
                return -1;
            }
        }
        return maxIndex;
    }
};
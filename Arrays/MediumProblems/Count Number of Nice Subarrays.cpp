class Solution
{
public:
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        int ans = 0;
        int cnt = 0;
        int i = 0;
        int j = 0;
        int n = nums.size();
        while (j < n)
        {
            if (nums[j] % 2 != 0)
            {
                k--;
                cnt = 0;
            }
            while (k == 0)
            {
                if (nums[i] % 2 != 0)
                {
                    k++;
                }
                cnt++;
                i++;
            }
            ans += cnt;
            j++;
        }
        return ans;
    }
};
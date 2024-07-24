class Solution
{
public:
    long long countAlternatingSubarrays(vector<int> &nums)
    {
        long long count = 0;
        long long cons_count = 1;
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            if (nums[i] != nums[i - 1])
            {
                cons_count += 1;
            }
            else
            {
                count += (cons_count * (cons_count + 1)) / 2;
                cons_count = 1;
            }
        }
        count += (cons_count * (cons_count + 1)) / 2;
        return count;
    }
};
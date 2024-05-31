class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        long long val = accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());
        int first = 0, second = 0;
        val &= -val;
        for (int i : nums)
        {
            if (i & val)
                second ^= i;
            else
                first ^= i;
        }
        return {first, second};
    }
};
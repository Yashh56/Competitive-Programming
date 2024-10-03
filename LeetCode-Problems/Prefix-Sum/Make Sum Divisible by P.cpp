#define ll long long int
class Solution {
public:
    int solve(vector<int>& nums, int p, int rem) {
        ll preSum = 0;
        int minLen = nums.size();
        unordered_map<int, int> mp;
        mp[0] = -1;
        for (int i = 0; i < nums.size(); i++) {
            preSum += nums[i];
            int targetRem = (preSum % p - rem + p) % p;
            if (mp.find(targetRem) != mp.end()) {
                minLen = min(minLen, i - mp[targetRem]);
            }
            mp[preSum % p] = i;
        }
        return minLen < nums.size() ? minLen : -1;
    }

    int minSubarray(vector<int>& nums, int p) {
        ll sum = 0;
        for (auto& i : nums)
            sum += i;
        int rem = sum % p;
        if (rem == 0)
            return 0;

        return solve(nums, p, rem);
    }
};

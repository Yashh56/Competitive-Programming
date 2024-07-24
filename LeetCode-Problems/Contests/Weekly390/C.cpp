class Solution
{
public:
    std::vector<long long> mostFrequentIDs(std::vector<int> &nums, std::vector<int> &freq)
    {
        std::vector<long long> ans(nums.size(), 0);
        std::unordered_map<int, long long> mp;
        std::set<std::pair<long long, int>, std::greater<std::pair<long long, int>>> s;

        for (int i = 0; i < nums.size(); ++i)
        {
            auto it = s.find({mp[nums[i]], nums[i]});
            if (it != s.end())
            {
                s.erase(it);
            }
            mp[nums[i]] += freq[i];
            if (mp[nums[i]] > 0)
            {
                s.insert({mp[nums[i]], nums[i]});
            }
            if (!s.empty())
            {
                auto maxFreqPair = *s.begin();
                ans[i] = maxFreqPair.first;
            }
        }

        return ans;
        
    }
}
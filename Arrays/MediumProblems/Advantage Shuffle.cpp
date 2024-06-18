class Solution
{
public:
    vector<int> advantageCount(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size();
        vector<int> res(n);
        sort(nums1.begin(), nums1.end());
        vector<pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            p.push_back({nums2[i], i});
        }
        sort(p.begin(), p.end());
        int low = 0;
        int high = n - 1;
        for (auto i : nums1)
        {
            if (p[low].first < i)
            {
                res[p[low++].second] = i;
            }
            else
            {
                res[p[high--].second] = i;
            }
        }
        return res;
    }
};
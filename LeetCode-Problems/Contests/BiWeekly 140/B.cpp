class Solution
{
public:
    long long maximumTotalSum(vector<int> &a)
    {
        int n = a.size();
        sort(a.begin(), a.end());
        int curr = a[n - 1];
        long long total = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            curr = min(curr, a[i]);
            if (curr <= 0)
            {
                return -1;
            }
            total += curr;
            curr--;
        }
        return total;
    }
};
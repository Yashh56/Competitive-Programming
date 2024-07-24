class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        int odd = 0;
        int n = arr.size();
        if (n == 1 || n == 2)
            return false;
        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i] % 2 != 0)
            {
                if (arr[i + 1] % 2 != 0 && arr[i + 2] % 2 != 0)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
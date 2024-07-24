class Solution
{
public:
    char nextGreatestLetter(vector<char> &a, char k)
    {
        int n = a.size();
        int low = 0;
        int high = n - 1;
        char ans = ' ';
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (a[mid] <= k)
            {
                ans = a[mid];
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return low < a.size() ? a[low] : a[0];
    }
};
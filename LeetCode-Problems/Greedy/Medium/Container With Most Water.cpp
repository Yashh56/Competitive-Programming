class Solution
{
public:
    int maxArea(vector<int> &h)
    {
        int maxArea = 0;
        int n = h.size();
        int i = 0;
        int j = n - 1;
        while (i <= j)
        {
            int minArea = min(h[i], h[j]) * (j - i);
            maxArea = max(maxArea, minArea);
            if (h[i] < h[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxArea;
    }
};
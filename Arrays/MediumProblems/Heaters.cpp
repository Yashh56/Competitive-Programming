class Solution
{
public:
    int findRadius(vector<int> &houses, vector<int> &heaters)
    {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());

        int radius = 0, i = 0, left, right;

        for (int h : houses)
        {
            while (i < heaters.size() - 1 and heaters[i] <= h)
            {
                i++;
            }
            left = abs(h - (i > 0 ? heaters[i - 1] : heaters[0]));
            right = abs(heaters[i] - h);
            radius = max(radius, min(left, right));
        }
        return radius;
    }
};
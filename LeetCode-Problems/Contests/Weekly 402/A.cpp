class Solution
{
public:
    int countCompleteDayPairs(vector<int> &hours)
    {

        vector<int> rem(24, 0);

        for (int hour : hours)
        {
            rem[hour % 24]++;
        }

        int cnt = 0;

        cnt += rem[0] * (rem[0] - 1) / 2;

        for (int i = 1; i < 12; ++i)
        {
            cnt += rem[i] * rem[24 - i];
        }

        cnt += rem[12] * (rem[12] - 1) / 2;

        return cnt;
    }
};

#define ll long long
class Solution
{
public:
    long long countCompleteDayPairs(vector<int> &hours)
    {

        vector<ll> rem(24, 0);

        for (int hour : hours)
        {
            rem[hour % 24]++;
        }

        ll cnt = 0;

        cnt += rem[0] * (rem[0] - 1) / 2;

        for (int i = 1; i < 12; ++i)
        {
            cnt += rem[i] * rem[24 - i];
        }

        cnt += rem[12] * (rem[12] - 1) / 2;

        return cnt;
    }
};
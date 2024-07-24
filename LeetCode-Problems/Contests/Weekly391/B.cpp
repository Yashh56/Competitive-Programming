class Solution
{
public:
    int maxBottlesDrunk(int x, int y)
    {
        int cnt = x;
        int ans = x;
        while (ans >= y)
        {
            ans -= y;
            ans++;
            cnt++;
            y++;
        }
        return cnt;
    }
};
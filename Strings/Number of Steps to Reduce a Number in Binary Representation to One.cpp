class Solution
{
public:
    int numSteps(string s)
    {
        int n = s.size();
        int cnt = n - 1, carry = 0;
        for (int i = n - 1; i > 0; i--)
        {
            if (s[i] - '0' + carry == 1)
            {
                cnt++;
                carry = 1;
            }
        }
        return cnt + carry;
    }
};
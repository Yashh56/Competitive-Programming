class Solution
{
public:
    int longestPalindrome(string s)
    {
        int odd = 0;
        unordered_map<char, int> mpp;
        for (char i : s)
        {
            mpp[i]++;
            if (mpp[i] % 2 == 1)
            {
                odd++;
            }
            else
            {
                odd--;
            }
        }
        if (odd > 1)
        {
            return s.length() - odd + 1;
        }
        return s.length();
    }
};
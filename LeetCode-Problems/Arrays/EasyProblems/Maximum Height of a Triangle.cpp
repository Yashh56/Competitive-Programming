class Solution
{
public:
    int check(int red, int blue)
    {
        int parity = 1;
        int ans = 0;
        while (red >= 0 && blue >= 0)
        {
            if (parity % 2 == 1)
            {
                red = red - parity;
            }
            else
            {
                blue = blue - parity;
            }
            if (red < 0 || blue < 0)
            {
                return ans;
            }
            ans++;
            parity++;
        }
        return ans;
    }

    int maxHeightOfTriangle(int red, int blue)
    {
        int ans = max(check(red, blue), check(blue, red));
        return ans;
    }
};
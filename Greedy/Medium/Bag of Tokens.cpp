class Solution
{
public:
    int bagOfTokensScore(vector<int> &tokens, int power)
    {
        int n = tokens.size();
        sort(tokens.begin(), tokens.end());
        int i = 0, j = n - 1;
        int maxi = 0, score = 0;
        while (i <= j)
        {
            if (power >= tokens[i])
            {
                power -= tokens[i];
                score++;
                maxi = score;
                i++;
            }
            else if (score >= 1)
            {
                power += tokens[j];
                score--;
                j--;
            }
            else
            {
                break;
            }
        }
        maxi = max(maxi, score);
        return maxi;
    }
};
class Solution
{
public:
    string replaceWords(vector<string> &dictionary, string sentence)
    {
        unordered_set<string> S(dictionary.begin(), dictionary.end());

        string ans, word;
        bool isFound = 0;

        for (char c : sentence)
        {
            if (c != ' ')
            {
                word += c;
                if (!isFound and S.count(word))
                {
                    ans += word;
                    isFound = 1;
                }
            }
            else
            {
                if (!isFound)
                    ans += word;
                ans += ' ';
                word = "";
                isFound = 0;
            }
        }

        if (!isFound)
            ans += word;

        return ans;
    }
};
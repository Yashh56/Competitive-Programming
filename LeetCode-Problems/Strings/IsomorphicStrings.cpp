#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool Isomorphic(string s, string t)
    {
        vector<int> IndexS(200, 0);
        vector<int> IndexT(200, 0);

        if (s.length() != t.length())
            return false;

        for (int i = 0; i < s.length(); i++)
        {
            if (indexS[s[i]] != indexT[t[i]])
                return false;

            indexS[s[i]] = i + 1;
            indexT[t[i]] = i + 1;
        }

        return true;
    }
}
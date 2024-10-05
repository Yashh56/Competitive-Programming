class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> mpp;
        for (auto& c : s1) {
            mpp[c]++;
        }
        int i = 0, j = 0;
        int n = s2.length();
        int m = s1.length();

        while (j < n) {
            if (mpp[s2[j]] > 0) {
                m--;
            }
            mpp[s2[j]]--;
            j++;
            if (m == 0) {
                return true;
            }
            if (j - i == s1.length()) {
                if (mpp[s2[i]] >= 0) {
                    m++;
                }
                mpp[s2[i]]++;
                i++;
            }
        }
        return false;
    }
};

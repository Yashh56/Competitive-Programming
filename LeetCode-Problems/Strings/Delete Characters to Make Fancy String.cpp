class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        char temp = '.';
        int cnt = 0, n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] == temp)
                cnt++;
            else {
                cnt = 1;
                temp = s[i];
            }
            if (cnt > 2) {
                continue;
            }
            ans += s[i];
        }
        return ans;
    }
};

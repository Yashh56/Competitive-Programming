class Solution {
public:
    int minLength(string s) {
        string temp;
        for (auto ch : s) {
            if (!temp.empty() && ch == 'B' && temp.back() == 'A') {
                temp.pop_back();
            } else if (!temp.empty() && ch == 'D' && temp.back() == 'C') {
                temp.pop_back();
            } else {
                temp += ch;
            }
        }
        return temp.size();
    }
};

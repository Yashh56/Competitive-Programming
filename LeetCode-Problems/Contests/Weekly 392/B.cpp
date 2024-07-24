class Solution {
public:
    string getSmallestString(string s, int k) {
    for (int i = 0; i < s.size() && k > 0; ++i) {
        int currentDist = s[i] - 'a';
        int cyclicDist = 26 - currentDist; 
        
        if (currentDist == 0) {
            continue;
        }
        if (k >= std::min(currentDist, cyclicDist)) {
            k -= std::min(currentDist, cyclicDist); 
            s[i] = 'a';
        } else {
            if (s[i] - k < 'a') {
                s[i] = 'z' - ('a' - (s[i] - k) - 1);
            } else {
                s[i] = s[i] - k;
            }
            k = 0;
        }
    }
    return s;
}

};
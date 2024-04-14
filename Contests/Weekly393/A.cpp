class Solution {
public:
    string findLatestTime(string s) {
        string result = s;
    
    if (result[0] == '?') {
        if (result[1] == '?' || '0' <= result[1] && result[1] <= '9') {
            result[0] = (result[1] <= '1' || result[1] == '?') ? '1' : '0';
        }
    }
    
    if (result[1] == '?') {
        result[1] = (result[0] == '1') ? '1' : '9';
    }
    
    if (result[3] == '?') {
        result[3] = '5';
    }
    
    if (result[4] == '?') {
        result[4] = '9';
    }

    return result;

    }
};
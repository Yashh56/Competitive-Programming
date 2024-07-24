class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;

        for(char c:magazine){
            mp[c]++;
        }
        bool ans = true;

        for(char c : ransomNote){
            if(mp.find(c) == mp.end() || mp[c]==0){
                ans = false;
                break;
            }
            mp[c]--;
        }

        return ans;
    }
};

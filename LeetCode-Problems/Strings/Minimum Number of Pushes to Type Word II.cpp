class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        vector<int> freq(26,0);

        for(char c:word){
            freq[c-'a']++;
        }

        sort(freq.rbegin(),freq.rend());

        for(auto &i:freq){
            cout<<i<<endl;
        }

        int totalPresses = 0;

        for(int i=0;i<26;i++){
            if(freq[i]==0) break;
            totalPresses +=(i/8+1) * freq[i];
        }

        return totalPresses;
    }
};

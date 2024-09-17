class Solution {
public:

    map<string,int>mp;

    void SS(string s){
        stringstream ss(s);
        string word;
        while(ss>>word) mp[word]++;
    }

    vector<string> uncommonFromSentences(string s1, string s2) {
        SS(s1);
        SS(s2);

        vector<string>ans;

        for(auto x:mp){
            cout<<x.second<<endl;
            if(x.second==1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};

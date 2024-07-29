class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> cnt;
        int res = 0;
        for(int i:deck) cnt[i]++;
        for(auto i:cnt) res = __gcd(i.second,res);
        cout<<res<<endl;
        return res>1;
    }
};

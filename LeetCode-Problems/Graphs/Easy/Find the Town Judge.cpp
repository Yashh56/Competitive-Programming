class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
    
    vector<int> cnt(n+1,0);

    if(n==1) return 1;
    for(auto x:trust){
        int u = x[0];
        int v = x[1];
        cnt[u]--;
        cnt[v]++;
    }

    for(int i=1;i<=n;i++){
        if(cnt[i]==n-1) return i;
    }
    return -1;
    }
};

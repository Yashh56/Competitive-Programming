class Solution {
public:

    void dfs(vector<vector<int>>& isConnected,int curr,vector<bool>& vis,int n){
        for(int i=0;i<n;i++){
            if(isConnected[i][curr] && !vis[i]){
                vis[i] = true;
                dfs(isConnected,i,vis,n);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
       int n = isConnected.size();
       int cnt = 0;
       vector<bool> vis(n,false);
       for(int i=0;i<n;i++){
        if(!vis[i]){
            cnt++;
            dfs(isConnected,i,vis,n);
        }
       }
       return cnt;
    }
};

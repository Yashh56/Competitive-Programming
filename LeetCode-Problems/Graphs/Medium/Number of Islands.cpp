class Solution {
public:

    bool isSafe(int m,int n,int i,int j){
        return (i>=0 && i<m && j>=0 && j<n);
    }

    void dfs(vector<vector<char>>& grid,vector<vector<bool>>& vis,int m,int n,int i,int j){
        vis[i][j] = true;
        vector<vector<int>>dirs = {
            {1,0},
            {-1,0},
            {0,1},
            {0,-1}
        };

        for(int k=0;k<4;k++){
            int newI = i + dirs[k][0];
            int newJ = j + dirs[k][1];
            if(isSafe(m,n,newI,newJ) && grid[newI][newJ]=='1' &&!vis[newI][newJ]){
                dfs(grid,vis,m,n,newI,newJ);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int cnt = 0;
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    cnt++;
                    dfs(grid,vis,m,n,i,j);
                }
            }
        }
        return cnt;
    }
};

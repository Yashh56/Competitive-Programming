class Solution {
public:

    bool isSafe(int i,int j,int n,int m){
        return (i>=0 && i<n && j>=0 && j<m);
    }

    void dfs(int i,int j,int n,int m,vector<vector<int>>& grid){
        grid[i][j] = 1;

        vector<vector<int>>dir = {
            {-1,0},
            {1,0},
            {0,-1},
            {0,1},
        };

        for(int k =0;k<4;k++){
            int newI = i + dir[k][0];
            int newJ = j+ dir[k][1];

            if(isSafe(newI,newJ,n,m) && grid[newI][newJ]==0){
                dfs(newI,newJ,n,m,grid);
            }
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        // Pre-Computation (Converting 0 to 1)

        for(int i=0;i<n;i++){
            if(grid[i][0]==0)
                dfs(i,0,n,m,grid);
            if(grid[i][m-1]==0)
                dfs(i,m-1,n,m,grid);
        }

        for(int j=0;j<m;j++){
            if(grid[0][j]==0)
                dfs(0,j,n,m,grid);
            if(grid[n-1][j]==0)
                dfs(n-1,j,n,m,grid);
        }

        int cnt = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    cnt++;
                    dfs(i,j,n,m,grid);
                }
            }
        }
        return cnt;
    }
};

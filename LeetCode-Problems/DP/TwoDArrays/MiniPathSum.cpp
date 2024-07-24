#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    int f(int n,int m,vector<vector<int>> &matrix){
        vector<int> prev(m,0);
        for(int i =0;i<n;i++){
            vector<int> temp(m,0);
            for(int j=0;j<m;j++){
                if(i==0 && j==0) temp[j] = matrix[i][j];
                else{
                    int up = matrix[i][j];
                    if(i>0) up+=prev[j];
                    else up+=1e9;

                    int left = matrix[i][j];
                    if(j>0) left+=temp[j-1];
                    else left+=1e9;

                    temp[j] = min(up,left);
                }
            }
            prev=temp;
        }
        return prev[m-1];
    }


    int minPathSum(vector<vector<int>>& grid) {
        int i = grid.size();
        int j = grid[0].size();
        return f(i,j,grid);
    }
};
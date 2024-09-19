class Solution {
public:

    bool isValid(int i,int j,int n,int m){
        return  i>=0 && i<n && j>=0 && j<m;
    }

    void dfs(vector<vector<int>>& image,int sr,int sc,int initialColor,int newColor,int n,int m){
        image[sr][sc] = newColor;
        vector<vector<int>> dirs = {
            {1,0},
            {0,1},
            {-1,0},
            {0,-1}
        };
        for(auto x: dirs){
            int i = sr + x[0];
            int j = sc + x[1];
            if(!isValid(i,j,n,m) || image[i][j] !=initialColor) continue;
            dfs(image,i,j,initialColor,newColor,n,m);
        }
    }


    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialColor = image[sr][sc];
        int n = image.size();
        int m = image[0].size();

        if(initialColor != color){
            dfs(image,sr,sc,initialColor,color,n,m);
        }
        return image;
    }
};

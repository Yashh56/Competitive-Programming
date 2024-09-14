class Solution {
public:

    void dfs(vector<vector<int>>& graph,vector<int>& path,vector<vector<int>>& ans,int i,int n){
        if(i==n-1){
            ans.push_back(path);
            return;
        }
        
        for(auto it:graph[i]){
            path.push_back(it);
            dfs(graph,path,ans,it,n);
            path.pop_back();
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
     vector<vector<int>>ans;
     vector<int>path = {0};
     int n = graph.size();
     dfs(graph,path,ans,0,n);
     return ans;   
    }
};

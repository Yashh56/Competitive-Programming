class Solution {
public:

    bool dfs(unordered_map<int,vector<int>>& graph,int src,int dest,vector<bool>& vis,int n){
        
        if(src==dest) return true;
        vis[src] = true;
        for(auto x:graph[src]){
            if(!vis[x]){
                if(dfs(graph,x,dest,vis,n)){
                    return true;
                }
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>graph;

        for(auto edge:edges){
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<bool> vis(n,false);
        return dfs(graph,source,destination,vis,n);
    }
};

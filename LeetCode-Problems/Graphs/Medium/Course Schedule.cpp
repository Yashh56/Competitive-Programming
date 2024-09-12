class Solution {
public:

    bool dfs(int i,int numCourses,vector<int> adj[],vector<bool>& vis, vector<bool>& tempVis){
        vis[i] = true;
        tempVis[i] = true;
        for(int u:adj[i]){
            if(tempVis[u]){
                return true;
            }else if(!vis[u]){
                if(dfs(u,numCourses,adj,vis,tempVis)){
                    return true;
                }
            }
        }
        
        tempVis[i] = false;
        return false; 
    }

    bool canFinish(int numCourses, vector<vector<int>>& arr) {
        vector<int> adj[numCourses];
        for(int i=0;i<arr.size();i++){
            adj[arr[i][1]].push_back(arr[i][0]);
        }
        vector<bool>vis(numCourses,false);
        vector<bool>tempVis(numCourses,false);

        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(dfs(i,numCourses,adj,vis,tempVis)){
                    return false;
                }
            }
        }
        return true;
    }
};

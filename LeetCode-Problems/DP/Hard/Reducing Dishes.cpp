class Solution {
public:
    int solve(int i,int n,vector<int>& arr,int time,vector<vector<int>>& dp){
        if(i==n){
            return 0;
        }
        if(dp[i][time]!=-1){
            return dp[i][time];
        }
        int take = arr[i]*time + solve(i+1,n,arr,time+1,dp);
        int notTake = solve(i+1,n,arr,time,dp);
        return dp[i][time] = max(take,notTake);
    }

    int maxSatisfaction(vector<int>& arr) {
        
        int n = arr.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        sort(arr.begin(),arr.end());
        return solve(0,n,arr,1,dp);
    }
};

#define ll long long int
class Solution {
public:

    int Binary_Search(int i,vector<vector<int>>& events,int val){
        int low = i;
        int high = events.size()-1;
        int ind = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(events[mid][0]>val){
                ind = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ind;
    }

    int solve(vector<vector<int>>& events,int k,int i,vector<vector<ll>>& dp){
        if(i>=events.size() || i==-1) return 0;
        if(k<=0) return 0;
        if(dp[i][k]!=-1) return dp[i][k];
        int ind = Binary_Search(i+1,events,events[i][1]);
        // Values
        int pick = events[i][2]+ solve(events,k-1,ind,dp);
        int nonPick = solve(events,k,i+1,dp);
        return dp[i][k] = max(pick,nonPick);
    }

    int maxValue(vector<vector<int>>& events, int k) {
    int n = events.size();
    sort(events.begin(),events.end());
    vector<vector<ll>>dp(n+1,vector<ll>(k+1,-1));
    int ans = solve(events,k,0,dp);
    return ans;
    }
};

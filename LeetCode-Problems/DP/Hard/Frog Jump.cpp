class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();

        int maxDistance[2001] = {0};
        bool dp[2001][2001] = {false};
        dp[0][0] = true;

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int distance = abs(stones[i]-stones[j]);

                if(distance>maxDistance[i]+1) break;

                if(dp[i][distance] || dp[i][distance+1] || distance > 0 and dp[i][distance-1]){
                    
                    if(j==n-1) return true;

                    dp[j][distance] = true;
                    maxDistance[j] = max(maxDistance[j],distance);
                }
            }
        }

        return false;
    }
};

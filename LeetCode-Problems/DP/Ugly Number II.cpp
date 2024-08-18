class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>dp(n+1);
        dp[1] = 1;
        int t2 = 1; 
        int t3 = 1; 
        int t5 = 1; 

        for(int i=2;i<=n;i++){
            int second = dp[t2]*2;
            int third = dp[t3]*3;
            int fifth = dp[t5]*5;
            dp[i] = min({second,third,fifth});
            if(dp[i]==second){
                t2++;
            }
            if(dp[i]==third){
                t3++;
            }
            if(dp[i]==fifth){
                t5++;
            }
        }
        return dp[n];
    }
};

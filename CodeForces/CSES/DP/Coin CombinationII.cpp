#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

int main()
{
    int n, x;
    // int MOD = 1e9;
    cin >> n >> x;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<vector<int>>dp(n+1,vector<int>(x+1));

    for (int i = 0; i < n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int sum = 1; sum <= x; sum++)
        {
            int skip = dp[i + 1][sum];

            int pick=0;

            if(a[i]<=sum){
                pick=dp[i][sum-a[i]];
            }

            dp[i][sum] = (skip+pick) % MOD;
        }
    }

    cout<<dp[0][x]<<endl;
    return 0;
}
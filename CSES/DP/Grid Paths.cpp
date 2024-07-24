#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int MOD = 1e9 + 7;
    int n;
    cin >> n;
    vector<vector<int>> dp(n, vector<int>(n, 0));
    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        string row;
        cin >> row;
        for (int j = 0; j < n; j++)
        {
            if (row[j] == '.')
            {
                if (i > 0)
                {
                    (dp[i][j] += dp[i - 1][j]) %= MOD;
                }
                if (j > 0)
                {
                    (dp[i][j] += dp[i][j - 1]) %= MOD;
                }
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    cout << dp[n - 1][n - 1] << endl;
}

int main()
{
    solve();
}    

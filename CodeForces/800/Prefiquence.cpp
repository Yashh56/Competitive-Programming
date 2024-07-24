#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, m;
        cin >> n >> m;
        vector<char> a(n + 1), b(m + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= m; i++)
        {
            cin >> b[i];
        }
        vector<int> dp(m + 1);
        dp[1] = (a[1] == b[1] ? 1 : 0);
        for (int i = 2; i <= m; i++)
        {
            if (dp[i - 1] != n && b[i] == a[dp[i - 1] + 1])
            {
                dp[i] = dp[i - 1] + 1;
            }
            else
            {
                dp[i] = dp[i - 1];
            }
        }
        cout << dp[m] << endl;
    }
}
#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n + 1), b(n + 1), dp1(n + 1, 0), dp2(n + 1, 0);

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    for (int i = 1; i <= n; i++)
    {
        dp1[i] = max(dp1[i - 1], a[i] + dp2[i - 1]);
            dp2[i] = max(dp2[i - 1], b[i] + dp1[i - 1]);
    }

    cout << max(dp1[n], dp2[n]) << endl;

    return 0;
}
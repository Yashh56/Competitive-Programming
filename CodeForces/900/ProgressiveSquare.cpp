#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int c[n * n], d[n * n], e[n], f = INT_MAX;
        for (int i = 0; i < (n * n); i++)
        {
            cin >> c[i];
            e[i] = 0;
        }
        sort(c, c + (n * n));
        f = c[0];
        int ff = 0;
        for (int i = 0; i < n; i++)
        {
            e[i] = (f + (i * b));
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                d[i * n + (j)] = (e[i] + (a * j));
            }
        }
        sort(d, d + (n * n));
        for (int i = 0; i < (n * n); i++)
        {
            if (c[i] != d[i])
            {
                ff = 1;
                break;
            }
        }
        if (ff == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
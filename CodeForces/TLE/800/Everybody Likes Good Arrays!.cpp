#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] %2!=0 and a[i + 1] % 2!=0)
        {
            cnt++;
        }

        if (!(a[i] & 1) and !(a[i + 1] & 1))
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}
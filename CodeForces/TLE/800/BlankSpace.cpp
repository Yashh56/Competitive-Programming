#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt++;
        }
        else
        {
            ans = max(cnt, ans);
            cnt = 0;
        }
    }
    cout << max(ans,cnt) << endl;
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
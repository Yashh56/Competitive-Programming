#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll ans = 0, pos = 0, neg = 0;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == -1)
            neg++;
        else
            pos++;
    }

    while (!((pos - neg) >= 0 and neg % 2 == 0))
    {
        neg--;
        pos++;
        ans++;
    }
    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}
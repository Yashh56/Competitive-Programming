#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swap(arr[0], arr[1]);
    swap(arr[n - 1], arr[0]);

    if (arr[0] == arr[1])
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << nline;
    }
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
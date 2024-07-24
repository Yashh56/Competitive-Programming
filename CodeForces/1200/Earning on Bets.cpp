#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define sp ' '
#define pi 2 * acos(0.0)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

// Control Flow
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b) - 1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a) - 1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)
// #define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

// Types
#define ui unsigned int
#define us unsigned short
#define ull unsigned long long
#define ll long long
#define ld long double
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<pair<int, int>>
#define pii pair<int, int>

// Utils
#define len(x) int((x).size())
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()

void solve()
{
    ll n;
    cin >> n;
    vll a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll lc = a[0];

    for (int i = 1; i < n; i++)
    {
        lc = lc * ((a[i])) / gcd(lc, a[i]);
    }

    ll ans[n];
    ll sum = 0;
    ll minn = 1e12;

    for (int i = 0; i < n; i++)
    {
        ans[i] = lc / a[i];
        sum += ans  [i];
        minn = min(minn, a[i] * ans[i]);
    }

    if (sum < minn)
    {
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << nl;
    }
    else
    {
        cout << -1 << nl;
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
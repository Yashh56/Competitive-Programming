#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define sp ' '
#define pi 2 * acos(0.0)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define z cout << 0 << endl;

// Control Flow
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b) - 1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a) - 1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

// Types
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define RFOR(i, a, b) for (int(i) = (a) - 1; (i) >= (b); --(i))
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
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve()
{
    ll x, n;
    cin >> x >> n;
    if (n % 4 == 0)
    {
        cout << x;
        return;
    }

    ll t = n % 4;
    ll d = (n / 4) * 4;

    FOR(i, 1, t + 1)
    {
        if (x & 1)
        {
            x += d + i;
        }
        else
        {
            x -= d + i;
        }
    }
    cout << x;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
        cout<<nl;
    }
    return 0;
}
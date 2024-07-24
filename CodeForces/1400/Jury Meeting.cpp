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
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }

// const int MOD = 1e9 + 7;
const int MOD = 998244353;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (int &i : a)
        cin >> i;
    int mx = *max_element(a.begin(), a.end());
    int cnt = count(a.begin(), a.end(), mx);
    int k = count(a.begin(), a.end(), mx - 1);
    int ans = 1, sub = 1;
    for (ll i = 1; i <= n; i++)
    {
        ans = ans * i % MOD;
        if (i != k + 1)
            sub = sub * i % MOD;
    }

    if (cnt == 1)
        ans = (ans - sub + MOD) % MOD;

    cout << ans << nl;
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
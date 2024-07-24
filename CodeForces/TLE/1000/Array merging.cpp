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

int maxx(vi &a, vi &fa, int n, int p)
{
    for (int i = 2; i <= n; ++i)
    {
        if (a[i] != a[i - 1])
        {
            fa[a[i - 1]] = max(fa[a[i - 1]], i - p);
            p = i;
        }
    }
    return fa[a[n]] = max(fa[a[n]], n - p + 1);
}

void solve()
{
    int n;
    cin >> n;
    vi a(n + 1);
    vi b(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }

    vi fa(n + n + 1);
    vi fb(n + n + 1);
    int p = 1;

    maxx(a, fa, n, p);
    p = 1;
    maxx(b, fb, n, p);

    int ans = 0;

    for (int i = 1; i <= n + n; i++)
    {
        ans = max(ans, fa[i] + fb[i]);
    }

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
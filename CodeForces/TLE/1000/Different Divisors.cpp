#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define sp ' '
#define pi 2 * acos(0.0)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define Yash                    \
    cin.sync_with_stdio(false); \
    cin.tie(0);                 \
    cout.tie(0)

// Control Flow
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b) - 1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a) - 1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)
#define fr(i, n) for (int i = 0; i < (n); i++)
// #define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

// Types
#define ui unsigned int
#define int long long int
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

int GCD(int a, int b)
{
    return b == 0 ? a : GCD(b, a % b);
}

int power(int x, int y, int MOD)
{
    if (y == 0)
    {
        return 1;
    }
    if (y % 2 == 0)
    {
        return power((x * x) % MOD, y / 2, MOD) % MOD;
    }
    else
    {
        return (x * power((x * x) % MOD, (y - 1) / 2, MOD) % MOD) % MOD;
    }
}

void solve()
{
    int n;
    cin >> n;
    vi p;
    for (int i = n+1; ; i++)
    {
        int t = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                t = 0;
                break;
            }
        }
        if (t)
        {
            p.push_back(i);
            break;
        }
    }
    for (int i = p.back() + n;; i++)
    {
        int t = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                t = 0;
                break;
            }
        }
        if (t)
        {
            p.push_back(i);
            break;
        }
    }
    cout << min(1ll * p[0] * p[1], 1ll * p[0] * p[0] * p[0]) << nl;
}

int32_t main()
{
    Yash;
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}
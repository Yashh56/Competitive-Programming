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
// #define int long long int
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

const int MAXN = 300005;

void solve()
{

    int n, x;
    cin >> n >> x;
    int a[MAXN];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int num_min = a[1];
    int num_max = a[1];
    int res = 0;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] > num_max)
        {
            num_max = a[i];
        }
        if (a[i] < num_min)
        {
            num_min = a[i];
        }
        if (num_max - num_min > 2 * x)
        {
            res++;
            num_min = num_max = a[i];
        }
    }
    cout << res << nl;
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
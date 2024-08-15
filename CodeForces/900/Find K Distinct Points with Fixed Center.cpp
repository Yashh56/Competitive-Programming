// Author : Yashh56

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
// #define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

// Types
#define ui unsigned int
#define us unsigned short
#define ull unsigned long long
#define ll long long
#define ld long double
#define int long long
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

// Utils
#define len(x) int((x).size())
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
// const int MOD = 1e9 + 7;
int GCD(int a, int b)
{
    return b == 0 ? a : GCD(b, a % b);
}

const int mod = 1e9 + 7;

int power(int x, int y, int MOD = mod)
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

int inverse(int n, int p)
{
    return power(n, p - 2, p);
}

const int MAX = 200'007;

/////////////////////////////////////////////////// SOLUTION HERE ////////////////////////////////////////////////////

void solve()
{
    int xc, yc, k;
    cin >> xc >> yc >> k;

    vector<pair<int, int>> points;

    int half = k / 2;
    int extra = k % 2;

    for (int i = 0; i < half; ++i)
    {
        points.push_back({xc + i + 1, yc + i + 1});
    }

    for (int i = 0; i < half + extra; ++i)
    {
        points.push_back({xc - i - 1, yc - i - 1});
    }

    int sum_x = 0, sum_y = 0;
    for (const auto &point : points)
    {
        sum_x += point.first;
        sum_y += point.second;
    }

    int adjust_x = xc * k - sum_x;
    int adjust_y = yc * k - sum_y;

    points.back().first += adjust_x;
    points.back().second += adjust_y;

    for (const auto &point : points)
    {
        cout << point.first << " " << point.second << "\n";
    }
}

int32_t main()
{
    Yash;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

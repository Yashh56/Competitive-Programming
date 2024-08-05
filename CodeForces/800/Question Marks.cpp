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
/////////////////////////////////////////////////// SOLUTION HERE ////////////////////////////////////////////////////

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cntA = 0, cntB = 0, cntC = 0, cntD = 0, cnt = 0;
        for (char c : s)
        {
            if (c == 'A')
                cntA++;
            else if (c == 'B')
                cntB++;
            else if (c == 'C')
                cntC++;
            else if (c == 'D')
                cntD++;
            else
                cnt++;
        }

        int ansA = max(0, n - cntA);
        int ansB = max(0, n - cntB);
        int ansC = max(0, n - cntC);
        int ansD = max(0, n - cntD);

        int ansTotal = ansA + ansB + ansC + ansD;

        int ans = 4 * n - ansTotal;

        cout << ans << nl;
    }
}

int main()
{
    Yash;
    solve();
    return 0;
}

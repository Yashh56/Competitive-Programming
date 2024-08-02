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
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0;
    map<char, int> m;
    for (char i : s)
    {
        m[i]++;
    }

    for (auto it : m)
    {
        if (it.second % 2)
        {
            cnt++;
        }
    }

    if (n - k == 0 || cnt > k + 1)
    {
        no;
    }
    else
    {
        yes;
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
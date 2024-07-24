#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define sp ' '
#define pi 2 * acos(0.0)

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

// Constants
const ll MOD = 1e9 + 7;

void solve()
{
    int a, b;
    int xk, yk;
    int xq, yq;
    cin >> a >> b;
    cin >> xk >> yk;
    cin >> xq >> yq;

    vii dis = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};
    set<pii> s1, s2;

    for (auto d : dis)
    {
        int x = xk + d.first;
        int y = yk + d.second;

        s1.insert({x, y});

        x = xq + d.first;
        y = yq + d.second;

        s2.insert({x, y});
    }

    int cnt = 0;

    for (auto i : s1)
    {
        if (s2.find(i) != s2.end())
        {
            cnt++;
        }
    }

    cout << cnt << endl;
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

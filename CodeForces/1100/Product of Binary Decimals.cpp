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

const int MAX = 100'007;
const int MOD = 1'000'000'007;

vector<int> binary_decimals;

bool ok(int n)
{

    if (n == 1)
        return true;
    bool ans = false;
    for (int i : binary_decimals)
    {
        if (n % i == 0)
        {
            ans |= ok(n / i);
        }
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    cout << (ok(n) ? "YES\n" : "NO\n");
}

int main()
{
    for (int i = 2; i < MAX; i++)
    {
        int curr = i;
        bool bad = false;
        while (curr)
        {
            if (curr % 10 > 1)
            {
                bad = true;
                break;
            }
            curr /= 10;
        }
        if (!bad)
        {
            binary_decimals.push_back(i);
        }
    }
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}
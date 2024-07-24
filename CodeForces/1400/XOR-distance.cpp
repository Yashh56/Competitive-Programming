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

bool get_bit(int64_t a, int i)
{
    return a & (1ll << i);
}
const int maxb = 60;
int32_t main()
{
    Yash;
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b, r;
        cin >> a >> b >> r;
        int64_t x = 0;
        bool first_bit = 1;
        if (a > b)
        {
            swap(a, b);
        }
        for (int i = maxb - 1; i >= 0; i--)
        {
            bool bit_a = get_bit(a, i);
            bool bit_b = get_bit(b, i);
            if (bit_a != bit_b)
            {
                if (first_bit)
                {
                    first_bit = 0;
                }
                else
                {
                    if (!bit_a and x + (1ll << i) <= r)
                    {
                        x += (1ll << i);
                        a ^= (1ll << i);
                        b ^= (1ll << i);
                    }
                }
            }
        }
        cout << b - a << nl;
    }
}
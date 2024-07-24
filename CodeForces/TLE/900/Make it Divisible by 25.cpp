#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define sp ' '
#define pi 2 * acos(0.0)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define z cout << 0 << endl;

// Control Flow
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b) - 1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a) - 1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

// Types
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define RFOR(i, a, b) for (int(i) = (a) - 1; (i) >= (b); --(i))
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
#define FIO                      \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
const int INF = 100;

int solve(string s, string &t)
{
    int ans = 0, sptr = s.length() - 1;

    while (sptr >= 0 and s[sptr] != t[1])
    {
        sptr--;
        ans++;
    }

    if (sptr < 0)
        return INF;
    sptr--;

    while (sptr >= 0 and s[sptr] != t[0])
    {
        sptr--;
        ans++;
    }

    return sptr < 0 ? INF : ans;
}

int main()
{
    int t;
    cin >> t;
    string subseq[] = {"00", "25", "50", "75"};
    while (t-- > 0)
    {
        string n;
        cin>>n;
        int ans = INF;
        for(auto i : subseq){
            ans = min(ans,solve(n,i));
        }
        cout<<ans<<nl;
    }
}
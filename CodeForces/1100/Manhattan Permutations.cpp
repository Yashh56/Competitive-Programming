#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define sp ' '
#define pi 2 * acos(0.0)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define Yash cin.sync_with_stdio(false); cin.tie(0); cout.tie(0)

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

void solve()
{
    int n, k;
    cin >> n >> k;
    if (k % 2)
    {
        no;
        return;
    }
    vi a(n);
    fr(i, n) a[i] = i + 1;
    reverse(all(a));

    int ans = 0;
    fr(i, n) ans += abs(a[i] - (i + 1));
    if (k > ans)
    {
        no;
        return;
    }
    yes;
    reverse(all(a));
    ans = 0;
    int minusNow = (n + n - 2);
    int i = 0;
    int j = n - 1;
    while (ans != k)
    {
        if (minusNow <= (k - ans))
        {
            ans += minusNow;
            minusNow -= 4;
            swap(a[i], a[j]);
            i++;
            j--;
        }
        else
        {
            minusNow -= 2;
            i++;
        }
    }
    ans = 0;
    fr(i, n) ans += abs(a[i] - (i + 1));
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << nl;
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
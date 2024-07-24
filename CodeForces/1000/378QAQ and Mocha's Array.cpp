#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ull unsigned long long
#define nl '\n'
#define PI 3.1415926535897932384626
#define MOD 998244353 // 1000000007
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define pb push_back
#define eb emplace_back
#define mp(a, b) make_pair(a, b)
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define mk(arr, n, type) type *arr = new type[n];
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define FORE(i, a, b) for (int(i) = (a); (i) <= (b); ++(i))
#define RFOR(i, a, b) for (int(i) = (a) - 1; (i) >= (b); --(i))
#define FORALL(i, a) for (auto &(i) : (a))
#define printall(a)       \
    for (auto &(i) : (a)) \
    cout << i << ' '
#define print(a) cout << a << '\n'
#define rsort(a) sort((a).rbegin(), (a).rend())
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define all(c) (c).begin(), (c).end()
#define sz(c) (int)(c).size()
#define pqmx priority_queue<int>
#define pqmn priority_queue<int, vector<int>, greater<int>>
#define max3(a, b, c) max((a), max((b), (c)))
#define min3(a, b, c) min((a), min((b), (c)))
#define mx_all(c) *max_element((c).begin(), (c).end())
#define mn_all(c) *min_element((c).begin(), (c).end())
#define lwr_b(c, a) lower_bound((c).begin(), (c).end(), (a)) - ((c).begin())
#define upr_b(c, a) upper_bound((c).begin(), (c).end(), (a)) - ((c).begin())
#define Yash                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define yes cout << "Yes" << nl
#define no cout << "No" << nl
#define YES cout << "YES" << nl
#define NO cout << "NO" << nl
const int N = 1e5 + 10;
int a[N];
void solve()
{
    int fl = 0;
    int n;
    cin >> n;
    // vi a(1e9+10);
    FORE(i, 1, n)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            fl = 1;
        }
    }
    if (fl)
        yes;
    else
    {
        sort(a + 1, a + 1 + n);
        vi b;
        FORE(i, 2, n)
        {
            if (a[i] % a[1])
            {
                b.push_back(a[i]);
            }
        }
        sort(all(b));
        n = b.size();
        FOR(i, 1, n)
        {
            if (b[i] % b[0])
            {
                fl = 1;
                break;
            }
        }
        if (!fl)
            yes;
        else
            no;
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
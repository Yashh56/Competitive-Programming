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

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (auto &i : a)
    {
        cin >> i;
    }

    if (is_sorted(a.begin(), a.end()))
    {
        cout << 0 << nl;
        return;
    }

    int pre_max = 0, mx = 0, s = 0;

    for (int i = 0; i < n; i++)
    {
        // if (a[i] > a[i + 1])
        // {
        //     cnt++;
        // }

        pre_max = max(pre_max, a[i]);
        int temp = pre_max - a[i];
        s += temp;
        mx = max(mx, temp);
    }

    cout << s + mx << nl;
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
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define maybe cout << "MAYBE" << endl;

void solve()
{
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    int fv = a[f - 1];
    sort(a.begin(), a.end(), greater<int>());

    int cnt = count(a.begin(), a.end(), fv);
    int pos = find(a.begin(), a.end(), fv) - a.begin();

    if (pos < k && pos + cnt <= k)
    {
        yes;
    }
    else if (pos >= k)
    {
        no;
    }
    else
    {
        maybe;
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
    return 0;
}
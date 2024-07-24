#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    if (!(n & 1))
        cout << "YES" << endl;
    else if (n % k == 0)
        cout << "YES" << endl;
    else if ((n - k) % 2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
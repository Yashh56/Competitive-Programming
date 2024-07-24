#include <bits/stdc++.h>

using namespace std;

// 10 2
// 2
// 7 3

void solve()
{
    int x, k;
    cin >> x >> k;

    if (x%k)
    {
        cout << 1 << endl;
        cout << x << endl;
    } else{
        cout<<2<<endl;
        cout<<x-1<<" "<<1<<endl;
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
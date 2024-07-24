#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        long long s;
        cin >> s;
        cout << n + 1 - s << " ";
    }
    cout<<endl;
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
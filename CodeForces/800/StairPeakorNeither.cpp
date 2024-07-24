#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a < b < c)
        cout << "STAIR" << endl;
    if (a < b > c)
        cout << "PEEK" << endl;
    else
        cout << "NONE" << endl;
    ;
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
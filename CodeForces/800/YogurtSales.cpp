#include <bits/stdc++.h>
 
using namespace std;
 
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int total = (n / 2) * min(2 * a, b) + (n % 2) * a;
    cout << total << endl;
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
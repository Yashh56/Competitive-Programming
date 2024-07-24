#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int x, y;

    cin >> x >> y;
    cout << (1 << __builtin_ctz(x ^ y)) << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
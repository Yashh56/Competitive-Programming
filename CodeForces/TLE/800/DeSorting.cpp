#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int diff = 1e9;
    vector<int> arr(n);
    bool sorted = true;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (i > 0)
        {
            diff = min(arr[i] - arr[i - 1], diff);
            sorted &= arr[i] >= arr[i - 1];
        }
    }
    if (!sorted)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << diff / 2 + 1 << endl;
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
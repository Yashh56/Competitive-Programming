#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int xor_val = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int x : arr)
    {
        xor_val ^= x;
    }
    if (xor_val == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if (n % 2 == 1)
        {
            cout << xor_val << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int arr[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    if (arr[2] % 2 == 0)
    {
        if (arr[0] > arr[1])
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
    else
    {
        if (arr[1] > arr[0])
            cout << "Second" << endl;
        else
            cout << "First" << endl;
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
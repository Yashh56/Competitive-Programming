#include <bits/stdc++.h>

using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1)
    {
        yes;
        cout<<n<<endl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
    else
    {
        if (k >= 2 and n % 2 == 0)
        {
            yes;
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++)
            {
                cout << 2 << " ";
            }
            cout << endl;
        }
        else if (k >= 3)
        {
            yes;
            cout << n / 2 << '\n'
                 << 3 << " ";
            for (int i = 1; i < n / 2; i++)
            {
                cout << 2 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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
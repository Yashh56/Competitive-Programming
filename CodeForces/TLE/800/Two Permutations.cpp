#include <bits/stdc++.h>

using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (n == a and n == b)
        {
            yes;
        }
        else if (a + b < n - 1)
        {
            yes;
        }
        else
        {
            no;
        }
    }
}
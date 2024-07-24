#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        string n;
        cin >> n;
        cout << 9 * ((int)(n).size() - 1) + n[0] - '0' << endl;
    }
}

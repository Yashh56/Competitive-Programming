#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        cnt += (s[i] == '@');
        if (s[i] == '*' and s[i - 1] == '*')
        {
            break;
        }
    }
    cout << cnt << endl;
}

int main()
{
    int t;
    cin>>t;
    while (t-- > 0)
    {
        solve();
    }
}
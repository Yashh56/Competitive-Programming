#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
     cin >> n;
    string s;
    cin >> s;
    int l = 0;
    int r = n-1;
    int cnt = n;
    while (s[l] != s[r] && cnt>0)
    {
        l++;
        r--;
        cnt -= 2;
    }
    cout << cnt << endl;
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
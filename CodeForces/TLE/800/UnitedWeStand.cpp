#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> inp;
    inp.assign(n, 0);
    for (auto &x : inp)
        cin >> x;
    sort(inp.begin(), inp.end());
    if (inp.back() == inp[0])
    {
        cout << "-1\n";
        return;
    }
    else
    {
        int it = 0;
        while (inp[it] == inp[0])
            it++;
        cout << it << " " << n - it << "\n";
        for (int i = 0; i < it; i++)
            cout << inp[i] << " ";
        for (int i = it; i < n; i++)
            cout << inp[i] << " ";
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
    return 0;
}
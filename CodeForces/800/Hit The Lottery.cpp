#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int a[] = {100, 20, 10, 5, 1};

    for (int i = 0; i < 5; i++)
    {
        ans += n / a[i];
        n = n % a[i];
    }
    cout << ans << endl;
}
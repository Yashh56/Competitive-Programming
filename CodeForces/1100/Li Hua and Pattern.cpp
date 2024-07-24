#include <bits/stdc++.h>
#define rep(x, y, z) for (int x = (y); x <= (z); x++)
#define per(x, y, z) for (int x = (y); x >= (z); x--)
#define debug(format...) fprintf(stderr, format)
#define fileIO(s)                       \
    do                                  \
    {                                   \
        freopen(s ".in", "r", stdin);   \
        freopen(s ".out", "w", stdout); \
    } while (false)
using namespace std;
typedef long long ll;
const int N = 1e3 + 5;

int T, n, k, a[N][N];
template <typename T>
void chkmin(T &x, T y)
{
    if (x > y)
        x = y;
}
template <typename T>
void chkmax(T &x, T y)
{
    if (x < y)
        x = y;
}

int main()
{
    for (scanf("%d", &T); T; T--)
    {
        scanf("%d%d", &n, &k);
        rep(i, 1, n) rep(j, 1, n) scanf("%d", &a[i][j]);
        int diff = 0;
        rep(i, 1, n) rep(j, 1, n) if (a[i][j] != a[n + 1 - i][n + 1 - j])++ diff;
        diff /= 2;
        if (diff > k)
            puts("NO");
        else
        {
            k -= diff;
            if (n & 1)
                puts("YES");
            else if (k & 1)
                puts("NO");
            else
                puts("YES");
        }
    }
    return 0;
}
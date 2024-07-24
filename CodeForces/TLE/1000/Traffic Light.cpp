#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define sp ' '
#define pi 2 * acos(0.0)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

// Control Flow
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b) - 1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a) - 1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)
// #define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

// Types
#define ui unsigned int
#define us unsigned short
#define ull unsigned long long
#define ll long long
#define ld long double
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<pair<int, int>>
#define pii pair<int, int>

// Utils
#define len(x) int((x).size())
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()

void solve()
{
    int n;
    char ch;
    string s;
    cin >> n >> ch;
    cin >> s;
    if (ch == 'g')
    {
        cout << 0 << nl;
        return;
    }
    int first = -1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'g')
        {
            first = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ch)
        {
            int cnt=0,flag=0;
            for(int j=i+1;j<n;j++){
                cnt++;
                if(s[j]=='g'){
                    flag++;
                    break;
                }
            }
            i+=cnt;
            if(flag){
                ans=max(cnt,ans);
            }else{           
                ans=max(cnt+1+first,ans);
            }
        }
    }
    cout<<ans<<nl;
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

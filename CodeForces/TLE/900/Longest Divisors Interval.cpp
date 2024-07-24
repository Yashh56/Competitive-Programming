#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define sp ' '
#define pi 2 * acos(0.0)

// Control Flow
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)
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

// Constants
const ll MOD = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;
    ll ans =-1ll;
    for(ll i=1;i<100;i++){
        if(n>=1){
            ll res =0;
            for(ll j=1;j<=i;j++){
                if(n%j==0){
                    res++;
                } else{
                    ans=max(ans,res);
                    res=0;
                }
            }
            ans=max(ans,res);
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

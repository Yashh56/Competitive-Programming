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
#define pp pair<ll, ll>

// Utils
#define len(x) int((x).size())
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }

bool cmp(pp a, pp b)
{
    if (a.first > b.first)
    {
        return true;
    }
    else if (a.first == b.first)
    {
        return a.second < b.second;
    }
    else
    {
        return false;
    }
}

int main()
{
    ll i, j, k;
    ll n, d;
    ll p, t;
    map<pp, ll> mp;

    cin >> n >> d;
    pp a[n];

    for(i=0;i<n;i++){
        cin>>p>>t;
        a[i]=make_pair(p,t);
        mp[a[i]]++;
    }
    sort(a,a+n,cmp);
    cout<<mp[a[d-1]]<<nl;
}
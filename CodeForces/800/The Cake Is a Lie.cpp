#include <bits/stdc++.h>

using namespace std;

string solve(){
    int n,m,k;
    cin>>n>>m>>k;
    if((n*m)-1==k){
        return "YES";
    }
    return "NO";
}


int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        cout<<solve()<<endl;
    }
}
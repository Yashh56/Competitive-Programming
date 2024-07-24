#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i && a.back() > x){
            a.push_back(1);
        }
        a.push_back(x);
    }
    cout<<a.size()<<endl;

    for(int el: a){
        cout<<el<<" ";
    }
}

int32_t main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}
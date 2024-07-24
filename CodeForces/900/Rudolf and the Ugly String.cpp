#include <bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>a;
    for(string ss : {"mapie","pie","map"}){
        for(int pos =0;(pos=s.find(ss,pos)) != string::npos;){
            s[pos+ss.length()/2] = '?';
            a.push_back(pos+ss.length()/2);
        }
    }

    cout<<a.size()<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
}
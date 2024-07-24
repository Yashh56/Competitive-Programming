#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(d>=b and (a-b)>=(c-d)){
        cout<<(d-b)+(a+d-b-c)<<endl;
    } else{
        cout<<-1<<endl;
    }
}


int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
}
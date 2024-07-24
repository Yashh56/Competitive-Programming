#include <bits/stdc++.h>
using namespace std;

void print(int n){
     if(n==1) cout<<"##";
    else cout<<"..";
}

void solve(){
    int n;
    cin>>n;
    for(int i=0;i<2*n;i++){
        for(int j=0;j<n;j++){
            if((i/2+j)%2==0){
                print(1);
            } else{
                print(0);
            }
        }
        cout<<endl;
    }
}


int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
}
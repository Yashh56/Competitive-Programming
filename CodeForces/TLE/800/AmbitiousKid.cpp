#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long  mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        long long t;
        cin>>t;
        if(t==0){
            mini=0;
            break;
        }
        mini=min(mini,abs(t));
    }
    cout<<mini<<endl;
    }

int main()
{
    solve();
}

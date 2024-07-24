#include <bits/stdc++.h>

using namespace std;

int solve()
{
    int n;
    cin >> n;
    int arr[n];
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum+=arr[i]==2;
    }
    long long total=0;
    for (int i = 0; i < n; i++)
    {
        total+=arr[i] == 2;
        if(total==sum-total) return i+1;
    }
    return -1;
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
#include <bits/stdc++.h>

using namespace std;

int MinCostClimbingStairs(vector<int> &cost)
{
    int n = cost.size();
    int k1 = cost[0];
    int k2 = cost[1];
    int ans = min(k1, k2);

    for (int i = 2; i < n; i++)
    {
        ans = cost[i] + min(k1, k2);
        k1 = k2;
        k2 = ans;
    }

    return min(k1, k2);
}
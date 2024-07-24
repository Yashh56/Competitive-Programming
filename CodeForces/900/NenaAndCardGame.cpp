#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
 
        vector<int> cards(n);
        map<int, int> count;
 
        for (int i = 0; i < n; i++)
        {
            cin >> cards[i];
            count[cards[i]]++;
        }
 
        int my_score = 0;
        map<int, int> table;
 
        for (auto &entry : count)
        {
            int card = entry.first;
            int cnt = entry.second;
 
            if (cnt == 2)
            {
                my_score++;
                count[card]--;
            }
        }
 
        for (auto &entry : count)
        {
            int card = entry.first;
            int cnt = entry.second;
 
            while (cnt--)
            {
                if (table[card] > 0)
                {
                    my_score++;
                }
                table[card]++;
            }
        }
 
        cout << my_score << "\n";
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}
#define ll long long int
class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> bannedSet(banned.begin(), banned.end());
        ll sum = 0;
        ll cnt = 0;

        for (int i = 1; i <= n; i++) {
            if (bannedSet.count(i))
                continue;
            sum += i;
            if (sum > maxSum)
                break;
            cnt++;
        }
        return cnt;
    }
};

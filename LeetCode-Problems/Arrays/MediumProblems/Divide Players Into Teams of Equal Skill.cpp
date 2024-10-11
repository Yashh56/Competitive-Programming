#define ll long long int
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        sort(skill.begin(), skill.end());
        ll check = skill[0] + skill[n - 1];
        cout << check << endl;
        ll prod = 0;
        int i = 0;
        int j = n - 1;
        while (i <= j) {
            if (skill[i] + skill[j] != check) {
                return -1;
            } else {
                prod += skill[i] * skill[j];
                i++;
                j--;
            }
        }
        return prod;
    }
};

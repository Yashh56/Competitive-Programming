class Solution {
public:
    int minDifference(vector<int>& a) {
        sort(a.begin(),a.end());
        int mini = INT_MAX;
        int n = a.size();

        if(n<=4) return 0;

        mini = min(mini,a[n-4]-a[0]);
        mini = min(mini,a[n-1]-a[3]);
        mini = min(mini,a[n-2]-a[2]);
        mini = min(mini,a[n-3]-a[1]);

        return mini;
    }
};

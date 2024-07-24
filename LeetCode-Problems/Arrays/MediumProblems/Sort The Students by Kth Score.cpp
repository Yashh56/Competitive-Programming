class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& a, int k) {
        int n = a.size();
        int m = a[0].size();
        sort(a.begin(),a.end(),[k](vector<int>i,vector<int>j){
            return i[k] > j[k];
        });
        return a;
    }
};

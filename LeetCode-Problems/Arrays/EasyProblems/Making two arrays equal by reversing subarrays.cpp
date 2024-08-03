class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& a) {
        sort(a.begin(),a.end());
        sort(target.begin(),target.end());
        int n = target.size();
        int m = a.size();
        if(n!=m){
            return false;
        }

        for(int i=0;i<n;i++){
            if(a[i]!=target[i]){
                return false;
            }
        }
        return true;
    }
};

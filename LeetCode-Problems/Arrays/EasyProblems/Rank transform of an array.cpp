class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        map<int,int> mpp;
        vector<int> ans;
        int cnt = 1;
        for(auto i:arr){
            mpp[i]++;
        }
        for(auto i:mpp){
            mpp[i.first] = cnt;
            cnt++;
        }
        for(int i=0;i<n;i++){
            ans.push_back(mpp[arr[i]]);
        }
        return ans;
    }
};

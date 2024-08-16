class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n = arrays.size();
        int m = arrays[0].size();

        int maxi = -1e5;
        int mini = 1e5;
        int diff = 0;

        for(auto &arr: arrays){
            int temp =arr[0],back = arr.back();
            diff = max({diff,back-mini,maxi-temp});
            mini = min(temp,mini);
            maxi = max(back,maxi);
        }
        return diff;
    }
};

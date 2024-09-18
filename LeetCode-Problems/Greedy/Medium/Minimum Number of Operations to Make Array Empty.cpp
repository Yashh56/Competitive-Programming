class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto x:nums){
            mpp[x]++;
        }
        int cnt = 0;
        bool ok = false;
        for(auto x:mpp){
            if(x.second == 1){
                ok = true;
                break;
            }else{
                cnt+= ceil(x.second/3.0);
            }
        }
        if(ok){
            return -1;
        }
        return cnt;
    }
};

class Solution {
public:
    int solve(int n ,int ind, int target ,vector<int>& nums){
        if(ind==n){
            if(target==0) return 1;
            else return 0;
        }
        return solve(n,ind+1,target-nums[ind],nums)+solve(n,ind+1,target+nums[ind],nums);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
     return solve(nums.size(),0,target,nums);
    }
};

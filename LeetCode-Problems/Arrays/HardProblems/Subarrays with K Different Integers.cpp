class Solution {
public:
    int solve(vector<int>& nums,int k){
        int cnt = 0;
        int left = 0, right = 0;
        int n = nums.size();
        map<int,int>mp;

        while(right<n){
            mp[nums[right]]++;
            while(mp.size() > k and left<=right){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            cnt+=(right-left)+1;
            right++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        map<int,int>mp;
        map<int,int>last;
        int n = nums.size();

        int a = solve(nums,k);
        int b = solve(nums,k-1);

        return a-b;

    }
};

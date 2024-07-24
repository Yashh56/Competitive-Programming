class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
      int res=0;
      int n = nums.size();
      for(int i =0; i<n;i++){
        int low=-1;
        int high=res;
        while(low+1!=high){
            int mid=(low+high)/2;
            int temp=nums[mid];
            if(temp<nums[i]){
                low=mid;
            } else{
                high=mid;
            }
        }
        if(high==res){
            nums[res++] = nums[i];
        } else{
            nums[high] = nums[i];
        }
      }
      return res;
    }
};
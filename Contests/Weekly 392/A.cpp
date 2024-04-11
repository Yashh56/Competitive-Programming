class Solution {
public:
   int longestMonotonicSubarray(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        
        int longest = 1;
        int increasing_length = 1;
        int decreasing_length = 1;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                increasing_length++;
                decreasing_length = 1;
            } else if (nums[i] < nums[i - 1]) {
                decreasing_length++;
                increasing_length = 1;
            } else {
                increasing_length = 1;
                decreasing_length = 1;
            }
            
            longest = max(longest, max(increasing_length, decreasing_length));
        }
        
        return longest;
    }
};


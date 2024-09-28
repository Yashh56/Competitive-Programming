class Solution {
public:
    int minElement(vector<int>& nums) {
           int n = nums.size();
        for(int i = 0; i< n; i++)
        {
            int curr = nums[i];
            int sum = 0;
            while(curr)
            {
                int rem = curr%10;
                sum += rem;
                curr /= 10;
            }
            nums[i] = sum;
        }
        int res = *min_element(nums.begin(), nums.end());
        return res;
    }
};

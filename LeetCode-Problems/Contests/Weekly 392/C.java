class C {
    public long minOperationsToMakeMedianK(int[] nums, int k) {
        Arrays.sort(nums);
        
        int n = nums.length;
        int mid = n / 2;
        if (nums[mid] == k) 
            return 0;
        else if (nums[mid] > k) {
            long operations = 0;
            for (int i = mid; i >= 0; i--) {
                if (nums[i] >= k)
                    operations += nums[i] - k;
                else
                    break;
            }
            return operations;
        }
        else {
            long operations = 0;
            for (int i = mid; i < n; i++) {
                if (nums[i] <= k)
                    operations += k - nums[i];
                else
                    break;
            }
            return operations;
        }
    }
}
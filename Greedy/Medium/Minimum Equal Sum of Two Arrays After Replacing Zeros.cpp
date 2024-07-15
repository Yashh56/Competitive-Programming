class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long  sum1 = 0, sum2=0;
        long long zero1= 0, zero2 = 0;

        for(int i:nums1){
            if(i==0){
                zero1++;
            }
            sum1+=(long)i;
        }
        for(int i:nums2){
            if(i==0){
                zero2++;
            }
            sum2+=(long)i;
        }

        sum1+=zero1;
        sum2+=zero2;

        if((sum1<sum2 && zero1==0) || (sum2<sum1 && zero2==0)){
            return -1;
        }

        return max(sum1,sum2);    
    }
};

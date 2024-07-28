class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1 = 0,sum2 = 0;
        for(int &i:nums){
            if(i<10) sum1+=i;
            else sum2+=i;
        }
        return sum1!=sum2;
    }
};

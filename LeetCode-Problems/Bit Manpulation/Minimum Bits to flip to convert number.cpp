class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xor_val = start ^ goal;
        int res = 0;
        while(xor_val > 0){
            res+= xor_val & 1;
            xor_val >>=1;
        }
        return res;
    }
};

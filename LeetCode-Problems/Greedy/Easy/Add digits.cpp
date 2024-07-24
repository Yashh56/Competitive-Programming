class Solution {
public:
    int addDigits(int n) {
        int sum;
        while(n/10!=0){
            sum=0;
            while(n){
                sum+=n%10;
                n=n/10;
            }
            n=sum;
        }
        return n;
    }
};

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        long long int total = 0;

        for(int i:chalk){
            total+=i;
        }
        int rem = k % total;

        for(int i=0;i<n;i++){
            if(rem < chalk[i]){
                return i;
            }
            rem -= chalk[i];
        }
        return 0;
    }
};

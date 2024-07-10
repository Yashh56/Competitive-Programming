class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt = 0;
        for(const string& log:logs){
            if(log=="../"){
                if(cnt>0){
                    cnt--;
                }
            }else if(log != "./"){
                cnt++;
            }
        }
        return cnt;
    }
};

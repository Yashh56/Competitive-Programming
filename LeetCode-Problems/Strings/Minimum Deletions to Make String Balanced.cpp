class Solution {
public:
    int minimumDeletions(string s) {
        int res = 0, cnt = 0;

        for(char c:s){
            if(c=='b'){
                cnt++;
            }else if(cnt){
                res++;
                cnt--;
            }
        }
        return res; 
    }
};

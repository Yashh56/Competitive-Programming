class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mpp;
        for(auto x:tasks){
            mpp[x]++;
        }
        int cnt = 0;
        bool ok = false;
        for(auto x:mpp){
            if(x.second == 1){
                ok = true;
                break;
            }else{
                cnt+=ceil(x.second/3.0);
            }
        }
        
        cout<<cnt<<endl;
        if(ok){
            return -1;
        }
        return cnt;
    }
};

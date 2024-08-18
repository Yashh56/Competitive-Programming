class Solution {
public:
    int numRabbits(vector<int>& a) {
        unordered_map<int,int> mpp;
        for(auto i:a){
            mpp[i]++;
        }

        // for(auto i:mpp){
        //     cout<<i.first<<endl;
        //     cout<<i.second<<endl;
        // }
        // cout<<endl;
        
        int res = 0;
        for(auto i:mpp){
            int bucket = i.first+1;
            int freq = i.second;
            res+=(freq/bucket)*bucket;
            if(freq % bucket > 0) res+=bucket;
        }
        return res;
    }
};

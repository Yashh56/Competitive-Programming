class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mpp;
        for(auto& i:arr){
            mpp[i]++;
        }
        for(auto& i:arr){
            if(mpp[i]==1){
                k--;
                if(k==0) return i;
            }
        }
        return "";
    }
};

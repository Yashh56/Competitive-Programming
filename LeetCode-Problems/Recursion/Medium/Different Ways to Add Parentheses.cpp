class Solution {
public:

    unordered_map<string,vector<int>>mpp;

    vector<int> diffWaysToCompute(string ex) {
        if(mpp.find(ex) != mpp.end()){
            return mpp[ex];
        }
        int n = ex.size();
        vector<int>res;

        for(int i=0;i<n;i++){
            char ch = ex[i];

            if(ch == '*' || ch=='+' || ch == '-'){
                vector<int>left = diffWaysToCompute(ex.substr(0,i));
                vector<int>right = diffWaysToCompute(ex.substr(i+1));

                for(int l:left){
                    for(int r:right){
                        if(ch=='+'){
                            res.push_back(l+r);
                        }else if(ch == '-'){
                            res.push_back(l-r);
                        }else if(ch == '*'){
                            res.push_back(l*r);
                        }
                    }
                }
            }
        }

        if(res.empty()){
            res.push_back(stoi(ex));
        }
        mpp[ex] = res;

        return res;
    }
};

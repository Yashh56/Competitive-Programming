class Solution {
public:
    int minCostToMoveChips(vector<int>& a) {
        int n = a.size();
        int odd = 0,even = 0;
        for(int i=0;i<n;i++){
            if(a[i]%2){
                odd++;
            }else{
                even++;
            }
        }
        return min(odd,even);
    }
};

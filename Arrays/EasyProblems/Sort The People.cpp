class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();
       vector<string>str;
       vector<int> arr;
       arr = heights;
       sort(arr.begin(),arr.end());
       for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            if(arr[i]==heights[j]){
                str.push_back(names[j]);
            }
        }
       }
        return str;
    }
};

class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int>res(n,-1);
        vector<pair<int , int>> startIndices;
        for(int i=0;i<n;i++){
            startIndices.emplace_back(intervals[i][0],i);
        }
        sort(startIndices.begin(),startIndices.end());

        for(int i=0;i<n;i++){
            int cur = intervals[i][1];
            int left = 0;
            int right = n-1;
            int rightIntervalIndex = -1;

            while(left<=right){
                int mid = left + (right-left)/2;

                if(startIndices[mid].first >= cur){
                    rightIntervalIndex = startIndices[mid].second;
                    right = mid-1;
                }else{
                    left=mid+1;
                }
            }
            res[i] = rightIntervalIndex;
        }
        return res;
    }
};

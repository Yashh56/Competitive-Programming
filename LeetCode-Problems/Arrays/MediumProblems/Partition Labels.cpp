class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int> lastPosition;
        
        int n = s.size();

        for(int i=0;i<n;i++){
            lastPosition[s[i]] = i;
        }
        vector<int> partitions;
        int start = 0, end = 0;

        for(int i=0;i<n;i++){
            end = max(end,lastPosition[s[i]]);
            if(i==end){
                partitions.push_back(end-start+1);
                start = i + 1;
            }
        }
        return partitions;
    }
};

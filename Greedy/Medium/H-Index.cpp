class Solution {
public:
    int f(int mid,vector<int>& citations){
        int cnt = 0;
        int n = citations.size();
        for(int i=0;i<n;i++){
            if(mid<=citations[i]){
                cnt++;
            }
        }
        return (cnt>=mid) ? cnt:0;
    }

    int hIndex(vector<int>& citations) {
     int high = INT_MIN,low = 1,ans=0;
     int n = citations.size();
     for(int i=0;i<n;i++){
        high=max(high,citations[i]);
     }   
     while(low<=high){
        int mid = low+(high-low)/2;
        int temp = f(mid,citations);
        if(temp!=0){
            ans = mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
     }
     return ans;
    }
};

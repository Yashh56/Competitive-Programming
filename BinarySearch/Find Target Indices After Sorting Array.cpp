class Solution {
public:
    vector<int> targetIndices(vector<int>& a, int target) {
        sort(a.begin(),a.end());
        int n = a.size();
        int low = 0;
        int high = n-1;
        vector<int> res;
        while(low<=high){
            int mid = (low+high)/2;
            if(a[mid]==target){
                res.push_back(mid);
                int front = mid+1,back = mid-1;
                while(front<n and a[front]==target){
                    res.push_back(front);
                    front+=1;
                }
                while(back>=0 and a[back]==target){
                    res.push_back(back);
                    back-=1;
                }
                break;
            }
            else if(a[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};

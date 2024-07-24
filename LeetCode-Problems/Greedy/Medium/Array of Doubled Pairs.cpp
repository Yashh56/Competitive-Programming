class Solution {
public:
    static bool customSort(int a,int b){
        return abs(a)<abs(b);
    }
    bool canReorderDoubled(vector<int>& arr) {
     int n = arr.size();
     unordered_map<int,int> freq;
     for(int i : arr) freq[i]++;
     sort(arr.begin(),arr.end(),customSort);
     int cnt = 0;
     for(int i:arr){
        int twice = 2*i;
        if(freq[i] > 0 && freq[twice] > 0){
            freq[twice]--;
            freq[i]--;
            cnt++;

            if(freq[i] < 0) return false;
        }
     }
     return cnt >= n/2;
    }
};


bool compare(int a,int b){
        return to_string(a)+to_string(b) > to_string(b)+to_string(a);
    }

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),compare);
        for(auto a:nums){
            cout<<a<<endl;
        }
        string s ="";
        for(int i=0;i<nums.size();i++){
            s+=to_string(nums[i]);
            if(s[0]=='0') return "0";
        }
        return s;
    }
};

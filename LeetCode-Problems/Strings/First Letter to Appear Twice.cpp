class Solution {
public:
    char repeatedCharacter(string s) {
        vector<char>a;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(i!=0 && find(a.begin(),a.end(),s[i])!=a.end()){
                return s[i];
            }else{
                a.push_back(s[i]);
            }
        }
        return s[0];
    }
};

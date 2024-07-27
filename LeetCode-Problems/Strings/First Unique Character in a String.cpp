class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        for(int i=0;i<n;i++){
            char temp = s[i];
            bool isUnique = true;

            for(int j=0;j<n;j++){
                if(i!=j && temp == s[j]){
                    isUnique = false;
                    break;
                }
            }

            if(isUnique){
                return i;
            }
        }
        return -1;
    }
};

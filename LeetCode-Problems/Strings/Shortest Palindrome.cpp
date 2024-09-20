class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.length();
        int i = 0 , j = n-1;
        while(j>=0){
            if(s[i]==s[j]){
                i++;
            }
            j--;
        }

        string remain = s.substr(i);

        cout<<remain<<endl;

        if(i==n){
            return s;
        }

        // if(remain.size() == 0){
        //     return s;
        // } 
        string rev = remain;

        reverse(rev.begin(),rev.end());

        cout<<rev<<" "<<s.substr(0,i)<< " "<<remain<<endl;

        return rev + shortestPalindrome(s.substr(0,i)) + remain;
    }
};

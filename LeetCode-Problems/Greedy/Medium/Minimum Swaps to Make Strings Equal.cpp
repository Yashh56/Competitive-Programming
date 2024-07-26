class Solution {
public:
    int minimumSwap(string s1, string s2) {
        if(s1.length()!=s2.length()){
            return -1;
        }
        int n = max(s1.length(),s2.length());
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]){
                continue;
            }
            if(s1[i]=='x'){
                x++;
            }else{
                y++;
            }
        }
        if((x+y)%2!=0){
            return -1;
        }
        return(x+1)/2+(y+1)/2;
        

    }
};

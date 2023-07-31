class Solution {
public:
    int countBinarySubstrings(string s) {
        int res=0;
        int temp=0;
        int c=1;
        for(int i = 0; i<s.size()-1; i++){
            if(s[i]==s[i+1]){
                c++;
            }
            else{
                res+=min(temp,c);
                temp=c;
                c=1;
            }
        }
        res+=min(temp,c);
        return res;
    }
};

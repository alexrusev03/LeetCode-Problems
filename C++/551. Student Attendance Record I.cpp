class Solution {
public:
    bool checkRecord(string s) {
        int a = 0;
        int l = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='L'){
                l++;
            }
            else if(s[i]=='A'){
                l = 0;
                a++;
            }
            else{
                l=0;
            }
            if(l>=3){
                return false;
            }
        }
        if(a>=2){
            return false;
        }
        return true;
    }
};

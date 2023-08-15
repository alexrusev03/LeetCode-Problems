class Solution {
public:
    int minimumDeletions(string s) {
        stack<char> stk;
        int res=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'a'){
                if(stk.size()!=0){
                    stk.pop();
                    res++;
                }
            }
            else{
               stk.push(s[i]);
            }
        }
        return res;
    }
};

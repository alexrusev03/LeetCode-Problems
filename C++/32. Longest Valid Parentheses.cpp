class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        int res = 0;
        int l = -1;
        stack<int> stk;
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                stk.push(i);
            }
            else{
                if(stk.empty()){
                    l = i;
                }
                else{
                    stk.pop();
                    if(stk.empty()){
                        res=max(res,i-l);
                    }
                    else{
                        res=max(res,i-stk.top());
                    }
                }
            }
        }
        return res;
    }
};

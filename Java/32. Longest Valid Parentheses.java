class Solution {
    public int longestValidParentheses(String s) {
        int n = s.length();
        int res = 0;
        int l = -1;
        Stack<Integer> stk = new Stack<Integer>();
        for(int i = 0; i < n; i++){
            if(s.charAt(i) == '('){
                stk.push(i);
            }
            else{
                if(stk.isEmpty()){
                    l = i;
                }
                else{
                    stk.pop();
                    if(stk.isEmpty()){
                        res=Math.max(res,i-l);
                    }
                    else{
                        res=Math.max(res,i-stk.peek());
                    }
                }
            }
        }
        return res;
    }
}

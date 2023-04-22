public class Solution {
    public int LongestValidParentheses(string s) {
        int n = s.Length;
        int res = 0;
        int l = -1;
        Stack<int> stk = new Stack<int>();
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                stk.Push(i);
            }
            else{
                if(stk.Count==0){
                    l = i;
                }
                else{
                    stk.Pop();
                    if(stk.Count==0){
                        res=Math.Max(res,i-l);
                    }
                    else{
                        res=Math.Max(res,i-stk.Peek());
                    }
                }
            }
        }
        return res;
    }
}

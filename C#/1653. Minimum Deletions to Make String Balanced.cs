public class Solution {
    public int MinimumDeletions(string s) {
        Stack<char> stk = new Stack<char>();
        int res=0;
        for(int i=0;i<s.Length;i++){
            if(s[i] == 'a'){
                if(stk.Count!=0){
                    stk.Pop();
                    res++;
                }
            }
            else{
               stk.Push(s[i]);
            }
        }
        return res;
    }
}

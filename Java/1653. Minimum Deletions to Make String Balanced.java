class Solution {
    public int minimumDeletions(String s) {
        Stack<Character> stk = new Stack<Character>();
        int res=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i) == 'a'){
                if(stk.size()!=0){
                    stk.pop();
                    res++;
                }
            }
            else{
               stk.push(s.charAt(i));
            }
        }
        return res;
    }
}

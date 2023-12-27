class Solution {
    public int mctFromLeafValues(int[] arr) {
        int res = 0;
        Stack<Integer> stk = new Stack<Integer>();
        stk.push(Integer.MAX_VALUE);
        for(int i: arr){
            while(stk.peek()<=i){
                int m = stk.pop();
                res += m*Math.min(stk.peek(),i);
            }
            stk.push(i);
        }
        while(stk.size()>2){
            res += stk.pop()*stk.peek();
        }
        return res;
    }
}

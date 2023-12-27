public class Solution {
    public int MctFromLeafValues(int[] arr) {
        int res = 0;
        Stack<int> stk = new Stack<int>();
        stk.Push(Int32.MaxValue);
        foreach(int i in arr){
            while(stk.Peek()<=i){
                int m = stk.Pop();
                res += m*Math.Min(stk.Peek(),i);
            }
            stk.Push(i);
        }
        while(stk.Count>2){
            res += stk.Pop()*stk.Peek();
        }
        return res;
    }
}

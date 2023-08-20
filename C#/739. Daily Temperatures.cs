public class Solution {
    public int[] DailyTemperatures(int[] temperatures) {
        int n = temperatures.Length;
        int[] arr = new int[n];
        Stack<int> st = new Stack<int>();
        for(int i = 0; i < n; i++){
            while(st.Count > 0){
                if(temperatures[i] > temperatures[st.Peek()]){
                    arr[st.Peek()] = i - st.Peek();
                    st.Pop();
                }
                else{
                    break;
                }
            }
            st.Push(i);
        }
        return arr;
    }
}

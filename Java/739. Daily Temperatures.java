class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        int n = temperatures.length;
        int[] arr = new int[n];
        Stack<Integer> st = new Stack<Integer>();
        for(int i = 0; i < n; i++){
            while(st.size() > 0){
                if(temperatures[i] > temperatures[st.peek()]){
                    arr[st.peek()] = i - st.peek();
                    st.pop();
                }
                else{
                    break;
                }
            }
            st.push(i);
        }
        return arr;
    }
}

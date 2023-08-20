class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> vec(n);
        stack<int> st;
        for(int i = 0; i < n; i++){
            while(st.size() > 0){
                if(temperatures[i] > temperatures[st.top()]){
                    vec[st.top()] = i - st.top();
                    st.pop();
                }
                else{
                    break;
                }
            }
            st.push(i);
        }
        return vec;
    }
};

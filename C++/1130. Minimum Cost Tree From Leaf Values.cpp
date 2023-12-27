class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int res = 0;
        stack<int> stk;
        stk.push(INT_MAX);
        for(int i: arr){
            while(stk.top()<=i){
                int m = stk.top();
                stk.pop();
                res += m*min(stk.top(),i);
            }
            stk.push(i);
        }
        while(stk.size()>2){
            int t = stk.top();
            stk.pop();
            res += t*stk.top();
        }
        return res;
    }
};

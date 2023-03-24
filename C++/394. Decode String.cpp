class Solution {
public:
    string decodeString(string s) {
        stack<string> strStack;
        stack<int> nums;
        string ans;
        int num = 0;
        for(char c : s) {
            if(c>='0' && c<='9') {
                num = num*10 + (c-'0');                              
            }
            else if(c == '[') {
                strStack.push(ans);
                nums.push(num);
                ans = "";
                num = 0;
            }
            else if(c == ']') {
                string temp = ans;
                for(int i = 0; i < nums.top()-1; ++i) {
                    ans += temp;
                }
                ans = strStack.top() + ans;
                strStack.pop();
                nums.pop();
            }
            else{
                ans.push_back(c);
            }
        }
        return ans;
    }
};

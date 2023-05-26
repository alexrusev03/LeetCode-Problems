class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string w = "";
        int i = 0;
        while(i < s.size()){
            while(i < s.size() && s[i] != ' '){
                w += s[i];
                i++;
            }
            if (w.size() != 0) {
                if (ans.size() != 0) {
                    ans = w + " " + ans;
                }
                else {
                    ans = w;
                }
                w = "";
            }
            i++;
        }
        return ans;
    }
};

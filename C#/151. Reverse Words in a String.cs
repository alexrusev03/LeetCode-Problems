public class Solution {
    public string ReverseWords(string s) {
        string ans = "";
        string w = "";
        int i = 0;
        while(i < s.Length){
            while(i < s.Length && s[i] != ' '){
                w += s[i];
                i++;
            }
            if (w.Length != 0) {
                if (ans.Length != 0) {
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
}

public class Solution {
    public bool IsSubsequence(string s, string t) {
        if(helper(s,t,s.Length,t.Length)!=false){
            return true;
        }
        return false;
    }
    public bool helper(string s, string t, int i, int j){
        if(i == 0){
            return true;
        }
        if(j == 0){
            return false;
        }
        if (s[i-1] == t[j-1]){
            return helper(s,t,i-1,j-1);
        }
        return helper(s,t,i,j-1);
    }
}

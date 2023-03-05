class Solution {
    public boolean isSubsequence(String s, String t) {
        if(helper(s,t,s.length(),t.length())!=false){
            return true;
        }
        return false;
    }
    public boolean helper(String s, String t, int i, int j){
        if(i == 0){
            return true;
        }
        if(j == 0){
            return false;
        }
        if (s.charAt(i-1) == t.charAt(j-1)){
            return helper(s,t,i-1,j-1);
        }
        return helper(s,t,i,j-1);
    }
}

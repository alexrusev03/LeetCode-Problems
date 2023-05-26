class Solution {
    public String reverseWords(String s) {
        String ans = "";
        String w = "";
        int i = 0;
        while(i < s.length()){
            while(i < s.length() && s.charAt(i) != ' '){
                w += s.charAt(i);
                i++;
            }
            if (w.length() != 0) {
                if (ans.length() != 0) {
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

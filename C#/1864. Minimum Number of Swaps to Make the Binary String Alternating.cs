public class Solution {
    public int MinSwaps(string s) {
        int zeros = 0;
        int ones = 0;
        for(int i = 0; i<s.Length; i++){
            if(s[i] == '0'){
                zeros++;
            }
            else{
                ones++;
            }
        }
        if(Math.Abs(zeros - ones) > 1){
            return -1;
        }
        if(zeros > ones){
            return helper(s, '0');
        }
        if(zeros < ones){
            return helper(s, '1');
        }
        return Math.Min(helper(s, '0'), helper(s, '1'));
    }
    int helper(String s, char ch) {
        int c = 0;
        for(int i = 0; i < s.Length; i += 2){
            if(s[i] != ch){
                c++;
            }
        }
        return c;
    }
}

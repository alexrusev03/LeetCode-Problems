class Solution {
    public int minSwaps(String s) {
        int zeros = 0;
        int ones = 0;
        for(int i = 0; i<s.length(); i++){
            if(s.charAt(i) == '0'){
                zeros++;
            }
            else{
                ones++;
            }
        }
        if(Math.abs(zeros - ones) > 1){
            return -1;
        }
        if(zeros > ones){
            return helper(s, '0');
        }
        if(zeros < ones){
            return helper(s, '1');
        }
        return Math.min(helper(s, '0'), helper(s, '1'));
    }
    int helper(String s, char ch) {
        int c = 0;
        for(int i = 0; i < s.length(); i += 2){
            if(s.charAt(i) != ch){
                c++;
            }
        }
        return c;
    }
}

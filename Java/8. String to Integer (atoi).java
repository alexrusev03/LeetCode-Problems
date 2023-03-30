class Solution {
    public int myAtoi(String s) {
        double ans = 0;
        int idx=0;
        int sign=1;
        s = s.strip();
        int n = s.length();
        if(idx < n && (s.charAt(idx) == '-' || s.charAt(idx) == '+')) {
            sign = s.charAt(idx) == '-' ? -1 : 1;
            idx++;
        }
        while(idx < n && s.charAt(idx) >= '0' && s.charAt(idx) <= '9'){
            ans = ans*10 + (s.charAt(idx)-'0');
            idx++;
        }
        if(ans*sign>=Integer.MAX_VALUE){return Integer.MAX_VALUE;}
        if(ans*sign<=Integer.MIN_VALUE){return Integer.MIN_VALUE;}
        return sign*(int)ans;
    }
}

public class Solution {
    public int MyAtoi(string s) {
        double ans = 0;
        int idx=0;
        int sign=1;
        s = s.Trim(' ');
        int n = s.Length;
        if(idx < n && (s[idx] == '-' || s[idx] == '+')) {
            sign = s[idx] == '-' ? -1 : 1;
            idx++;
        }
        while(idx < n && s[idx] >= '0' && s[idx] <= '9'){
            ans = ans*10 + (s[idx]-'0');
            idx++;
        }
        if(ans*sign>=Int32.MaxValue){return Int32.MaxValue;}
        if(ans*sign<=Int32.MinValue){return Int32.MinValue;}
        return sign*(int)ans;
    }
}

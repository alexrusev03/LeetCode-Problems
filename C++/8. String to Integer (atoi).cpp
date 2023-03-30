class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        double ans = 0;
        int idx=0;
        int sign=1;
        while(s[idx] == ' '){
            idx++;
        }
        if(idx < n && (s[idx] == '-' || s[idx] == '+')) {
            sign = s[idx] == '-' ? -1 : 1;
            idx++;
        }
        while(idx < n && s[idx] >= '0' && s[idx] <= '9'){
            ans = ans*10 + (s[idx]-'0');
            idx++;
        }
        ans*=sign;
        if(ans>INT_MAX){return INT_MAX;}
        if(ans<INT_MIN){return INT_MIN;}
        return ans;
    }
};

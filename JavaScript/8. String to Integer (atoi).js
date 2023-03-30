/**
 * @param {string} s
 * @return {number}
 */
var myAtoi = function(s) {
    var ans = 0;
    var idx=0;
    var sign=1;
    var MIN = Math.pow(-2, 31);
    var MAX = Math.pow(2, 31) - 1;
    s = s.trim(' ');
    var n = s.length;
    if(idx < n && (s[idx] == '-' || s[idx] == '+')) {
        sign = s[idx] == '-' ? -1 : 1;
        idx++;
    }
    while(idx < n && s[idx] >= '0' && s[idx] <= '9'){
        ans = ans*10 + (s[idx]-'0');
        idx++;
    }
    if(ans*sign>=MAX){return MAX;}
    if(ans*sign<=MIN){return MIN;}
    return sign*ans;
};

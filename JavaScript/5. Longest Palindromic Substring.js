/**
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function(s) {
    var n=s.length;
    var len=1;
    var begin=0;
    for(var i=1;i<=n;i++){
        var l=i-1;
        var r=i;
        while(l>=0 && r<n && s[l]==s[r]){
            if(r-l+1>len){
                len=r-l+1;
                begin=l;
            }
            l--;
            r++;
        }
        l=i-1;
        r=i+1;
        while(l>=0 && r<n && s[l]==s[r]){
            if(r-l+1>len){
                len=r-l+1;
                begin=l;
            }
            l--;
            r++;
        }
    }
    return s.substring(begin,begin+len);
};

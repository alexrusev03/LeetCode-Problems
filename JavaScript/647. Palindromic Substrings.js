/**
 * @param {string} s
 * @return {number}
 */
var countSubstrings = function(s) {
    var res = 0;
    var n = s.length;
    for(var i = 0; i<n; i++){
        var j = i;
        var k = i;
        while(j>=0 && k<n && s[j] == s[k]){
            j--;
            k++;
            res++;
        }
        j = i;
        k = i+1;
        while(j>=0 && k<n && s[j] == s[k]){
            j--;
            k++;
            res++;
        }
    }
    return res;
};

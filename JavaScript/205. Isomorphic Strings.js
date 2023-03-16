/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function(s, t) {
    var ms=new Array();
    var mt=new Array();
    for (var i = 0; i < s.length; i++) {
        if (ms[s[i]] != mt[t[i]]){
            return false;
        }
        ms[s[i]] = i + 1;
        mt[t[i]] = i + 1;
    }
    return true;
};

/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isSubsequence = function(s, t) {
    if(helper(s,t,s.length,t.length)!=false){
        return true;
    }
    return false;
};
var helper = function(s, t, i, j){
    if(i == 0){
        return true;
    }
    if(j == 0){
        return false;
    }
    if (s[i-1] == t[j-1]){
        return helper(s,t,i-1,j-1);
    }
    return helper(s,t,i,j-1);
};

/**
 * @param {string} s
 * @return {number[]}
 */
var diStringMatch = function(s) {
    var n = s.length;
    var i = 0;
    var j = n;
    var res = new Array(n+1);
    for(var k = 0; k<n; k++){
        if(s[k]=='D'){
            res[k] = j;
            j--;
        }
        else{
            res[k] = i;
            i++;
        }
    }
    res[n] = j;
    return res;
};

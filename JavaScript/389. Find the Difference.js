/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
var findTheDifference = function(s, t) {
    var n = t.length;
    var m = s.length;
    sArr = [...s].sort();
    tArr = [...t].sort()
    var i = 0;
    while(i<m){
        if(sArr[i]!=tArr[i]){
            return tArr[i];
        }
        i++;
    }
    return tArr[n-1];
};

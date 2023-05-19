/**
 * @param {string} s
 * @param {string} t
 * @return {number}
 */
var numDistinct = function(s, t) {
    var n1 = s.length;
    var n2 = t.length;
    var arr = new Array(n2+1).fill(0).map(() => new Array(n1+1).fill(0));
    for(var j=0; j<=n1; j++) {
        arr[0][j] = 1;
    }
    for(var i=0; i<n2; i++) {
        for(var j=0; j<n1; j++) {
            if(t[i] == s[j]) {
                arr[i+1][j+1] = arr[i][j] + arr[i+1][j];
            }
            else {
                arr[i+1][j+1] = arr[i+1][j];
            }
        }
    } 
    return arr[n2][n1];
};

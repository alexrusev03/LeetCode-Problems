/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var spiralOrder = function(matrix) {
    var m = matrix.length;
    var n = matrix[0].length;
    var u = 0;
    var d = m - 1;
    var l = 0;
    var r = n - 1;
    var idx = 0;
    var res = new Array(m*n);
    while (u <= d && l <= r) {
        for (var i = l; i <= r; i++) {
            res[idx] = matrix[u][i];
            idx++;
        }
        u++;
        if (u > d) {
            break;
        }
        for (var j = u; j <= d; j++) {
            res[idx] = matrix[j][r];
            idx++;
        }
        r--;
        if (r < l) {
            break;
        }
        for (var i = r; i >= l; i--) {
            res[idx] = matrix[d][i];
            idx++;
        }
        d--;
        if (d < u) {
            break;
        }
        for (var j = d; j >= u; j--) {
            res[idx] = matrix[j][l];
            idx++;
        }
        l++;
        if (l > r) {
            break;
        }
     }
    return res;
};

/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(matrix, target) {
    var m = matrix.length;
    var n = matrix[0].length;
    var l = 0;
    var r = m*n-1;
    while (l<=r){
        var mid = Math.floor((l+r)/2);
        var i=Math.floor(mid/n);
        var j=Math.floor(mid%n); 
        if (matrix[i][j]==target){
            return true;
        }
        else if(matrix [i][j]<target){
            l=mid + 1;
        }
        else{
            r=mid-1;
        }
    }
    return false;
};

/**
 * @param {number[][]} matrix
 * @return {boolean}
 */
var isToeplitzMatrix = function(matrix) {
    for(var i = 0; i<matrix.length-1; i++){
        for(var j = 0; j<matrix[0].length-1; j++){
            if(matrix[i][j]!=matrix[i+1][j+1]){
                return false;
            }
        }
    }
    return true;
};

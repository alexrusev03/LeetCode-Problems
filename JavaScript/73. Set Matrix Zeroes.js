/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var setZeroes = function(matrix) {
    var m = matrix.length;
    var n = matrix[0].length;
    var flag = false;
    for(var j = 0; j < n; j++){
        if(matrix[0][j]==0){
            flag = true;
        }
        for(var i = 1; i < m; i++){
            if(matrix[i][j]==0){
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        }
    }
    for(var j = 1; j < n; j++){
        for(var i = 1; i < m; i++){
            if(matrix[0][j]==0 || matrix[i][0]==0){
                matrix[i][j]=0;
            }
        }
    }
    if (matrix[0][0] == 0) {
        for (var i = 0; i < m; i++){
            matrix[i][0] = 0;
        }
    }
    if (flag==true){
        for (var j = 0; j < n; j++){
            matrix[0][j] = 0;
        }
    }
};

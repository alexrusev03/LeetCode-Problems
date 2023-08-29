/**
 * @param {number[][]} matrix
 * @return {number}
 */
var maxMatrixSum = function(matrix) {
    var count=0;
    var min=Number.MAX_VALUE;
    var res=0;
    for(var i=0; i<matrix.length; i++){
        for(var j=0; j<matrix[0].length; j++){
            if(matrix[i][j]<0){
                count+=1;
            }
            res+=Math.abs(matrix[i][j]);
            if(Math.abs(matrix[i][j])<min){
                min=Math.abs(matrix[i][j]);
            }
        }
    }
    if(count%2==1){
        return res-(2*min);
    }
    else{
        return res;
    }
};

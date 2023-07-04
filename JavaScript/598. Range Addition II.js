/**
 * @param {number} m
 * @param {number} n
 * @param {number[][]} ops
 * @return {number}
 */
var maxCount = function(m, n, ops) {
    var r = m;
    var c = n;
    for(var i = 0; i<ops.length; i++){
        if(ops[i][0] < r){
            r = ops[i][0];
        }
        if(ops[i][1] < c){
            c = ops[i][1];
        } 
    }
    return r*c;
};

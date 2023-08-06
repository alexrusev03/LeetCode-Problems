/**
 * @param {number} n
 * @return {number}
 */
var minOperations = function(n) {
    var res=0;
    for(var j=0; j<n/2; j++){
        res+=n-2*j-1;
    }
    return res;
};

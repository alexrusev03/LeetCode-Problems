/**
 * @param {number[]} beans
 * @return {number}
 */
var minimumRemoval = function(beans) {
    var n = beans.length;
    var res = Number.MAX_VALUE;
    var sum = 0;
    beans.sort((a,b) => a-b);
    for(var i of beans){
        sum += i;
    }
    for(var i = 0; i<n; i++){
        res = Math.min(res, sum - (n - i) * beans[i]);
    }
    return res;
};

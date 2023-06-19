/**
 * @param {number} n
 * @return {number}
 */
var getMoneyAmount = function(n) {
    var arr = Array.from(Array(n+1), () => new Array(n+1));
    var res = helper(arr, 1, n);
    return res;
};
var helper = function(arr, l, r) {
    if(l >= r){
        return 0;
    }
    if(arr[l][r]!=null){
        return arr[l][r];
    }
    var res = Number.MAX_VALUE;
    for(var i=l; i<=r; i++){
        res = Math.min(res, i + Math.max(helper(arr, l, i-1), helper(arr, i+1, r)));
    }
    return arr[l][r] = res;
};

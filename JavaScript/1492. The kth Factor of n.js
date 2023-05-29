/**
 * @param {number} n
 * @param {number} k
 * @return {number}
 */
var kthFactor = function(n, k) {
    var list = new Array();
    for(var i = 1; i<=n; i++){
        if(n%i==0){
            list.push(i);
        }
    }
    if(k>list.length){
        return -1;
    }
    return list[k-1];
};

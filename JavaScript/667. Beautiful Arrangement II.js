/**
 * @param {number} n
 * @param {number} k
 * @return {number[]}
 */
var constructArray = function(n, k) {
    var res = new Array(n);
    var r = 0;
    var d = k+1;
    for(var i=0; i<k+1; i++){
        if(i%2==1){
            res[i]= d--;
        }
        else{
            res[i] = ++r;
        }
    }
    for(var i = k+1; i<n; i++){
        res[i] = i+1;
    }
    return res;
};

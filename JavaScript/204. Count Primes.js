/**
 * @param {number} n
 * @return {number}
 */
var countPrimes = function(n) {
    var res = 0;
    var arr = new Array(n).fill(0);
    for(var i=2;i<n;i++){
        if(arr[i]==0){
            res++;
            for(var j=2;i*j<n;j++){
                arr[i*j]=1;
            }
        }
    }
    return res;
};

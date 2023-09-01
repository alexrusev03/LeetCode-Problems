/**
 * @param {number} n
 * @return {number}
 */
var reinitializePermutation = function(n) {
    var res = 1;
    var i = n/2;
    while(i > 1){
        if(i%2==0){
            i /= 2;
        }
        else{
            i = n/2+(i-1)/2;
        }
        res++;
    }
    return res;
};

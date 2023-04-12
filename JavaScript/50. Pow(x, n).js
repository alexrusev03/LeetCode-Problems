/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */
var myPow = function(x, n) {
    res = 1;
    if(n == 2147483647){
        return (x == 1) ? 1 : (x == -1) ? -1 : 0;
    }
    if(n == -2147483648){
        return (x == 1 || x == -1) ? 1 : 0;
    }
    if(n>0){
        for(var i = 0; i<n; i++){
            res*=x;
        }
        return res;
    }
    if(n<0){
        for(var i = 0; i>n; i--){
            res/=x;
        }
        return res;
    }
    return res;
};

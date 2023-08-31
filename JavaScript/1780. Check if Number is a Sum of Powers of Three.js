/**
 * @param {number} n
 * @return {boolean}
 */
var checkPowersOfThree = function(n) {
    var max = Math.floor(Math.log(n)/Math.log(3));
    var res = 0;
    for(var i = max; i>=0; i--){
        if(res + Math.pow(3,i) > n){
            continue;
        }
        res += Math.pow(3,i);
        if(res==n){
            return true;
        }
        if(res+Math.pow(3,i)<n){
            break;
        }
    }
    return false;
};

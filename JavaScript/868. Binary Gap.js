/**
 * @param {number} n
 * @return {number}
 */
var binaryGap = function(n) {
    var res = 0;
    var l = -1;
    for(var i = 0; i<32; i++){
        if((n & (1 << i))!=0){
            if(l != -1){
                res = Math.max(res, i - l);
            }
            l = i;
        }
    }
    return res;
};

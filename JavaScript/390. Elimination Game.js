/**
 * @param {number} n
 * @return {number}
 */
var lastRemaining = function(n) {
    var l = true;
    var res = 1;
    var step = 1;
    var rem = n;
    while(rem > 1){
        if(l || rem % 2 == 1){
            res += step;
        }
        step *= 2;
        rem =  Math.floor(rem / 2);
        l = !l;
    }
    return res;
};

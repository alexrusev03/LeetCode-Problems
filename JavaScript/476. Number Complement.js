/**
 * @param {number} num
 * @return {number}
 */
var findComplement = function(num) {
    var t = num;
    var p = 1;
    while(t!=0){
        t = t >> 1;
        p = p << 1;
    }
    return (p-1)^num;
};

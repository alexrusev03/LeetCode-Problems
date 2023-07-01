/**
 * @param {number[]} candyType
 * @return {number}
 */
var distributeCandies = function(candyType) {
    var n = candyType.length;
    var dict = new Map();
    var res = 0;
    for(var i of candyType) {
        if (!dict[i]) {
            if (res == n/2) {
                return n/2;
            }
            res++;
        }
        dict[i]=1;
    }
    return res;
};

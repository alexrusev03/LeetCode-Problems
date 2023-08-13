/**
 * @param {number[]} piles
 * @return {number}
 */
var maxCoins = function(piles) {
    var n = piles.length;
    piles.sort((a,b) => a-b);
    var res=0;
    for(var i = n/3; i<n; i+=2){
        res += piles[i];
    }
    return res;
};

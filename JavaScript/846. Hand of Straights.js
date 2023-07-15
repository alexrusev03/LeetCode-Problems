/**
 * @param {number[]} hand
 * @param {number} groupSize
 * @return {boolean}
 */
var isNStraightHand = function(hand, groupSize) {
    hand.sort((a, b) => a - b);
    var n = hand.length;
    for(var i=0; i<n; i++){
        if(hand[i] == -1){
            continue;
        }
        var k = i;
        for(var j=1; j<groupSize; j++){
            while(k < n && hand[i] + j != hand[k]){
                k++;
            }
            if(k == n){
                return false;
            }
            hand[k] = -1;
        }
    }
    return true;
};

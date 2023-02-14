/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubarraySumCircular = function(nums) {
    var sum=0;
    var currMax=0;
    var currMin=0;
    var maxs=Number.MIN_SAFE_INTEGER;
    var mins=Number.MAX_SAFE_INTEGER;   
    for(var i of nums){
        sum+=i;
        currMax+=i;
        currMin+=i;
        maxs=Math.max(maxs, currMax);
        if(currMax<0) {currMax=0;}
        mins=Math.min(mins, currMin);
        if(currMin>0) {currMin=0;}
    }
    if(sum==mins){
        return maxs;
    }
    return Math.max(maxs,sum-mins);
};

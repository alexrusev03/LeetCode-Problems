/**
 * @param {number[]} nums
 * @return {number}
 */
var maxAbsoluteSum = function(nums) {
    var pos = Number.MIN_VALUE;
    var curr = 0;
    for(var i = 0; i < nums.length; i++){
        curr += nums[i];
        if(curr > pos){
            pos = curr;
        }
        if(curr < 0){
            curr = 0;
        }
    }
    curr = 0;
    var neg = Number.MAX_VALUE;
    for(var i = 0; i < nums.length; i++){
        curr += nums[i];
        if(neg > curr){
            neg = curr;
        }
        if(curr > 0){
            curr = 0;
        }
    }
    return Math.max(Math.abs(pos), Math.abs(neg));
};

/**
 * @param {number[]} nums
 * @param {number} indexDiff
 * @param {number} valueDiff
 * @return {boolean}
 */
var containsNearbyAlmostDuplicate = function(nums, indexDiff, valueDiff) {
    var n = nums.length;
    for(var i = 0; i < n; i++) {
        for(var j = i+1; j <= i+indexDiff && j < n; j++) {
            if(Math.abs(nums[i] - nums[j]) <= valueDiff) {
                return true;
            }
        }
    }       
    return false;
};

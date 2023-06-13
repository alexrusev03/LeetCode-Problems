/**
 * @param {number[]} nums
 * @return {number}
 */
var minMoves = function(nums) {
    var res = 0;
	var m = Number.MAX_VALUE;
	for(var i = 0; i<nums.length; i++){
        m = Math.min(m,nums[i]);
    }
	for(var i = 0; i<nums.length; i++){
        res+=nums[i]-m;
    }
	return res;
};

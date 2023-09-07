/**
 * @param {number[]} nums
 * @return {number}
 */
var maxAscendingSum = function(nums) {
    var sum = nums[0];
    var res = nums[0];
    for(var i = 1; i < nums.length; i++){
        if(nums[i] > nums[i-1]){
            sum += nums[i];
        }
        else{
            res = Math.max(res,sum);
            sum = nums[i];
        }
    }
    res = Math.max(res,sum);
    return res;
};

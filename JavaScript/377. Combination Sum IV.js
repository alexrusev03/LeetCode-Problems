/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var combinationSum4 = function(nums, target) {
    var arr = new Array(target+1).fill(-1);
    return helper(nums,arr,target);
}
var helper = function(nums,arr,target) {
    if (target < 0){return 0;}
    if (arr[target] != -1){return arr[target];}
    if (target == 0){return 1;}
    var res = 0;
    for (var i = 0; i < nums.length; i++) {
        res += helper(nums,arr,target - nums[i]);
    }
    arr[target] = res;
    return arr[target];
};

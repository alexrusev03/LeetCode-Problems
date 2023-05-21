/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    var map = new Map();
    for (var i = 0; i<nums.length; i++){
        if (map.has(nums[i])){
            map.set(nums[i], map.get(nums[i]) + 1);
        }
        else {
            map.set(nums[i], 1);
        }
    }
    for (var i = 0; i<nums.length; i++){
        if(map.get(nums[i])==1){
            return nums[i];
        }
    }
    return 0;
};

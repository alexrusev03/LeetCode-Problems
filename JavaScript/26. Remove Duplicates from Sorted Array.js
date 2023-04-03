/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    var n = nums.length;
    if(n == 0){
        return 0;
    }
    var num = 1;
    for(var i = 0; i < n - 1; i++) {
        if(nums[i] != nums[i + 1]){
            nums[num] = nums[i + 1];
            num++;
        }
    }
    return num;
};

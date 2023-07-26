/**
 * @param {number[]} nums
 * @return {number}
 */
var longestSubarray = function(nums) {
    var n = nums.length;
    var i = 0;
    var j = 0;
    var count = 0;
    var res = 0;
    while(j<n){
        if(nums[j] == 0){
            count++;
        }
        while(count > 1){
            if(nums[i] == 0){
                count--;
            }
            i++;
        }
        res = Math.max(res, j - i);
        j++;
    }
    return res;
};

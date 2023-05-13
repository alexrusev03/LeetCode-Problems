/**
 * @param {number[]} nums
 * @return {number}
 */
var longestConsecutive = function(nums) {
    var n = nums.length;
    if(n == 0){
        return 0;
    }
    nums.sort((a, b) => a - b);
    var curr = 1;
    var maxs = 0;
    for(var i=0; i<n-1; i++){
        if(nums[i+1] != nums[i]){
            if(nums[i+1] == nums[i] + 1){
                curr++;
            }
            else{
                maxs = Math.max(maxs, curr);
                curr = 1;
            }
        }
    }
    return Math.max(maxs, curr);
};

/**
 * @param {number[]} nums
 * @return {number}
 */
var wiggleMaxLength = function(nums) {
    var n1 = 0;
    var n2 = 0;
    for(var i=1; i< nums.length; i++){
        if(nums[i] > nums[i-1]){n1 = n2+1;}
        else if(nums[i] < nums[i-1]){n2 = n1+1;}
    }
    return Math.max(n1+1, n2+1);
};

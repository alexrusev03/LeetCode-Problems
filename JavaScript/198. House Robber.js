/**
 * @param {number[]} nums
 * @return {number}
 */
var rob = function(nums) {
    var n = nums.length;
    if(n==1){return nums[0];}
    else{
    var prev2 = nums[0];
    var prev = Math.max(prev2,nums[1]); 
    var result;
    for(var i = 2; i<n; i++){
        result = Math.max(prev, prev2+nums[i]);
        prev2=prev;
        prev=result;
    }
    return prev;
    }
};

/**
 * @param {number[]} nums
 * @return {number}
 */
var numberOfArithmeticSlices = function(nums) {
    var n = nums.length;
    var count = 0;
    var num = 0;
    for(var i = 0; i < n - 2;i++){
        if(nums[i+1] - nums[i] == nums[i+2] - nums[i+1]){
             count++;
        } 
        else{ 
            num += count * (count + 1) / 2;
            count=0;
        }
    }
    if(count!=0){
        num += count * (count+1) / 2;
    }
    return num;
};

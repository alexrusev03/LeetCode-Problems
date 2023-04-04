/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var threeSumClosest = function(nums, target) {
    nums.sort((a, b) => a - b);
    var diff=Number.MAX_VALUE;
    var res=0;
    for (var i = 0; i < nums.length-1; i++){
        var j=i+1;
        var n= nums.length-1;
        while(j<n){
            if (Math.abs(nums[i] + nums[j] + nums[n] - target) < diff){
                diff=Math.abs(nums[i] + nums[j] + nums[n] - target);
                res = nums[i] + nums[j] + nums[n];
            }
            if (nums[i]+nums[j]+nums[n]<target){
                j++;
            }
            else{
                n--;
            }
        }
        if(res==target){
            break;
        }
    }
    return res;
};

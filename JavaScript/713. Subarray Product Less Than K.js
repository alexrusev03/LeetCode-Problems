/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var numSubarrayProductLessThanK = function(nums, k) {
    var res=0;
    var j=0;
    var prod=1;
    for(var i=0;i<nums.length;i++){
        prod*=nums[i];
        while(j<= i&& prod>=k) {
            prod/=nums[j++];
        } 
        res += i-j+1;
    }
    return res;
};

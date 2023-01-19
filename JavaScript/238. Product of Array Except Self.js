/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    var n=nums.length;
    var left=1,right=1;
    var answer = new Array(n);
    for(var i=0;i<n;i++){
        answer[i]=left;
        left*=nums[i];
    }
    for(var i=n-1;i>=0;i--){
        answer[i]*=right;
        right*=nums[i];
    }
    return answer;
};

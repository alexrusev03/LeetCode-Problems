/**
 * @param {number[]} nums
 * @return {number}
 */
var lengthOfLIS = function(nums) {
    var n=nums.length;
    var dp = Array(n).fill(1);
    var res=0;
    for(var i=0;i<n;i++){
        for(var j=i-1;j>=0;j--){
            if(nums[i]>nums[j]){
                dp[i]=Math.max(dp[i],dp[j]+1);
            }
        }
        res=Math.max(res,dp[i]);
    }
    return res;
};

/**
 * @param {number[]} nums
 * @return {number}
 */
var findNumberOfLIS = function(nums) {
    var n = nums.length;
    var dp = Array(n).fill(1);
    var count = Array(n).fill(1);
    var maxL = 1;  
    for(var i=1;i<n;i++){
        for(var j=0;j<i;j++){
            if(nums[i]>nums[j]){
                if(dp[j] + 1 > dp[i]){ 
                    dp[i] = dp[j] + 1;
                    count[i] = count[j];
                } 
				else if(dp[j]+1 == dp[i]){ 
                    count[i] += count[j];
                }
            }
        }
        maxL = Math.max(maxL,dp[i]);
    }     
    var res = 0;
    for(var i=0;i<n;i++){
        if(dp[i]==maxL)
            res += count[i];
    }  
    return res;
};

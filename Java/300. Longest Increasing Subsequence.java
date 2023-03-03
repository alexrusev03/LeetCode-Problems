class Solution {
    public int lengthOfLIS(int[] nums) {
        int n=nums.length;
        int[] dp = new int[n+1];
        Arrays.fill(dp,1);
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(nums[i]>nums[j]){
                    dp[i]=Math.max(dp[i],dp[j]+1);
                }
            }
            res=Math.max(res,dp[i]);
        }
        return res;
    }
}

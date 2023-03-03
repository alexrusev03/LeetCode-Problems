public class Solution {
    public int LengthOfLIS(int[] nums) {
        int n=nums.Length;
        int[] dp = new int[n+1];
        Array.Fill(dp,1);
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(nums[i]>nums[j]){
                    dp[i]=Math.Max(dp[i],dp[j]+1);
                }
            }
            res=Math.Max(res,dp[i]);
        }
        return res;
    }
}

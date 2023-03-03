public class Solution {
    public int FindNumberOfLIS(int[] nums) {
        int n = nums.Length;
        int[] dp = new int[n];
        Array.Fill(dp,1);
        int[] count = new int[n];
        Array.Fill(count,1);
        int maxL = 1;  
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
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
            maxL = Math.Max(maxL,dp[i]);
        }
        
        int res = 0;
        for(int i=0;i<n;i++){
            if(dp[i]==maxL)
                res += count[i];
        }  
        return res;
    }
}

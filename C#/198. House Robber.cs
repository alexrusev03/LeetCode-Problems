public class Solution {
    public int Rob(int[] nums) {
        int n = nums.Length;
        if(n==1){return nums[0];}
        else{
        int prev2 = nums[0];
        int prev = Math.Max(prev2,nums[1]);
        int result;
        for(int i = 2; i<n; i++){
            result = Math.Max(prev, prev2+nums[i]);
            prev2=prev;
            prev=result;
        }
        return prev;
        }
    }
}

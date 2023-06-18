public class Solution {
    public int MaxRotateFunction(int[] nums) {
        int res = Int32.MinValue;
        int n = nums.Length;
        int sum = 0;
        int f = 0;
        for(int i=0;i<n;i++){
            f += i*nums[i];
            sum += nums[i];
        }
        for(int i=1;i<=n;i++){
            f = f + sum - n*nums[n-i];
            res = Math.Max(res, f);
        }
        return res;
    }
}

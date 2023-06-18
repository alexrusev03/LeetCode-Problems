class Solution {
    public int maxRotateFunction(int[] nums) {
        int res = Integer.MIN_VALUE;
        int n = nums.length;
        int sum = 0;
        int f = 0;
        for(int i=0;i<n;i++){
            f += i*nums[i];
            sum += nums[i];
        }
        for(int i=1;i<=n;i++){
            f = f + sum - n*nums[n-i];
            res = Math.max(res, f);
        }
        return res;
    }
}

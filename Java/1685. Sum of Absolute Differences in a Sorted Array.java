class Solution {
    public int[] getSumAbsoluteDifferences(int[] nums) {
        int n = nums.length;
        int[] p = new int[n];
        int[] res = new int[n];
        p[0] = nums[0];
        for(int i = 1; i < n; i++){
            p[i] = nums[i] + p[i - 1];
        }
        res[0] = p[n - 1] - p[0] - (n - 1) * nums[0];
        for(int i=1; i<n; i++){
            res[i] = p[n - 1] - p[i - 1] - p[i] - (n - 2*i - 1) * nums[i];
        }
        return res;
    }
}

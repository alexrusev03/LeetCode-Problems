class Solution {
    public int maxProduct(int[] nums) {
        int n = nums.length;
        int l = 1;
        int r = 1;
        int ans = Integer.MIN_VALUE;
        for(int i = 0; i<n; i++){
            if(l==0){l=1;}
            if(r==0){r=1;}
            l=l*nums[i];
            r=r*nums[n-i-1];
            ans = Math.max(ans, Math.max(l,r));
        }
        return ans;
    }
}

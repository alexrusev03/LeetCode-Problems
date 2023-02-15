public class Solution {
    public int MaxProduct(int[] nums) {
        int n = nums.Length;
        int l = 1;
        int r = 1;
        int ans = Int32.MinValue;
        for(int i = 0; i<n; i++){
            if(l==0){l=1;}
            if(r==0){r=1;}
            l=l*nums[i];
            r=r*nums[n-i-1];
            ans = Math.Max(ans, Math.Max(l,r));
        }
        return ans;
    }
}

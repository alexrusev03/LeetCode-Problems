public class Solution {
    public int MinimumDeletions(int[] nums) {
        int n = nums.Length;
        int maxidx = 0;
        int minidx = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] > nums[maxidx]){
                maxidx = i;
            }
            if(nums[i] < nums[minidx]){
                minidx = i;
            }
        }
        int fr  = Math.Max(maxidx,minidx) + 1;
        int bc = n - Math.Min(minidx,maxidx);
        int both = Math.Min(minidx,maxidx) + 1 + (n - Math.Max(minidx,maxidx));
        return Math.Min(fr,Math.Min(bc,both));
    }
}

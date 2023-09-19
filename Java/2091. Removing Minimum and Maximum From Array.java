class Solution {
    public int minimumDeletions(int[] nums) {
        int n = nums.length;
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
        int fr  = Math.max(maxidx,minidx) + 1;
        int bc = n - Math.min(minidx,maxidx);
        int both = Math.min(minidx,maxidx) + 1 + (n - Math.max(minidx,maxidx));
        return Math.min(fr,Math.min(bc,both));
    }
}

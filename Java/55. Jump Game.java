class Solution {
    public boolean canJump(int[] nums) {
        int end=0;
        int idx=0;
        int n=nums.length;
        for(int i=0;i<n;i++){
            idx=Math.max(idx,i+nums[i]);
            if(i==end){
                end=idx;
            }
        }
        if(end>=n-1){return true;}
        return false;
    }
}

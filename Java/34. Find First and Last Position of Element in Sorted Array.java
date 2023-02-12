class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] pos = {-1,-1};
        int n = nums.length;
        int idx=0;
        for(int i = 0; i<n; i++){
            if(nums[i]==target){
                if(pos[0]==-1){
                    pos[0]=i;
                }
                idx=Math.max(i,idx);
            }
        }
        if(pos[0]!=-1){
            pos[1]=idx;
        }
        return pos;
    }
}

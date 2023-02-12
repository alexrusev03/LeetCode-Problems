public class Solution {
    public int[] SearchRange(int[] nums, int target) {
        int[] pos = {-1,-1};
        int n = nums.Length;
        int idx=0;
        for(int i = 0; i<n; i++){
            if(nums[i]==target){
                if(pos[0]==-1){
                    pos[0]=i;
                }
                idx=Math.Max(i,idx);
            }
        }
        if(pos[0]!=-1){
            pos[1]=idx;
        }
        return pos;
    }
}

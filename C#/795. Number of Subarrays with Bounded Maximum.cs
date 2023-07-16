public class Solution {
    public int NumSubarrayBoundedMax(int[] nums, int left, int right) {
        int res = 0;
        int l = -1;
        int r = -1;
        for (int i = 0; i < nums.Length; i++) {
            if(nums[i] > right){
                l = i;
            }
            if(nums[i] >= left){
                r = i;
            }
            res += r-l;
        }
        return res;
    }
}

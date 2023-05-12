public class Solution {
    public bool Search(int[] nums, int target) {
        int l = 0;
        int r = nums.Length - 1;
        while(l <= r){
            int m = (r+l)/2;
            if (nums[m] == target || nums[l]==target || nums[r]==target){
                return true;
            }
            else if(nums[m] > target){
                r--;
                l++;
            }
            else{
                l++;
            }
        }
        return false;
    }
}

public class Solution {
    public int RemoveElement(int[] nums, int val) {
        int r = 0;
        for (int i = 0; i < nums.Length; i++){
            if (nums[i] == val){
                r++;
            }
            else{
                nums[i-r] = nums[i];
            }
        }
        return nums.Length - r;
    }
}

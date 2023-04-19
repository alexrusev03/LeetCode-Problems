public class Solution {
    public void NextPermutation(int[] nums) {
        int i = nums.Length-1;
        int j = nums.Length-1;
        while(i>0 && nums[i-1]>=nums[i]) {
            i--;
        }
        if(i>0) {
            while(nums[i-1]>=nums[j]){
                j--;
            }
            swap(nums, i-1, j);
        }
        reverse(nums, i, nums.Length-1);
    }
    public void swap(int[] nums, int i, int j){
        int t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
    }
    public void reverse(int[] nums, int i, int j){
        while(i<j){
            swap(nums, i++, j--);
        }
    }
}

public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        int n = nums.Length;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]==target-nums[i]){
                    return new int[]{i,j};
                }
            }
        }
        return new int[]{};
    }
}

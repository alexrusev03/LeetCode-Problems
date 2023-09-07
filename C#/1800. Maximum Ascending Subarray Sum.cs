public class Solution {
    public int MaxAscendingSum(int[] nums) {
        int sum = nums[0];
        int res = nums[0];
        for(int i = 1; i < nums.Length; i++){
            if(nums[i] > nums[i-1]){
                sum += nums[i];
            }
            else{
                res = Math.Max(res,sum);
                sum = nums[i];
            }
        }
        res = Math.Max(res,sum);
        return res;
    }
}

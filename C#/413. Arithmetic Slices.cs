public class Solution {
    public int NumberOfArithmeticSlices(int[] nums) {
        int n = nums.Length;
        int count = 0;
        int num = 0;
        for(int i = 0; i < n - 2;i++){
            if(nums[i+1] - nums[i] == nums[i+2] - nums[i+1]){
                 count++;
            } 
            else{ 
                num += count * (count + 1) / 2;
                count=0;
            }
        }
        if(count!=0){
            num += count * (count+1) / 2;
        }
        return num;
    }
}

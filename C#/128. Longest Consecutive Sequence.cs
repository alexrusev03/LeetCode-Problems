public class Solution {
    public int LongestConsecutive(int[] nums) {
        int n = nums.Length;
        if(n == 0){
            return 0;
        }
        Array.Sort(nums);
        int curr = 1;
        int maxs = 0;
        for(int i=0; i<n-1; i++){
            if(nums[i+1] != nums[i]){
                if(nums[i+1] == nums[i] + 1){
                    curr++;
                }
                else{
                    maxs = Math.Max(maxs, curr);
                    curr = 1;
                }
            }
        }
        return Math.Max(maxs, curr);
    }
}

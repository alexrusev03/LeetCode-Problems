public class Solution {
    public bool ContainsNearbyAlmostDuplicate(int[] nums, int indexDiff, int valueDiff) {
        int n = nums.Length;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j <= i+indexDiff && j < n; j++) {
                if(Math.Abs(nums[i] - nums[j]) <= valueDiff) {
                    return true;
                }
            }
        }       
        return false;
    }
}

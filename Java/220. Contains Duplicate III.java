class Solution {
    public boolean containsNearbyAlmostDuplicate(int[] nums, int indexDiff, int valueDiff) {
        int n = nums.length;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j <= i+indexDiff && j < n; j++) {
                if(Math.abs(nums[i] - nums[j]) <= valueDiff) {
                    return true;
                }
            }
        }       
        return false;
    }
}

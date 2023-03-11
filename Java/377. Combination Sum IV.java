class Solution {
    public int combinationSum4(int[] nums, int target) {
        Integer[] arr = new Integer[target + 1];
        return helper(nums,arr,target);
    }
    public int helper(int[] nums,Integer[] arr, int target) {
        if (target < 0){return 0;}
        if (arr[target] != null){return arr[target];}
        if (target == 0){return 1;}
        int res = 0;
        for (int i = 0; i < nums.length; i++) {
            res += helper(nums,arr,target - nums[i]);
        }
        arr[target] = res;
        return arr[target];
    }
}

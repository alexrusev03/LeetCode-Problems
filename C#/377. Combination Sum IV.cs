public class Solution {
    public int CombinationSum4(int[] nums, int target) {
        int[] arr = new int[target + 1];
        for(int i = 0; i<arr.Length;i++){
            arr[i]=-1;
        }
        return helper(nums,arr,target);
    }
    public int helper(int[] nums,int[] arr, int target) {
        if (target < 0){return 0;}
        if (arr[target] != -1){return arr[target];}
        if (target == 0){return 1;}
        int res = 0;
        for (int i = 0; i < nums.Length; i++) {
            res += helper(nums,arr,target - nums[i]);
        }
        arr[target] = res;
        return arr[target];
    }
}

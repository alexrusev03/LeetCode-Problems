class Solution {
    public int longestConsecutive(int[] nums) {
        int n = nums.length;
        if(n == 0){
            return 0;
        }
        Arrays.sort(nums);
        int curr = 1;
        int maxs = 0;
        for(int i=0; i<n-1; i++){
            if(nums[i+1] != nums[i]){
                if(nums[i+1] == nums[i] + 1){
                    curr++;
                }
                else{
                    maxs = Math.max(maxs, curr);
                    curr = 1;
                }
            }
        }
        return Math.max(maxs, curr);
    }
}

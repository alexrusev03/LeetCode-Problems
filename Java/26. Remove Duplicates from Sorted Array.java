class Solution {
    public int removeDuplicates(int[] nums) {
        int n = nums.length;
        if(n == 0){
            return 0;
        }
        int num = 1;
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] != nums[i + 1]){
                nums[num] = nums[i + 1];
                num++;
            }
        }
        return num;
    }
}

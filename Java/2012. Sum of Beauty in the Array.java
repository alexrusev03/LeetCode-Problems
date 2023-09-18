class Solution {
    public int sumOfBeauties(int[] nums) {
        int n = nums.length;
        int[] r = new int[n];
        int[] l = new int[n];
        r[n - 1] = nums[n - 1];
        l[0] = nums[0];
        for(int i = n - 2; i >= 0; i--){
            r[i] = Math.min(r[i + 1], nums[i]);
        }
        for(int i = 1; i < n; i++){
            l[i] = Math.max(l[i - 1], nums[i]);
        }
        int res = 0;
        for(int i = 1; i < n - 1; i++){
            if(nums[i] > l[i - 1] && nums[i] < r[i + 1]){
                res += 2;
            }
            else if(nums[i] > nums[i - 1] && nums[i] < nums[i + 1]){
                res++;
            }
        }   
        return res;
    }
}

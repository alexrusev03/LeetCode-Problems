class Solution {
    public int[] mostCompetitive(int[] nums, int k) {
        int n = nums.length;
        int j = 0;
        int[] res = new int[k];
        for(int i = 0; i < n; i++){
            while(j != 0 && n - i > k - j && res[j - 1] > nums[i]){
                j--;
            }
            if(j < k){
                res[j] = nums[i];
                j++;
            }
        }
        return res;
    }
}

class Solution {
    public int minMoves(int[] nums) {
        int res = 0;
		int m = Integer.MAX_VALUE;
		for(int i = 0; i<nums.length; i++){
            m = Math.min(m,nums[i]);
        }
		for(int i = 0; i<nums.length; i++){
            res+=nums[i]-m;
        }
		return res;
    }
}

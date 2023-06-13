public class Solution {
    public int MinMoves(int[] nums) {
        int res = 0;
		int m = Int32.MaxValue;
		for(int i = 0; i<nums.Length; i++){
            m = Math.Min(m,nums[i]);
        }
		for(int i = 0; i<nums.Length; i++){
            res+=nums[i]-m;
        }
		return res;
    }
}

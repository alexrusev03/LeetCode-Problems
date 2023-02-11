public class Solution {
    public int Rob(int[] nums) {
        int n = nums.Length;
        if(n==1){return nums[0];}
        else{
            int[] vec1 = new int[n];
            int[] vec2 = new int[n];
            vec1[1]=nums[0];
            vec2[1]=nums[1];
            for(int i = 2; i<n; i++){
                vec1[i] = Math.Max(vec1[i-1], vec1[i-2] + nums[i-1]);
                vec2[i] = Math.Max(vec2[i-1], vec2[i-2] + nums[i]);
            }
            return Math.Max(vec1[n-1], vec2[n-1]);
        }
    }
}

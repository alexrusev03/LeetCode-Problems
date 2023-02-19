public class Solution {
    public int MinSubArrayLen(int target, int[] nums) {
        int n = nums.Length;
        int res = 0;
        int i=0;
        int j=0;
        int m = Int32.MaxValue;
        while(j < n){
            while(res<target && j<n){
                res += nums[j++];
            }
            if(res<target){break;}
            while(res>=target && i < j){
                res -= nums[i++];
            }
            m = Math.Min(m , j-i+1);     
        }
        return (m==Int32.MaxValue) ? 0 :m;
    }
}

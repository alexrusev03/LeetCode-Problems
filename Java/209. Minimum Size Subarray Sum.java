class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int n = nums.length;
        int res = 0;
        int i=0;
        int j=0;
        int m = Integer.MAX_VALUE;
        while(j < n){
            while(res<target && j<n){
                res += nums[j++];
            }
            if(res<target){break;}
            while(res>=target && i < j){
                res -= nums[i++];
            }
            m = Math.min(m , j-i+1);     
        }
        return (m==Integer.MAX_VALUE) ? 0 :m;
    }
}

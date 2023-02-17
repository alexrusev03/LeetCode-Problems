class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        int res=0;
        int j=0;
        int prod=1;
        for(int i=0;i<nums.length;i++){
            prod*=nums[i];
            while(j<= i&& prod>=k) {
                prod/=nums[j++];
            } 
            res += i-j+1;
        }
        return res;
    }
}

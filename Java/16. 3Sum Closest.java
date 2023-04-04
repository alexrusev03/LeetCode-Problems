class Solution {
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        int diff=Integer.MAX_VALUE;
        int res=0;
        for (int i = 0; i < nums.length-1; i++){
            int j=i+1;
            int n= nums.length-1;
            while(j<n){
                if (Math.abs(nums[i] + nums[j] + nums[n] - target) < diff){
                    diff=Math.abs(nums[i] + nums[j] + nums[n] - target);
                    res = nums[i] + nums[j] + nums[n];
                }
                if (nums[i]+nums[j]+nums[n]<target){
                    j++;
                }
                else{
                    n--;
                }
            }
            if(res==target){
                break;
            }
        }
        return res;
    }
}

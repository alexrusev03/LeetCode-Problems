public class Solution {
    public int ThreeSumClosest(int[] nums, int target) {
        Array.Sort(nums);
        int diff=Int32.MaxValue;
        int res=0;
        for (int i = 0; i < nums.Length-1; i++){
            int j=i+1;
            int n= nums.Length-1;
            while(j<n){
                if (Math.Abs(nums[i] + nums[j] + nums[n] - target) < diff){
                    diff=Math.Abs(nums[i] + nums[j] + nums[n] - target);
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

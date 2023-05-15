public class Solution {
    public int FindMin(int[] nums) {
        int l=0;
        int r=nums.Length-1;
        while(l<r){
            int mid=(r+l)/2;
            if(nums[mid]<nums[r]){
                r=mid;
            }
            else if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else{
                r--;
            }
        } 
        return nums[l]; 
    }
}

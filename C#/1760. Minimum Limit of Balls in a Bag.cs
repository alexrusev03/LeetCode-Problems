public class Solution {
    public int MinimumSize(int[] nums, int maxOperations) {
        int mx = 0;
        int mn = 1;
        int res = 0;
        foreach(int i in nums){
            mx = Math.Max(mx,i);
        }
        while(mn <= mx){
            int c = 0;
            int m = (mx+mn)/2;
            for(int i = 0; i<nums.Length; i++){
                c += (nums[i]-1)/m;
            }
            if(c>maxOperations){
                mn = m+1;
            }
            else{
                res = m;
                mx = m-1;
            }
        }
        return res;
    }
}

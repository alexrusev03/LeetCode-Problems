class Solution {
    public int numberOfSubarrays(int[] nums, int k) {
        int odd=0;
        int j=0;
        int count=0;
        int res=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]%2==1){
                odd++;
                count=0;
            }
            while(odd==k){
                if(nums[j]%2==1){
                    odd--;
                }
                j++;
                count++;
            }
            res+=count;
        }
        return res;
    }
}

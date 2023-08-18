class Solution {
    public List<Integer> minSubsequence(int[] nums) {
        int n=nums.length;
        int rest=0;
        int sum=0;
        List<Integer> res = new ArrayList<Integer>();
        Arrays.sort(nums);
        for(int i=0; i<n; i++){
            rest+=nums[i];
        }
        for(int j=n-1; j>=0; j--){
            sum+=nums[j];
            rest-=nums[j];
            res.add(nums[j]);
            if(sum>rest){
                break;
            }
        }
        return res;
    }
}

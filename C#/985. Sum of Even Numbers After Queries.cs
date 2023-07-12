public class Solution {
    public int[] SumEvenAfterQueries(int[] nums, int[][] queries) {
        int sum=0;
        int[] res = new int[nums.Length];
        for(int i=0; i<nums.Length; i++){
            if(nums[i]%2==0){
                sum += nums[i];
            }
        }
        for(int i=0; i<queries.Length; i++){
            if(nums[queries[i][1]]%2==0){
                if((nums[queries[i][1]]+queries[i][0])%2!=0){
                    sum -= nums[queries[i][1]];
                }
                if((nums[queries[i][1]]+queries[i][0])%2==0){
                    sum += queries[i][0];
                }
            }
            if(nums[queries[i][1]]%2!=0 && (nums[queries[i][1]]+queries[i][0])%2==0){
                sum += nums[queries[i][1]]+queries[i][0];
            }
            nums[queries[i][1]] = nums[queries[i][1]]+queries[i][0];
            res[i]=sum;
        }
        return res;
    }
}

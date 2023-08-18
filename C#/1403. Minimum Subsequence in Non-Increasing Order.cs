public class Solution {
    public IList<int> MinSubsequence(int[] nums) {
        int n=nums.Length;
        int rest=0;
        int sum=0;
        List<int> res = new List<int>();
        Array.Sort(nums);
        for(int i=0; i<n; i++){
            rest+=nums[i];
        }
        for(int j=n-1; j>=0; j--){
            sum+=nums[j];
            rest-=nums[j];
            res.Add(nums[j]);
            if(sum>rest){
                break;
            }
        }
        return res;
    }
}

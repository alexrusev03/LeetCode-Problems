public class Solution {
    public IList<string> SummaryRanges(int[] nums) {
        int n = nums.Length;
        IList<string> res = new List<string>();
        for(int i = 0; i < n; i++){
            int j = i;
            while(j + 1 < n && nums[j + 1] == nums[j] + 1){
                j++;
            }
            if(j > i){
                res.Add(nums[i].ToString() + "->" + nums[j].ToString());
            }
            else{
                res.Add(nums[i].ToString());
            }
            i = j;
        }
        return res;
    }
}

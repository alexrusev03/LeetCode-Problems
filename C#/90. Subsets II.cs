public class Solution {
    public IList<IList<int>> SubsetsWithDup(int[] nums) {
        Array.Sort(nums);
        IList<IList<int>> res = new List<IList<int>>();
        IList<int> temp = new List<int>();
        helper(0,nums,temp,res);
        return res;
    }
    public void helper(int i,int[] nums,IList<int> temp,IList<IList<int>> res){
        res.Add(new List<int>(temp));
        for(int j=i;j<nums.Length;j++){
            if(j>i && nums[j] == nums[j-1]){
                continue;
            }
        temp.Add(nums[j]);
        helper(j+1,nums,temp,res);
        temp.Remove(nums[j]);
        }
    }
}

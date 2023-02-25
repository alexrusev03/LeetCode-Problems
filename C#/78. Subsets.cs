public class Solution {
    public IList<IList<int>> Subsets(int[] nums) {
        IList<IList<int>> res = new List<IList<int>>();
        IList<int> temp = new List<int>();
        helper(0,nums,temp,res);
        return res;
    }
    public void helper(int i,int[] nums,IList<int> temp,IList<IList<int>> res){
        if(i==nums.Length){
            res.Add(new List<int>(temp));
            return;
        }
        temp.Add(nums[i]);
        helper(i+1,nums,temp,res);
        temp.Remove(nums[i]);
        helper(i+1,nums,temp,res);
    }
}

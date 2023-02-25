class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        helper(0,nums,temp,res);
        return res;
    }
    public void helper(int i,int[] nums,List<Integer> temp,List<List<Integer>> res){
        if(i==nums.length){
            res.add(new ArrayList<Integer>(temp));
            return;
        }
        temp.add(nums[i]);
        helper(i+1,nums,temp,res);
        temp.remove(temp.size()-1);
        helper(i+1,nums,temp,res);
    }
}

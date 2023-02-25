class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> res = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        helper(0,nums,temp,res);
        return res;
    }
    public void helper(int i,int[] nums,List<Integer> temp,List<List<Integer>> res){
        res.add(new ArrayList<Integer>(temp));
        for(int j=i;j<nums.length;j++){
            if(j>i && nums[j] == nums[j-1]){
                continue;
            }
        temp.add(nums[j]);
        helper(j+1,nums,temp,res);
        temp.remove(temp.size()-1);
        }
    }
}

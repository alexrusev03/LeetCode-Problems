class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> res = new ArrayList<>();
        List<Integer> list = new ArrayList<>();
        helper(candidates, res, list, target, 0);
        return res;
    }
    public void helper(int[] candidates, List<List<Integer>> res, List<Integer> list, int target, int idx){
        if(target < 0){
            return;
        }
        else if(target == 0){
            res.add(new ArrayList<>(list));
        }
        else{
            for(int i=idx; i<candidates.length; i++){
                list.add(candidates[i]);
                helper(candidates,res,list,target-candidates[i],i);
                list.remove(list.size()-1);
            }
        }
    }
}

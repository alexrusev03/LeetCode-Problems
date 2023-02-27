public class Solution {
    public IList<IList<int>> CombinationSum(int[] candidates, int target) {
        List<IList<int>> res = new();
        List<int> list = new();
        helper(candidates, res, list, target, 0);
        return res;
    }
    public void helper(int[] candidates, List<IList<int>> res, List<int> list, int target, int idx){
        if(target < 0){
            return;
        }
        else if(target == 0){
            res.Add(new List<int>(list));
        }
        else{
            for(int i=idx; i<candidates.Length; i++){
                list.Add(candidates[i]);
                helper(candidates,res,list,target-candidates[i],i);
                list.RemoveAt(list.Count-1);
            }
        }
    }
}
